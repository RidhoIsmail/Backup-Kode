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

    if(prima(n)){
        cout << "PRIMA" << endl;
    } else{
        cout << "BUKAN PRIMA" << endl;
    }
}
