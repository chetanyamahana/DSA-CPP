#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    long sum =0;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        sum = arr[i] + sum;
    }
    cout<<sum;

}