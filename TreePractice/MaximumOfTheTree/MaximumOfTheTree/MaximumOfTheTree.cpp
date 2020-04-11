// MaximumOfTheTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm> 
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
int MaximumOfTheTree(Node *root);

int main()
{
    Node* root = new Node(10);

    root->left = new Node(30);
    root->right = new Node(40);
    root->left->left = new Node(30);
    root->left->left->left = new Node(80);
    root->left->left->left->right = new Node(70);
    root->right->left = new Node(60);
    root->right->right = new Node(20);

    int maxValue = MaximumOfTheTree(root);


    cout << "MaximumOfTheTree  : " << maxValue;
}

int MaximumOfTheTree(Node * root)
{
    if (root == NULL) return 0;

    return  max(root->data, max(MaximumOfTheTree(root->left), MaximumOfTheTree(root->right)));
}
