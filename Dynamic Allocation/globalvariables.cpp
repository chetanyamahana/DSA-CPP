#include <iostream>
using namespace std;
int a;
void g(){
    a++;//Global Variable
    cout << a << endl;
}
void f(){
    cout<<a<<endl;
    a++;
    g();
}
int main(){
    a=10;
    f();
    cout << a << endl;
}