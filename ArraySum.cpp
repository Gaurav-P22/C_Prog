#include <iostream>
using namespace std;
int Count(int *arr,int n){
    if(n==0)
    return 0;
    return arr[n-1]+Count(arr,n-1);
}
int main() {
    int arr[5]={1,2,3,4,5};
    int sum=Count(arr,5);
    cout<<sum<<" "<<endl;
    return 0;
}
