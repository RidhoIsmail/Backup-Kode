#include <bits/stdc++.h>
using namespace std;

// kompleksitas waktu O(N^2 akar(N))

bool prima(int n){
    if(n < 2) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

vector<int>ListBilanganPrima(int n){
    vector<int>ListPrima;
    for(int i = 2; i < n ; i++){
        if(prima(i)){
            ListPrima.push_back(i);
        }
    }
    return ListPrima;
}

int main() {
	int n;
    cin >> n;
    vector<int> hasil = ListBilanganPrima(n);
    for(int i = 0; i < hasil.size(); i++){
        cout << hasil[i] << " ";
    }
    // for(int i = 2; i <= n; i++){
    //     if(prima(i)){
    //         cout << i << " ";
    //     }
    // }


}
