#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node * left;
    Node * right;

    Node(int value){
        this->value = value;
        left = NULL;
        right = NULL;
    }
};

class BST{
public:
    Node * root ;
    BST()
    {
        root = NULL;
    }

    void insert(int value)
    {
        Node * newnode = new Node(value);
        if(root == NULL)
        {
            root = newnode;
            return;
        }

        Node * cur = root;
        Node * pre ;

        while(cur != NULL){
            pre = cur;
            if(value > cur->value){
                cur = cur->right;
            }
            else cur = cur->left;
        }
        if(value > pre->value){
            pre->right = newnode;
        }
        else pre->left = newnode;
    }
    void display()
    {
        if(root == NULL){
            cout << "Empty\n";
            return;
        }
        queue <Node*> q;
        q.push(root);
        while(!q.empty()){
            Node * a = q.front();
            cout<< a->value <<" ";
            q.pop();
            if(a->right != NULL){
                q.push(a->right);
            }
            if(a->left != NULL){
                q.push(a->left);
            }
        }

    }
    bool find(int value)
    {
        Node * a = root;

        while(a != NULL)
        {
            if(value > a->value){
                a = a->right;
            }
            else if( value < a->value){
                a = a->left;
            }
            else return true;
        }
        return false;
    }
    void DeleteNode(int value){
        if(find(value)){
            Node * cur = root;
            Node * pre = NULL;
            while(cur != NULL){
                pre = cur;
                if(value > cur-> value){
                    cur = cur->right;
                }
                else if(value < cur->value){
                    cur = cur->left;
                }
                else break;
            }

            if(cur->left == NULL && cur->right == NULL){
                Node * delNode = cur;

                if(value > pre->value){
                    pre->right = NULL;
                    delete cur;
                    return;
                }
                else if(value < pre->value){
                    pre->left = NULL;
                    delete cur;
                    return;
                }
            }
        }
        else {
            cout << "Node is not found\n";
        }
    }
};

int main()
{
    BST bst;
    bst.display();
    bst.insert(8);
    bst.insert(6);
    bst.insert(11);
    bst.insert(4);
    bst.insert(9);
    bst.insert(13);
    bst.display();
    //if(bst.find(6))cout<<"Found\n";
    //else cout<<"Not Found\n";

    bst.DeleteNode(13);
    bst.display();
}
