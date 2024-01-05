// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
void funcRev(string &str,int i=0){
    if(i<str.length()/2)
    {
        swap(str[i],str[str.length()-i-1]);
        funcRev(str,i+1);
    }
}
int main() {
    // Write C++ code here
   string str="XYZ";
   funcRev(str);
   cout<<str<<endl;

    return 0;
}



///Second Method



#include <iostream>
#include<string>
using namespace std;

void ReverseSt(string &str,int i,int j)
{
    if(i>j)
        return ;
    swap(str[i],str[j]);
    i++;
    j--;
    ReverseSt(str,i,j);
    

}

int main(){
    string str="String";
    ReverseSt(str,0,str.length()-1);
    cout<<str<<endl;
    return 0;
}
