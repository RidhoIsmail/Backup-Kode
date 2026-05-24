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

vector<int>ListBilanganPrima(int n){
    vector<int>ListPrima;
    for(int i = 2; i < n ; i++){
        if(prima(i)){
            ListPrima.push_back(i);
        }
    }
    return ListPrima;
}

vector<pair<int,int>> faktorisasi(int n, vector<int>ListPrima){
    vector<pair<int,int>> hasil;
    int index = 0;
    while(n > 1 && index < ListPrima.size()){
        int pangkat = 0;
        int bilPrima = ListPrima[index];
        while(n % bilPrima == 0){
            n = n / bilPrima;
            pangkat++;
        }
        if(pangkat > 0){
            hasil.push_back({bilPrima, pangkat});
        }
        
        index++;
    }
    return hasil;
}


int main() {
	int n;
    cin >> n;
    vector<pair<int,int>> jawaban = faktorisasi(n, ListBilanganPrima(n));

    for(int i = 0; i < jawaban.size(); i++){
        cout << jawaban[i].first;
        if(jawaban[i].second > 1){
            cout << "^" << jawaban[i].second;
        }
        if(i != jawaban.size() - 1){
            cout << " x ";
        }
    }

}
