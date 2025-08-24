// Find maximum of three numbers (using pointers as parameters)

#include<iostream>
using namespace std;

int max(int *a , int *b , int *c)
{
    if(*a>*b && *a>*c)
    {
        return *a;
    }
    else if( *b>*a && *b>*c)
    {
        return *b;
    }
    else{
        return *c;
    }
}
   int main()
    {
        int x,y,z,n;
        int *a = &x;
        int *b = &y;
        int *c = &z;
        cout << "Enter 3 numbers : " <<endl;
        cin >> x >> y >> z;
        n = max(a,b,c);
        cout << " After comparison  , the greatest of the three numbers is " << n << endl;
        return 0;
    }
