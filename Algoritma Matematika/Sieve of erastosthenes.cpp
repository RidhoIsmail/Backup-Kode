#include <bits/stdc++.h>
using namespace std;
int bilPrima[10000];
bool prima[10000];

void sieve(int n){
    for(int i = 0; i < n; i++){
        prima[i] = true;
    }
    prima[0] = prima[1] = false;
    for(int i = 2; i <= n; i++){
        if(prima[i]){
         for(int j = i * i; j < n; j = j + i){
            prima[j] = false;
            }
        }
    }
    int p = 1;
    for (int i = 1; i <= n; i++){
    	if (prima[i]){
    		bilPrima[p++] = i;
    	}
    }
}




int main() {
	int n;
    cin >> n;
    sieve(100);
    for (int i = 1; i <= n; i++){
		int k;
		cin >> k;
		cout << bilPrima[k] << endl;
	}
}
