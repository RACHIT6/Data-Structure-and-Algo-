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

int insert(int arr[], int size, int index, int element)
{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {12,23,345,12};
    int size = sizeof(arr)/sizeof(int);
    int index = 2, element = 1;
    trans(arr, size);
    cout<<endl<<endl;
    insert(arr, size, index, element);
    size += 1;
    trans(arr, size);

    return 0;
}
