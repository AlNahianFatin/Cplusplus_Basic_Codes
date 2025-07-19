#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);
    if (val < root -> data)
        root -> left = insertBST(root -> left, val);
    else
        root -> right = insertBST(root -> right, val);
    return root;
}

void preorder(struct Node* node)
{
    if (node == NULL)
        return;
    cout << node -> data << " ";
    preorder(node -> left);
    preorder(node -> right);
}

void inorder(struct Node* node)
{
    if(node == NULL)
        return;
    inorder(node -> left);
    cout<<node -> data<<" ";
    inorder(node -> right);
}

void postorder(struct Node* node)
{
    if (node == NULL)
        return;
    postorder(node -> left);
    postorder(node -> right);
    cout << node -> data << " ";
}

Node* searchInBST(Node* root, int key)
{
    if(root == NULL)
        return NULL;
    if(root -> data == key)
        return root;
    if(root -> data > key)
        return searchInBST(root -> left, key);
    return searchInBST(root -> right, key);
}

int main()
{
    int num, numToSearch;

    cout<<"How many integers you want to enter : ";
    cin>>num;

    int arr[num];

    cout<<"Enter the "<<num<<" integers : ";
    for(int i = 0; i < num; i++)
        cin>>arr[i];

    Node* root = NULL;
    root = insertBST(root, arr[0]);
    for(int i = 1; i < num; i++)
        insertBST(root, arr[i]);

    cout<<"\nPreorder traversal : ";
    preorder(root);
    cout<<endl;

    cout<<"Inorder traversal : ";
    inorder(root);
    cout<<endl;

    cout<<"Postorder traversal : ";
    postorder(root);
    cout<<endl;

    cout<<"\nEnter the integer you want to search : ";
    cin>>numToSearch;

    if(searchInBST(root, numToSearch) == NULL)
        cout<<"The integer "<<numToSearch<<" does not exist!"<<endl;
    else
        cout<<"The integer "<<numToSearch<<" exists."<<endl;

    return 0;
}

