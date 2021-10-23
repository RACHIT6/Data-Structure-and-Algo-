#include<iostream>
using namespace std;

void trans(int arr[], int size)
{
    cout<<"The Array is as Follows: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {12,435,657,8654,4323,23,54,2};
    int size = sizeof(arr)/sizeof(int);
    trans(arr, size);

    return 0;
}
