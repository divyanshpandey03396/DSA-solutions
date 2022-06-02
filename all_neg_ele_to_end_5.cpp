#include<bits/stdc++.h>
using namespace std;
void segregateElements(int arr[],int n)
    {
        vector<int> vpov,vneg;
        for(int i=0;i<n;++i)
        {
            if(arr[i]<0)
            vneg.push_back(arr[i]);
            else
            vpov.push_back(arr[i]);
        }
        int j=0;
        for(int i=0;i<vpov.size();++i)
        {
            arr[j++]=vpov[i];
        }
        for(int i=0;i<vneg.size();++i)
        {
            arr[j++]=vneg[i];
        }
    }