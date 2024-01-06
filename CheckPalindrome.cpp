#include <iostream>
using namespace std;
int  CheckPalin(int n,int temp=0)
{
    if(n==0)
    return temp;
    temp=(temp*10)+n%10;
    return CheckPalin(n/10,temp);
}

int main()
{
   int n=1213;
   if(CheckPalin(n)==n)
   cout<<"Yes";
   else
   cout<<"Not";
   return 0;
}
