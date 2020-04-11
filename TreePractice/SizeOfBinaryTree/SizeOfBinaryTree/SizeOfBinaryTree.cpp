// SizeOfBinaryTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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

int CalculateTheSizeOfBinaryTree(Node* root);


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

    //Calculate the size of the binary tree
    int size= CalculateTheSizeOfBinaryTree(root);



    cout << "Size of the Binary tree is " << size;
}

int  CalculateTheSizeOfBinaryTree(Node* root)
{
    if (root == NULL) return 0;

    return 1 + CalculateTheSizeOfBinaryTree(root->left) + CalculateTheSizeOfBinaryTree(root->right);
}
