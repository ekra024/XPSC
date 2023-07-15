#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    vector<int>nodes;
    MaxHeap()
    {

    }
    //O(logn)
    void up_heapify(int idx)
    {
        while(idx>0 && nodes[idx]>nodes[(idx-1)/2])
        {
            swap(nodes[idx],nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }
    //O(logn)
    void Insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
    }
    //O(n)
    void PrintHeap()
    {
        for(int i=0;i<nodes.size();i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }
    void down_heapify(int idx)
    {
        while(1)
        {
            int largest = idx;
            int l=2*idx + 1;
            int r = 2*idx + 2;
            if(l<nodes.size() && nodes[largest]<nodes[l])
            {
                largest = l;
            }
            if(r<nodes.size() && nodes[largest] <nodes[r])
            {
               largest = r;
            }
            if(largest == idx) break;
            swap(nodes[idx],nodes[largest]);
            idx = largest;
        }
    }
    //O(logn)
    void Delete(int idx)
    {
        if(idx >= nodes.size())
            return;
        swap(nodes[idx],nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }
    int getMax()
    {
        if(nodes.empty()){
            cout<<"Heap is empty!\n";
            return -1;
        }
        return nodes[0];
    }
    int EXtractMax()
    {
         if(nodes.empty()){
            cout<<"Heap is empty!\n";
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;
    }

};
class MinHeap{
public:
    MaxHeap mx;
    void insert(int x)
    {
	  mx.Insert(-x);
    }
    void Delete(int idx)
    {
        mx.Delete(idx);
    }
    int getMin()
    {
       if(mx.nodes.empty()){
            cout<<"Heap is empty!\n";
            return -1;
        }
        int minVal = mx.getMax();
        return -minVal;
    }
};




int main()
{
    MinHeap heap;
    heap.insert(4);
    heap.insert(7);
    heap.insert(9);
    heap.insert(1);
    heap.insert(10);
    heap.insert(20);
    heap.insert(30);
    cout<<"Max element ="<<heap.getMin()<<"\n";
//    ceap.Insert(40);
//    heap.PrintHeap();
//    heap.Delete(0);
//    heap.PrintHeap();
}

