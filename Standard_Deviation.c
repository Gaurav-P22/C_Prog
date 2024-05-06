
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={3,8,4,2,5,6,7};
    int sum=0;
    for(int i=0;i<7;i++){
      sum+=arr[i];
    }
    int avg=sum/7;
    // cout<<avg<<endl;
    int val=0;
    for(int i=0;i<7;i++)
    {
        val=val+(arr[i]-avg)*(arr[i]-avg);
    }
    int res=sqrt(val/7);
    cout<<res<<endl;
    return 0;
}
