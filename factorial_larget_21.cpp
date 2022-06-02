#include <bits/stdc++.h>
using namespace std;

 vector<int> factorial(int N){
       vector<int> res;
       res.push_back(1);
       for(int x=2;x<=N;++x)
       {
           int car=0;
           for(int j=0;j<res.size();++j)
           {
               int val=res[j]*x+car;
               res[j]=val%10;
               car=val/10;
           }
           while(car!=0)
           {
               res.push_back(car%10);
               car/=10;
           }
       }
       reverse(res.begin(),res.end());
       return res;
    }