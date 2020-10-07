
// C++ program to find largest pair sum in a given array 
#include<iostream> 
using namespace std; 
  
int findLargestSumPair(int arr[], int n) 
{ 
    int first, second; 
    if (arr[0] > arr[1]) 
    { 
        first = arr[0]; 
        second = arr[1]; 
    } 
    else
    { 
        first = arr[1]; 
        second = arr[0]; 
    } 
  
    for (int i = 2; i<n; i ++) 
    { 
        if (arr[i] > first) 
        { 
            second = first; 
            first = arr[i]; 
        } 
  
        else if (arr[i] > second && arr[i] != first) 
            second = arr[i]; 
    } 
    return (first + second); 
} 
