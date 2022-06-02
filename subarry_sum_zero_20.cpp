#include <bits/stdc++.h>
using namespace std;




bool subArrayExists(int arr[], int n)
    {
        int hash[n];
        hash[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            hash[i]=hash[i-1]+arr[i];
        }
        unordered_set<int> s(hash,hash+n);
        if(s.size()==n && s.find(0)==s.end())
        return false;
        else
        return true;
    }