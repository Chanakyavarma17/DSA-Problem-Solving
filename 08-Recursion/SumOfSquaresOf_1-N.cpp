#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int recursiveSumOfSquares(int n) {
        // Code Here
        if(n == 1) { return 1; }
        
        return n * n + recursiveSumOfSquares(n - 1);
        
        
    }
};