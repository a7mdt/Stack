#include "bits/stdc++.h"
using namespace std;

int main()
{
    // The principle of Stack is : Last-in-First-out

    stack<string>s;
    s.push("Ahmed");
    s.emplace("Menna");
    cout<<"s.top() : "<<s.top()<<endl; // Menna
    s.pop();
    cout<<"s.top() : "<<s.top()<<endl; // Ahmed

    // Passing values to Stack :
    for(string ss : {"Rana" ,"Tarek" ,"Fouad" ,"Ali"})
        s.push(ss);

    cout<<endl;

    // Printing Stack values :
    cout<<"Stack's values : "<<endl;
    for(int i=0 ; !s.empty() ; i++)
    {
        cout<<s.top()<<endl;
        s.pop();
    }

    cout<<endl;

    // Swaping 2 Stacks :
    stack<int>s1;
    s1.emplace(1);
    s1.emplace(2);
    s1.emplace(3);
    s1.emplace(4);

    stack<int>s2;
    for(auto i : {5,6,7,8} )
        s2.push(i);

    cout<<"s1 before swap : ";
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;

    cout<<"s2 before swap : ";
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;

    s1.swap(s2);

    cout<<"s1 after swap : ";
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;

    cout<<"s2 after swap : ";
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;

    return 0;
}
