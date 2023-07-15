#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int id;
    node * Left;
    node * Right;
    node * Parent;
};

class BinaryTree{
public:
    node * root;
    BinaryTree()
    {
        root = NULL;
    }
    node * CreateNewNode(int id)
    {
        node * newnode = new node;
        newnode->id = id;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->Parent = NULL;
        return newnode;
    }
    void Insertion(int id)
    {
        node *newnode = CreateNewNode(id);
        if(root == NULL)
        {
            root = newnode;
            return;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node * a = q.front();
            q.pop();
            int p=-1,l=-1,r=-1;
            if(a->Left != NULL)
            {
                q.push(a->Left);
            }
            else{
                a->Left = newnode;
                newnode->Parent = a;
                return;
            }
            if(a->Right != NULL)
            {
                q.push(a->Right);
            }
            else{
                a->Right = newnode;
                newnode->Parent = a;
                return;
            }
        }

    }
    void BFS()
    {
        if(root == NULL)return;

        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node * a = q.front();
            q.pop();
            int p=-1,l=-1,r=-1;
            if(a->Left != NULL)
            {
                l = a->Left->id;
                q.push(a->Left);
            }
            if(a->Right != NULL)
            {
                r = a->Right->id;
                q.push(a->Right);
            }
            if(a->Parent != NULL)
            {
                p = a->Parent->id;
            }
            cout<<"Node id "<<a->id<<" Left Child ="
            <<l<<" Right Child = "<<r<<" Parent id = "<<p<<"\n";
        }
    }

};
int main()
{
    BinaryTree bt;
    bt.Insertion(0);
    bt.Insertion(1);
    bt.Insertion(2);
    bt.Insertion(3);
    bt.Insertion(4);
    bt.Insertion(5);
    bt.BFS();
}

