#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int doubleFactorial(int n) {
        // Code Here
        if(n == 1 || n == 2) { return n; }
        return n * doubleFactorial(n-2);
        
    }
};