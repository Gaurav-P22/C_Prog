#include<iostream>
#include<string>
using namespace std;
void CountDig(int n,string str[])
{
    if(n==0)
    return;
    int dig=n%10;
    
    
    CountDig(n/10,str);
    cout<<str[dig]<<" ";
    
}
int main() {
  string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
 
   int n=423;
   CountDig(n,str);
   return 0;
}
