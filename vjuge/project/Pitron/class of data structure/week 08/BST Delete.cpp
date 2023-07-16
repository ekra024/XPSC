#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node * Left;
    node * Right;
};

class BST{
public:
    node * root;

    BST()
    {
        root = NULL;
    }
     node * CreateNewNode(int value)
    {
        node * newnode = new node;
        newnode->value= value;
        newnode->Left = NULL;
        newnode->Right = NULL;
        return newnode;
    }
    void BFS()
    {
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node * a = q.front();
            q.pop();
            int p=-1,l=-1,r=-1;
            if(a->Left != NULL)
            {
                l = a->Left->value;
                q.push(a->Left);
            }
            if(a->Right != NULL)
            {
                r = a->Right->value;
                q.push(a->Right);
            }

            cout<<"Node value "<<a->value<<" Left Child ="
            <<l<<" Right Child = "<<r<<"\n";
        }
    }
    void Insert(int value)
    {
        node * newnode = CreateNewNode(value);
        if(root == NULL)
        {
            root = newnode;
            return;
        }
        node * cur = root;
        node * pre = NULL;
        while(cur != NULL)
        {
            if(newnode->value > cur->value)
            {
                pre = cur;
                cur = cur->Right;
            }
            else {
                pre = cur;
                cur = cur->Left;
            }
        }
        if(newnode->value > pre->value)
        {
            pre->Right = newnode;
        }
        else{
            pre->Left = newnode;
        }
    }
    bool Search(int value)
    {
        node* cur = root;
        while(cur != NULL)
        {
            if(value > cur->value)
            {
                cur = cur->Right;
            }
            else if(value < cur->value)
            {
                cur = cur->Left;
            }
            else{
                return true;
            }
        }
        return false;
    }
    void Delete(int value)
    {
        node * cur = root;
        node * pre = NULL;

        while(cur != NULL)
        {
            if(value > cur->value)
            {
                pre = cur;
                cur = cur->Right;
            }
            else if(value <cur->value)
            {
                pre = cur;
                cur = cur->Left;
            }
            else break;
        }
        if(cur == NULL)
        {
            cout<<"Value is not present in BST\n";
            return;
        }
        //node has no child
        if(cur->Left == NULL && cur->Right==NULL)
        {
            if(pre->Left != NULL && pre->Left->value == cur->value)
            {
                pre->Left = NULL;
            }
            else pre->Right = NULL;
            delete cur;
            return;
        }
        //node has 1 child
        if(cur->Left ==NULL && cur->Right != NULL)
        {
           if(pre->Left != NULL && pre->Left->value == cur->value)
            {
                pre->Left = cur->Right;
            }
            else pre->Right = cur->Right;
            delete cur;
            return;
        }
        if(cur->Left !=NULL && cur->Right == NULL)
        {
           if(pre->Left->value == cur->value)
            {
                pre->Left = cur->Left;
            }
            else pre->Right = cur->Left;
            delete cur;
            return;
        }
        //case 3 :node has two child
        node * tmp = cur->Right;

        while(tmp->Left!=NULL)
        {
            tmp = tmp->Left;

        }
        int saved = tmp->value;
        Delete(saved);
        cur->value = saved;
    }
};

int main()
{
    BST bst;
    bst.Insert(6);
    bst.Insert(4);
    bst.Insert(3);
    bst.Insert(5);
    bst.Insert(7);
    bst.Insert(8);
    bst.Insert(9);

    bst.BFS();
    cout<<"\n";
    bst.Delete(8);
    bst.BFS();

    //cout<<bst.Search(1)<<"\n";
    //cout<<bst.Search(7)<<"\n";
}

