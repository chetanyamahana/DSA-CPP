#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of rows:";
    cin>>n;
    int i = 1 , j= 1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}