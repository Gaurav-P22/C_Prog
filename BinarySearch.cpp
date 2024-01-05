
#include <iostream>

using namespace std;

bool CheckEle(int *arr,int l,int e,int k)
{
    if(l>e)
    return 0;
    int mid=(l+e)/2;
    if(arr[mid]==k)
    return 1;
    else if(arr[mid]>k)
    return CheckEle(arr,l,mid-1,k);
    else 
    return CheckEle(arr,mid+1,e,k);
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int k=8;
    if(CheckEle(arr,0,6,k))
    cout<<"Found"<<endl;
    else
    cout<<"Not Found"<<endl;
    
}
