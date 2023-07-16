#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int id;
    int val;
    node * left;
    node * right;
    node * parent;
};

class BinaryTree{
public:
    node * root;
    BinaryTree()
    {
        root = NULL;
    }
    node * CreateNode(int id,int val)
    {
        node * newnode = new node;
        newnode->id = id;
        newnode->val = val;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }
    void Insert(int id,int val)
    {
        node * newnode = CreateNode(id,val);
        if(root == NULL){
            root = newnode;
            return;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty()){
            node * a = q.front();
            q.pop();
            if(a->right != NULL){
                q.push(a->right);
            }
            else {
                a->right = newnode;
                newnode->parent = a;
                return;
            }
            if(a->left != NULL){
                q.push(a->left);
            }
            else{
                a->left = newnode;
                newnode->parent = a;
                return;
            }
        }
    }

    void BFS()
    {
        queue<node*>q;
        if(root == NULL) return;
        q.push(root);
        while(!q.empty()){
            node * a = q.front();
            q.pop();
            int p = -1, r = -1, l = -1;
            if(a->right != NULL){
                r = a->right->id;
                q.push(a->right);
            }
            if(a->left != NULL){
                l = a->left->id;
                q.push(a->left);
            }
            if(a->parent != NULL){
                p = a->parent->id;
            }

            cout<<"Node "<<a->id<<" parent "<<p<<" left "<<l<<" right "<<r<<"\n";
        }
    }
    void Search(node * a,int val)
    {
        if(a== NULL)return;

        if(a->val == val) {
            cout<<a->id <<" ";
        }
        Search(a->left ,val);
        Search(a->right ,val);
    }
};

int main()
{
    BinaryTree bt;
    bt.Insert(0,5);
    bt.Insert(1,6);
    bt.Insert(2,4);
    bt.Insert(3,1);
    bt.Insert(4,7);
    bt.Insert(5,10);

    bt.BFS();
    bt.Search(bt.root,4);
}
