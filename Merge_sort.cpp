// { Driver Code Starts
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
    void merge(int arr[], int l, int m, int r)
    {
        int *newarr = new int[r-l+1];
        int i = l , j = m+1 , k=0;
        while(i<=m and j<=r){
            if(arr[i]==arr[j]){
                newarr[k++] = arr[i++];
                newarr[k++] = arr[j++];
            }
            else if(arr[i]<arr[j]) newarr[k++] = arr[i++];
            else newarr[k++] = arr[j++];
        }
        while(i<=m) newarr[k++] = arr[i++];
        while(j<=r) newarr[k++] = arr[j++];
        k = 0;
        for(int i=l;i<=r;i++){
            arr[i] = newarr[k++];
        }
        delete []newarr;
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r){
            int mid = l + (r-l)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends