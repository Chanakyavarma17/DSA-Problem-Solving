#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    double recursivePower(double a, int b) {
        // Code Here
       
        if(b == 0) { return 1; }
        return a*recursivePower(a , b-1);
        
        
    }
};