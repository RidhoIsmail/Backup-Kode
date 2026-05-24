#include <bits/stdc++.h>
using namespace std;


int main() {
	int n;
    cin >> n;
    vector<int>A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    int q;
    cin >> q;
    while(q--){
        int t;
        cin >> t;
        int l = 0, r = n-1, mid;

        bool found = false;
        while(l <= r){
              mid = (l + r) /2;
            if(A[mid] == t){
                found = true;
                break;
            } else if(A[mid] > t){
                r = mid - 1; 
            } else if(A[mid] < t){
                l = mid + 1;
            }
        }
        if(found){
            cout << "Ketemu" << endl;
        } else{
            cout << "Tidak Ketemu" << endl;
        }
        
    }
    
}
