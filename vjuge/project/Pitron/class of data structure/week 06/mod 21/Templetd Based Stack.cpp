#include<bits/stdc++.h>
using namespace std;
template <class T>
class Stack{
public:
    T *a;
    int stack_size;
    int arr_cap;
    Stack()
    {
        a = new T[1];
        arr_cap = 1;
        stack_size = 0;
    }
    //make the array cap multiplied by 2
    void increase_size()
    {
        T *tmp;
        tmp = new T[arr_cap*2];
        for(int i=0;i<arr_cap;i++)
            tmp[i] = a[i];
        swap(a,tmp);
        delete []tmp;
        arr_cap = arr_cap*2;
    }
    //Add an element in the stack O(1);
    void push(T val)
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
        stack_size = stack_size - 1;
    }
    //Return the top element from the stack O(1)
    T top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty"<<endl;
            T a;
            return a;
        }
        return a[stack_size-1];
    }
};

int main()
{
    Stack <double> st;

    st.push(3.5);
    st.push(3.6);
    st.push(7.8);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

     Stack <char> st2;

    st2.push('a');
    st2.push('u');
    st2.push('g');
    cout<<st2.top()<<endl;
    st2.pop();
    cout<<st2.top()<<endl;
    st2.pop();
    cout<<st2.top()<<endl;
    st2.pop();
    cout<<st2.top()<<endl;
}


