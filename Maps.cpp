#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
     map<int,int> mp;
     mp[1]=6;
     mp[2]=9;
     mp[5]=1;
     mp[4]=3;
     map<int,int> ::iterator it;
     for(it=mp.begin();it!=mp.end();it++)
     {
        cout<<"first"<<it->first<<"Second"<<it->second<<endl; 
     }
     cout<<endl;
    auto it2=mp.find(6);
    mp.erase(it2);
    map<int,int> ::iterator it1;
    for(it1=mp.begin();it1!=mp.end();it1++)
     {
        cout<<"first"<<it1->first<<"Second"<<it1->second<<endl; 
     }
    return 0;
}
