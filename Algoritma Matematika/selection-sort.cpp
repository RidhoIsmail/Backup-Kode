// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int A[10];

int main() {
	int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(A[j] < A[min]){
                min = j;
            }
        }
        int tmp = A[i];
        A[i] = A[min];
        A[min] = tmp;
    }
     for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
}
