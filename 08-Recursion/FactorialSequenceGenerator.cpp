#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<long long> factorialSequence(int n) {
        //Code Here
      
        if(n == 1){ return {1}; }
        
        vector<long long> result = factorialSequence(n-1);
        result.push_back(1LL * n * result.back());
        return result;
        
        
    }
};