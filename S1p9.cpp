// Array of pointers to strings

#include<iostream>
using namespace std;

int main()
{
    const char *s1[5]={"Riya" , "Tiya" , "Siya" , "Manvi" , "Sanvi"};

    cout<<"The names are as follows: "<<endl;

    for(int i=0 ; i<5 ; i++)
    {
        cout<<s1[i]<<endl;
    }

    return 0;
}