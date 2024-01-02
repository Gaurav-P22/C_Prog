#include<iostream>
using namespace std;
bool checkSort(int *arr,int n)
{
    if(n==0||n==1)
    return true;
    if(arr[0]>arr[1])
    return false;
    else
    return checkSort(arr+1,n-1);
}
int main(){
int arr[5]={1,2,7,5,8};
bool res=checkSort(arr,5);
if(res)
cout<<"Sorted"<<endl;
else
cout<<"UnSorted"<<endl;
return 0;
}
