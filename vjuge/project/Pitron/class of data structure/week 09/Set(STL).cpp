//sorted order and unique
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    //Insert O(log n)
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);

    //Print O(n)
    cout<<"Printing set\n";
    for(auto it: st )
        cout<<it<<" ";
    cout<<"\n";

    //Size O(1)
    cout<<"Set Size\n"<<st.size()<<"\n";

    //Print O(n)
//    cout<<"Printing Set\n";
//    for(auto it= st.begin();it!=st.end();it++)
//        cout<<*it<<" ";
//    cout<<"\n";

    //Erase O(log n)
    st.erase(5);
    st.erase(8);

    cout<<"Printing set\n";
    for(auto it: st )
        cout<<it<<" ";
    cout<<"\n";

    //Find O(log n)

    if(st.find(5) != st.end())
        cout<<"found\n";
    else cout<<"Not found\n";

}
