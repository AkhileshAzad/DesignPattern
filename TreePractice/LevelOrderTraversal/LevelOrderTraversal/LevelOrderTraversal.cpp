// LevelOrderTraversal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};


void InOrderTraversal(Node * root)
{
    if (root == NULL) return; 

    cout << root->data << " ";
    InOrderTraversal(root->left);
    InOrderTraversal(root->right);

}

void LevelOrderTraversal(Node* root)
{
    if (root == NULL) return;
    
    int mx = 0;
    queue<Node*> q;  q.push(root);

    while (q.empty() == false)
    {
        int quesueSize = q.size();
        mx = max(mx, quesueSize);
        Node* curr = q.front(); q.pop();

 

    
        if (curr->left != NULL)
            q.push(curr->left);

        if (curr->right != NULL)
            q.push(curr->right);

    }

    cout << mx;
}


int main()
{
   Node* root = new Node(1);

   root->left = new Node(2);
   root->right = new Node(3);
   root->left->right = new Node(4);
   //InOrderTraversal(root);

   LevelOrderTraversal(root);

}