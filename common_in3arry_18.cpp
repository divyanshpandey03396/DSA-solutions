#include <bits/stdc++.h>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            unordered_set<int> a;
            unordered_set<int> b;
            unordered_set<int> c;
            set<int> d;
            vector<int> res;
            for (int i=0; i<n1; i++){
                a.insert(A[i]);
            }
            
            for (int i=0; i<n2; i++){
                b.insert(B[i]);
            }
            
            for (int i=0; i<n3; i++){
                c.insert(C[i]);
            }
            
            for (int i=0; i<n1; i++){
                if (b.find(A[i]) != b.end() && c.find(A[i]) != c.end()){
                    d.insert(A[i]);
                }
            }
            
            for (int x:d){
                
                    res.push_back(x);
                
            }
            return res;
        }