#include<bits/stdc++.h>
 using namespace std;
 void merge(int arr1[], int arr2[], int n, int m) {
	    int l1=n-1;
	    int s2=0;
	    while(arr1[l1]>arr2[s2] && l1>=0 && s2<m)
	    swap(arr1[l1--],arr2[s2++]);
	    
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}