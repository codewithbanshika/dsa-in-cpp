// Increment a variable using pointer parameter

#include<iostream>
using namespace std;

void increment(int *p);
int main()
{
    int *p,var = 5;
    p = &var;
    increment(p);
    cout << "Address and value after increment : " << p << " " <<  *p << endl;
    return 0;
}
void increment(int *p)
{
    cout << "Address and value before increment : " << p << " " <<  *p << endl;
    *p = *p + 1;
}