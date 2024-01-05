
#include <iostream>

using namespace std;

bool CheckEle(int*arr,int n,int k)
{
    if(n==0)
    {
        return 0;
    }
    if(arr[0]==k)
    return 1;
    return CheckEle(arr+1,n-1,k);
}

int main()
{
    int arr[5]={1,2,3,4,5};
    if(CheckEle(arr,sizeof(arr)/sizeof(int),6))
    cout<<"Found"<<endl;
    else
    cout<<"Not Found"<<endl;

    return 0;
}
