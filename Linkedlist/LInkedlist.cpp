#include <iostream>
using namespace std;
#include "Node.cpp"
int main(){
    //Statically


    Node n1(1);
    Node *head = &n1;

    Node n2(2);

    n1.next=&n2;

    cout<<n1.data<<" "<<n2.data<<endl;

    //Dynamically

    Node *n3 = new Node(10);
    Node *n4 = new Node(20);

}