#include <iostream>
#include<string>
using namespace std;

bool CheckPalin(string str,int i=0)
{
    if(i>str.length()/2)
    return true;
    
        if(str[i]!=str[str.length()-i-1])
        return false;
        
    
 return CheckPalin(str,i+1);   
}

int main(){
    string str="nayan";
    if(CheckPalin(str))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    
    return 0;
}
