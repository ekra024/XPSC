#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
    int *a;
    int stack_size;
    int arr_cap;
    Stack()
    {
        a = new int[1];
        arr_cap = 1;
        stack_size = 0;
    }
    //make the array cap multiplied by 2
    void increase_size()
    {
        int *tmp;
        tmp = new int[arr_cap*2];
        for(int i=0;i<arr_cap;i++)
            tmp[i] = a[i];
        swap(a,tmp);
        delete []tmp;
        arr_cap = arr_cap*2;
    }
    //Add an element in the stack O(1);
    void push(int val)
    {
        if(stack_size+1 > arr_cap)
        {
            increase_size();
        }
        stack_size = stack_size + 1;
        a[stack_size-1] = val;
    }
    //Delete topmost element from the stack O(1)
    void pop()
    {
        if(stack_size==0){
            cout<<"Stack is empty"<<endl;
            return;
        }
        a[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }
    //Return the top element from the stack O(1)
    int top()
    {
        if(stack_size == 0)
        {
            return -1;
        }
        return a[stack_size-1];
    }
};

int main()
{
    Stack st;
    st.push(3);
    cout<<st.top()<<endl;
    st.push(4);
    cout<<st.top()<<endl;
    st.push(5);
    cout<<st.top()<<endl;
   // st.push(6);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
}

