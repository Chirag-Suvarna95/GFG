//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high)
        {
            int p=partition(arr,low,high); //Pivot element
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int p=arr[low];
       int i=low+1;
       int j=high;
       while(i<=j)
       {
           while(arr[i]<=p && i<=high/*So it does not go out of bound
           */)
           i++; /*Increase till you find a greater element*/
           while(arr[j]>=p && j>low)
           j--; /*Decrease till you find a smaller element*/
           if(i<j)  
           swap(arr[i],arr[j]);
       }
       swap(arr[j],arr[low]);
       return j;
    }
};