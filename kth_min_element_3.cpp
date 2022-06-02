#include<bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int l, int r, int k) {
        // sort(arr,arr+r+1);
        // int res=arr[k-1];
        // return res;
        priority_queue<int> q;
        for(int i=l;i<=r;++i)
        {
            q.push(arr[i]);
            if(q.size()>k)
            q.pop();
        }
        int res=q.top();
       
        return res;
    }