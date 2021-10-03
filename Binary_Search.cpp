#include<iostream>
using namespace std;

int binary(int arr[], int element, int size)
{
    int high = size - 1, mid, low = 0;
    while (low <= high)
    {
        mid = (low + high)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (element < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {12,23,54,65,102,121,133};
    int size = sizeof(arr)/sizeof(int);
    int element;
    cout<<"Enter The Element you want to search: ";
    cin>>element;
    int var = binary(arr, element, size);
    if (var == -1)
    {
        cout<<"Element not Found!"<<endl;
    }
    else
    {
        cout<<"Element Found at index "<<var<<" of Array"<<endl;
    }

    return 0;
}