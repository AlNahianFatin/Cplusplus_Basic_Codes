#ifndef GLUTIL_H
#define GLUTIL_H



#include <vector>
#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<Mmsystem.h>
#include <string>
#include <string.h>
#include <unistd.h>
#include<windows.h>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;


class TextureInfo {
public:
    int imageWidth;
    int imageHeight;
    GLubyte* imageData;
    GLuint textureID;

    TextureInfo(const char* filename) {
        FILE* file = fopen(filename, "rb");
        if (!file) {
            std::cout << "Error opening file: " << filename << std::endl;
            exit(1);
        }

        fseek(file, 18, SEEK_SET);
        fread(&imageWidth, sizeof(int), 1, file);
        fread(&imageHeight, sizeof(int), 1, file);

        int imageSize = imageWidth * imageHeight * 3;

        imageData = new GLubyte[imageSize];

        fseek(file, 54, SEEK_SET); // Skip the header
        fread(imageData, sizeof(GLubyte), imageSize, file);

        for (int i = 0; i < imageSize; i += 3) {
            GLubyte temp = imageData[i];
            imageData[i] = imageData[i + 2];
            imageData[i + 2] = temp;
        }

        fclose(file);

        glEnable(GL_TEXTURE_2D);
        glGenTextures(1, &textureID);
        glBindTexture(GL_TEXTURE_2D, textureID);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, imageWidth, imageHeight, 0, GL_RGB, GL_UNSIGNED_BYTE, imageData);
        glBindTexture(GL_TEXTURE_2D, 0);
        glDisable(GL_TEXTURE_2D);
    }
};
std::vector<TextureInfo> textures;
void loadImageAndStore(const char* filename) {
 textures.push_back(TextureInfo(filename));
 }
void ApplyTexture(float x1, float y1,float x2, float y2,float x3, float y3,float x4, float y4, GLuint texture )
{
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture);

    glBegin(GL_QUADS);
    glTexCoord2f(0.0, 0.0);
    glVertex2f(x1,y1);

    glTexCoord2f(1.0, 0.0);
    glVertex2f(x2,y2);

    glTexCoord2f(1.0, 1.0);
    glVertex2f(x3,y3);

    glTexCoord2f(0.0, 1.0);
    glVertex2f(x4,y4);
    glEnd();

    glDisable(GL_TEXTURE_2D);
}




///////////////morphed text////
std::string _originalText = "asdf$!";
std::string _targetText = "Welcome!";
float _animationDuration = 5.0;
float _morphSpeed = 0.0;

std::string calculateMorphedText(float time) {
    float t = std::min(1.0f, std::max(0.0f, time / _animationDuration));
    std::string morphedText;

    size_t maxLength = std::max(_originalText.size(), _targetText.size());

    for (size_t i = 0; i < maxLength; ++i) {
        float c1 = (i < _originalText.size()) ? _originalText[i] : ' ';
        float c2 = (i < _targetText.size()) ? _targetText[i] : ' ';
        float morphedChar = c1 * (1.0 - t) + c2 * t;
        morphedText += static_cast<char>(morphedChar);
    }

    return morphedText;
}


void mT_update(int value) {

    _morphSpeed += 0.2;
    glutPostRedisplay();
    glutTimerFunc(100, mT_update, 0);
}

void morphedText(std::string text, int posX, int posY, float scale, int fontWeight, float colorR, float colorG, float colorB) {
    _targetText=text;

    std::string morphedText = calculateMorphedText(_morphSpeed);

    glPushMatrix();
    glTranslatef(posX, posY, 0);
    glScalef(scale, scale, scale);
    glLineWidth(fontWeight);
    glColor3f(colorR, colorG, colorB);

    for (char &c : morphedText) {
        glutStrokeCharacter(GLUT_STROKE_ROMAN, c);
    }

    glPopMatrix();
}

/////




//////static texxt/////

void staticText(std::string text, int posX, int posY, float scale, int fontWeight, float colorR, float colorG, float colorB) {
    glPushMatrix();
    glTranslatef(posX, posY, 0);
    glScalef(scale, scale, scale);
    glLineWidth(fontWeight);
    glColor3f(colorR, colorG, colorB);

    for (char &c : text) {
        glutStrokeCharacter(GLUT_STROKE_ROMAN, c);
    }

    glPopMatrix();
}

//////////////

///typed text/////

char* _tText = "wqer";
int _tTextLength = strlen(_tText);
int _tCurrentIndex = 0;
int _tDelay = 100;

void _drawString(float x, float y,  char* strings) {
    glRasterPos2f(x, y);
    for (int i = 0; i < strlen(strings); ++i) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, strings[i]);
    }
}

void typedText(float x, float y,  char* strings) {
_tText = strings;
 _tTextLength = strlen(_tText);
    char currentText[_tTextLength + 1];
    strncpy(currentText, _tText, _tCurrentIndex);
    currentText[_tCurrentIndex] = '\0';
    _drawString(x, y, currentText);

}

void _keyboard_timer(int value) {
    if (_tCurrentIndex < _tTextLength) {
        _tCurrentIndex++;
        glutPostRedisplay();
        glutTimerFunc(_tDelay, _keyboard_timer, 0);
    }
}
/////////////////

void PlayMusic(const string& path)
{
    PlaySound(path.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP);
}
#endif
