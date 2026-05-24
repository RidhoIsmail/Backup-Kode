// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    // pre-compute (hitung di awal)
    vector<int> S(n);
    S[0] = A[0];
    for(int i = 0; i < n; i++){
        S[i] = A[i] + S[i-1];
    }
    int query; // O(n)
    cin >> query;
    for(int i = 1; i <= query; i++){
        int l, r;
        cin >> l >> r;
        if(l == 0){
            cout << S[r] << endl;
        } else{
             cout << S[r] - S[l-1] <<  endl;
        }
       
    }
}
