#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void printEven(int i ,int n){
        
        if(i == n + 1){ return; } 
        
        if(i % 2 == 0) { cout<< i << " "; }
        printEven(i + 1 , n);
        
    }
    void printodd(int n){
        
        if(n == 0 ) { return; }
        if(n % 2 == 1) {
            cout<< n << " ";
        }
        printodd(n - 1);
    }
    void printEvenOdd(int n) {
        // Code Here
        printEven(1,n);
        printodd(n);
        
    }
};