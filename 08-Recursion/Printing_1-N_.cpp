#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void print1toNInAscendingOrder(int N){
        // Code Here
        if(N == 0) { return; }
        print1toNInAscendingOrder(N - 1);
        cout<< N << endl;
        
        
    }
};