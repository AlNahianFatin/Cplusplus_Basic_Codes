#include <iostream>
using namespace std;
#include <string.h> /* provides strlen() prototype */

#define PRAISE " What a super marvelous name!"

int main(void) {
char name[40];
cout<<"What's your First Name? "<<endl;
cin>>name;
cout<<"Hello "<< name<< PRAISE<<endl;
cout<<"Your name of "<<strlen(name)<<" letters occupies "<<sizeof(name)<<" memory"<<endl;
return 0;
}
