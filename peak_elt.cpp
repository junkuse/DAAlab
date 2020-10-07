#include <iostream>
using namespace std;

int findPeak(int arr[], int l, int h, int n)
{
    int mid = l + (h-l)/2;
    if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
        return mid;
    else if(mid > 0 && arr[mid] < arr[mid-1])
        return findPeak(arr, l, mid-1, n);
    else 
        return findPeak(arr, mid+1, h, n);
}

int main()
{
    int arr[] = {2,3,1,4,5,0,7,0,21,90};
    int n = 10;
    cout<<arr[findPeak(arr, 0, n-1, n)];
}


