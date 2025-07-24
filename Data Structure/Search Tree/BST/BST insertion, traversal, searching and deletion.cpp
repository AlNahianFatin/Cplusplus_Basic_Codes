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

Node* inorderSucc(Node* root)
{
    Node* curr = root;
    while(curr && curr -> left != NULL)
        curr = curr -> left;
    return curr;
}

Node* deleteInBST(Node* root, int key)
{
    if(key < root -> data)
        root -> left = deleteInBST(root -> left, key);
    else if(key > root -> data)
        root -> right = deleteInBST(root -> right, key);
    else
    {
        if(root -> left == NULL)
        {
            Node* temp = root -> right;
            delete root;
            return temp;
        }
        else if(root -> right == NULL)
        {
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        Node* temp = inorderSucc(root -> right);
        root -> data = temp -> data;
        root -> right = deleteInBST(root -> right, temp -> data);
    }
    return root;
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

    Node* root1 = NULL;
    root1 = insertBST(root1, 50);
    root1 = insertBST(root1, 30);
    root1 = insertBST(root1, 20);
    root1 = insertBST(root1, 40);
    root1 = insertBST(root1, 70);
    root1 = insertBST(root1, 60);
    root1 = insertBST(root1, 80);

    cout<<"\nOriginal BST inorder : ";
    inorder(root1);

    cout<<"\n\nCase 1 : Deleting a Leaf Node: 20\n";
    root1 = deleteInBST(root1, 20);
    inorder(root1);

    cout<<"\nCase 2 : Deleting Node with single child: 70\n";
    root = deleteInBST(root1, 70);
    inorder(root1);

    cout<<"\nCase 3 : Deleting Node with both child: 50\n";
    root1 = deleteInBST(root1, 50);
    inorder(root1);

    return 0;
}
