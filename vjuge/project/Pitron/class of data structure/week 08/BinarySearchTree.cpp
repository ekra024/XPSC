#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node * left;
    node * right;
};

class BST{
public:
    node * root;
    BST(){
        root = NULL;
    }

    node * CreateNode(int val)
    {
       node * newnode = new node;
       newnode->data = val;
       newnode->left = NULL;
       newnode->right = NULL;
       return newnode;
    }

    void Insert(int val)
    {
        node * newnode = CreateNode(val);
        if(root == NULL)
        {
            root = newnode;
            return;
        }
        node * cur = root;
        node * pre = NULL;
        while(cur != NULL)
        {
            if(newnode->data > cur->data)
            {
                pre = cur;
                cur = cur->right;
            }
            else {
                pre = cur;
                cur = cur->left;
            }
        }
        if(newnode->data > pre->data)
        {
            pre->right = newnode;
        }
        else{
            pre->left = newnode;
        }
    }

    void BFS()
    {

        queue<node*>q;
        q.push(root);
        cout<<root->data<<"\n";
        while(!q.empty()){
            node * a = q.front();
            q.pop();
            int r = -1, l = -1;
            if(a->left != NULL){
                l = a->left->data;
                q.push(a->left);
            }
            if(a->right != NULL){
                r = a->right->data;
                q.push(a->right);
            }

            cout<<"Node "<<a->data<<" left "<<l<<" right "<<r<<"\n";
        }
    }

    bool Search(int val)
    {
        node * cur = root;
        while(cur != NULL)
        {
            if(val > cur->data)
                cur = cur->right;
            else if(val < cur->data)
                cur = cur->left;
            else return true;
        }
        return false;
    }

    void Delete(int val)
    {
        node * cur = root;
        node * pre = NULL;
        while(cur != NULL)
        {
            if(val > cur->data){
                pre = cur;
                cur = cur->right;
            }
            else if( val < cur->data){
                pre = cur;
                cur = cur->left;
            }
            else break;
        }
        if(cur == NULL)return;
        if(cur->left == NULL && cur->right == NULL)
        {
            if(pre->left != NULL && pre->left->data == val)
                pre->left = NULL;
            else pre->right = NULL;

            delete cur;
            return;
        }
        if(cur->left != NULL && cur->right == NULL)
        {
           if(pre->left != NULL && pre->left->data == val)
                pre->left = cur->left;
           else pre->right = cur->left;
           delete cur;
           return;
        }
        if(cur->right != NULL && cur->left == NULL)
        {
            if(pre->left != NULL && pre->left->data == val)
                pre->left = cur->right;
            else pre->right = cur->right;

            delete cur;
            return;
        }
        node * tmp = cur->right;
        while(tmp->left != NULL)
        {
            tmp = tmp->left;
        }
        int saved = tmp->data;
        Delete(saved);
        cur->data = saved;
    }
};

int main()
{
    BST bst;
    bst.Insert(6);
    bst.Insert(8);
    bst.Insert(10);
    bst.Insert(7);
    bst.Insert(3);
    bst.Insert(5);
    bst.Insert(4);

    bst.BFS();
    cout << bst.Search(8) <<"\n";
    cout << bst.Search(4) <<"\n";
    cout << bst.Search(20) <<"\n";

    //bst.Delete(10);
    bst.Delete(8);

     bst.BFS();
}
