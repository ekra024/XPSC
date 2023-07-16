#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int id;
    Node * Left;
    Node * Right;
    Node * Parent;
};

class Binary_Tree{
public:
    Node * allnode[7];
    Node * root;
    Binary_Tree(){
        root = NULL;
    }
    Node * CreateNode(int id)
    {
        Node * newnode = new Node;
        newnode->id = id;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->Parent = NULL;
        return newnode;
    }
    void build_Tree()
    {
        for(int i=0; i<7; i++)
            allnode[i] = CreateNode(i);
        root = allnode[0];
        allnode[0]->Left = allnode[1];
        allnode[0]->Right = allnode[2];

        allnode[1]->Left = allnode[3];
        allnode[1]->Right = allnode[4];
        allnode[1]->Parent = allnode[0];

        allnode[2]->Left = allnode[5];
        allnode[2]->Right = allnode[6];
        allnode[2]->Parent = allnode[0];

        allnode[3]->Parent = allnode[1];
        allnode[4]->Parent = allnode[1];
        allnode[5]->Parent = allnode[2];
        allnode[6]->Parent = allnode[2];
    }

    void display()
    {
        for(int i=0; i<7; i++){
            int p = -1, r = -1, l = -1;
            if(allnode[i]->Parent != NULL){
                p = allnode[i]->Parent->id;
            }
            if(allnode[i]->Left != NULL){
                l = allnode[i]->Left->id;
            }
            if(allnode[i]->Right != NULL){
                r = allnode[i]->Right->id;
            }

            cout<<"Node "<<allnode[i]->id<<" Parent "<<p<<" Left Child "<<l<<" Right Child "<<r<<"\n";
        }
    }
};

int main()
{
    Binary_Tree bt;
    bt.build_Tree();
    bt.display();
}
