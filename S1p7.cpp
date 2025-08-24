// Reverse an array (Using pointer  parameter)

#include<iostream>
using namespace std;

void reverse(int *arr, int n)
{
    int *ptr=&arr[n-1];
    while(n>0)
    {
        cout<<*ptr<<" ";
        ptr--;
        n--;
    }
}   
int main()
    {
        int arr[20],n;
        cout << "Enter the size of array : ";
        cin >> n;
        cout << "Enter the required array elements: ";
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }
        cout << "Array elements in reverse order : ";
        reverse(arr,n);

        return 0;
    }

