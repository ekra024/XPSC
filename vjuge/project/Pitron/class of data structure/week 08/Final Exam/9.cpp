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
    void Inorder(node *a)
    {
        if(a==NULL)return;
        Inorder(a->Left);
        cout<<a->id<<" ";
        Inorder(a->Right);

    }
    void Preorder(node *a)
    {
        if(a==NULL)return;
        cout<<a->id<<" ";
        Preorder(a->Left);
        Preorder(a->Right);

    }
    void Postorder(node *a)
    {
        if(a==NULL)return;
        Postorder(a->Left);
        Postorder(a->Right);
        cout<<a->id<<" ";
    }

};
int main()
{
    BinaryTree bt;
    bt.Insertion(20);
    bt.Insertion(10);
    bt.Insertion(22);
    bt.Insertion(5);
    bt.Insertion(12);
    bt.Insertion(21);
    bt.Insertion(25);
    bt.Insertion(3);
    bt.Insertion(15);
    bt.BFS();
    bt.Inorder(bt.root);
     cout<<"\n";
    bt.Preorder(bt.root);
     cout<<"\n";
    bt.Postorder(bt.root);
     cout<<"\n";

}

