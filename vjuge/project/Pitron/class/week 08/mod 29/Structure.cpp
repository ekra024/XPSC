#include<bits/stdc++.h>
using namespace std;

struct Student{
    int roll;
    int age;
    float weight;
};

bool compare( Student s1, Student s2)
{
    if(s1.weight!=s2.weight)
        return s1.weight>s2.weight;
    else if(s1.age != s2.age)
        return s1.age>s2.age;
   else
        return s1.roll>s2.roll;
}


int main()
{
    int n;cin>>n;
   vector<Student>s(n);
   for(int i=0;i<n;i++){
        cin>>s[i].age>>s[i].roll>>s[i].weight;
   }
   sort(s.begin(),s.end(),compare);
   for(int i=0;i<n;i++){
     cout<<s[i].age<<" "<<s[i].roll<<" "<<s[i].weight<<"\n";
   }
   cout<<"\n";
}
