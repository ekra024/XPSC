//Values are sorted
#include<bits/stdc++.h>
using namespace std;

int main()
{
   multiset<int>ms;

   //insert O(log n)
   ms.insert(5);
   ms.insert(7);
   ms.insert(4);
   ms.insert(3);
   ms.insert(4);
   ms.insert(7);

  //Print O(n)

    for(auto it: ms)
        cout<<it<<" ";
    cout<<"\n";

    //size O(n)
    cout<<"Size of multiset : "<<ms.size()<<"\n";

    //erase O(log n)
    //erase all occurrence
    ms.erase(4);
     for(auto it: ms)
        cout<<it<<" ";
    cout<<"\n";

    //erase a single occurrence
    ms.erase(ms.find(7));

     for(auto it: ms)
        cout<<it<<" ";
    cout<<"\n";

    //Find O(log n)

    if(ms.find(5) != ms.end())
        cout<<"exist \n";
    else cout<<"Not exist\n";
}
