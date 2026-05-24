#include <bits/stdc++.h>
using namespace std;

int fpb(int a,  int b){
    if(b == 0){
        return a;
    }
    return fpb(b, b % a);
}
int kpk(int a, int b){
    return (a * b)/fpb(a,b);
}


int main() {
	cout << fpb(12, 18) << endl;
    cout << kpk(12, 18) << endl;
}
