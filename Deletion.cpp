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

int deletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {12,54,24,56};
    int size = sizeof(arr)/sizeof(int);
    int index = 0;
    trans(arr, size);
    deletion(arr, size, index);
    size -= 1;
    trans(arr, size);

    return 0;
}