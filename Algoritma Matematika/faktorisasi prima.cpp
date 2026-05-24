#include <bits/stdc++.h>
using namespace std;

bool prima(int n){
    if(n < 2) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    bool first = false;
    for(int i = 2; i <= n; i++){
        int pangkat = 0;
        if(n % i == 0){
            while(n % i == 0){
                n = n / i;
                pangkat++;
            }
            if(first){
                cout << " x ";
            }
            first = true;
            cout << i;
            if(pangkat > 1){
                cout << "^" << pangkat;
            }
        }
    }
}
