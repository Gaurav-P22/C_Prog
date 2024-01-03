#include<iostream>
using namespace std;
int i;
bool CheckPrime(int n)
{
    if(i==1)
    return 1;
    
    if(n%i==0)
    return false;
    i-=1;
    CheckPrime(n);
}

int main()
{
    int n=11;
    i=n/2;
    if(CheckPrime(n))
    cout<<"yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}
