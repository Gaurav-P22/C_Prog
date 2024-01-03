// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
void CountBinary(int n){
string str;
    while(n!=0)
    {
      str+=n%2+'0';
      n/=2;
    }
   reverse(str.begin(),str.end());
   cout<<str<<endl;
}
int main() {
    // Write C++ code here
    
    int n=15;
    CountBinary(n);
    

    return 0;
}
