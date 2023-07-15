#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    vector<int>node;
    MaxHeap(){
    }
    void up_heapify(int idx)
    {
        while(idx > 0 && node[idx] > node[(idx-1)/2])
        {
            swap(node[idx] , node[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }
    void Insert(int val)
    {
        node.push_back(val);
        up_heapify(node.size()-1);
    }

    void display()
    {
        for(int i=0; i<node.size(); i++)
            cout<<node[i]<<" ";
        cout<<"\n";
    }

    void down_heapify(int idx)
    {
        while(1){
            int parent = idx;
            int leftChild = (idx*2)+1;
            int rightChild = (idx*2)+2;

            if(node[idx]<node[leftChild] && leftChild < node.size())
            {
                idx = leftChild;
            }
            if(node[idx] < node[rightChild] && rightChild <node.size())
            {
                idx = rightChild;
            }
            if(idx == parent)break;
            swap(node[idx] , node[parent]);
        }

    }

    void Delete(int idx)
    {
        if(idx > node.size()-1)return;
        swap(node[idx] , node[node.size()-1]);
        node.pop_back();
        down_heapify(idx);
    }
    int GetMax()
    {
        if(node.size() < 1)return -1;
        int res = node[0];
        Delete(0);
        return res;
    }
};

int main()
{
    MaxHeap mxh;
    mxh.Insert(10);
    mxh.Insert(7);
    mxh.Insert(9);
    mxh.Insert(4);
    mxh.Insert(5);
    mxh.Insert(7);
    mxh.Insert(17);
    mxh.Insert(27);

    cout<<mxh.GetMax()<<"\n";
    cout<<mxh.GetMax()<<"\n";
    cout<<mxh.GetMax()<<"\n";
    cout<<mxh.GetMax()<<"\n";
    cout<<mxh.GetMax()<<"\n";
    cout<<mxh.GetMax()<<"\n";
    cout<<mxh.GetMax()<<"\n";
    cout<<mxh.GetMax()<<"\n";
    cout<<mxh.GetMax()<<"\n";
}
