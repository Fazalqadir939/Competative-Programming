#include<bits/stdc++.h>
using namespace std;
int main(){
int test;
cin >> test;
for (int i =0;i<test;i++) {
    int a , b;
    cin >> a >> b;
    if (a%2!=0&&b%2!=0) {
        cout << "NO
";
    }
    else {
        cout << "YES
";
    }
}
}