#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int id;
    node * left;
    node * right;
    node * parent;
};

class BinaryTree{
public:
    node * root;  
    allnode[5];

    BinaryTree()
    {
        root = NULL;
    } 

    node * CreateNewNode(int id)
    {
        node * newnode = new node;
        newnode->id = id;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void build_binary_tree()
    {

    }

};

int main()
{
    return 0;
}