#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int factorial(int x){
        if(x == 0 || x == 1) { return 1; }
        return factorial(x - 1) * x;
    }
    int sumOfFactorialsOfDigits(int n) {
        // Code Here
        if(n == 0){
            return 0;
        }
        return factorial(n % 10) + sumOfFactorialsOfDigits(n/10);
        
    }
};