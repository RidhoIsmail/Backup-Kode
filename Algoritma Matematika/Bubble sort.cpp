// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;



void bubblesort(vector<int> &A){
    int n = A.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(A[j] > A[j+1]){
                int tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }
}

double cariMedian(vector<int> A){
    bubblesort(A);
    int n = A.size();
    if(n % 2 == 0){
            return (A[n/2 -1] + A[n/2])/2.0;
    } else{
         return A[n/2];
    }
   
}




int main() {
    cout << cariMedian({4,2,1,3,5}); 
}
