#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin>>test;
    for(int i=0;i<test;i++) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int up =0,dn=0;
        for (int j=0;j<n;j++) {
            if (str[j]=='(') {
                up++;
            }
            else if (str[j]==')') {
                dn++;
            }
        }
        if(up==dn) {
            printf("YES
");
        }
        else {
            printf("NO
");
        }
    }
}