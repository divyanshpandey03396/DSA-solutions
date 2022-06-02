#include <bits/stdc++.h>
using namespace std;



bool find3Numbers(int a[], int n, int x)
    {
       sort(a,a+n);
        for(int i=0;i<n-2;i++)
        {
            int l=i+1;
            int r=n-1;
            int key=a[i];
            while(l<r)
            {
                if(key+a[l]+a[r]==x)
                return true;
                else if(key+a[l]+a[r]>x)
                r--;
                else
                l++;
            }
        }
        return false;
    }