#include <iostream>
using namespace std;
inline int max(int a,int b){
    return (a > b) ? a : b;
}
int main(){
    int a,b;
    cin>>a>>b;
     int c=(a>b)?a:b;
     cout<<c<<endl;
     /*if(a>b){
        c=a;
     }else{
        c=b;
     }*/
     int z=max(a,b);
}