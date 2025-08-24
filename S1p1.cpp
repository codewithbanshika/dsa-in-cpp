// Printing address and value of a variable
#include<iostream>
using namespace std;
int main() {

    int a = 5;
    int *b = &a;

    cout<<"Value of a : "<<a<<endl;
    cout<<"Adress of a : "<<b<<endl;
    cout<<"Value at adress : "<<*b<<endl;
    cout<<"Value of pointer : "<<b<<endl;

    return 0;
}