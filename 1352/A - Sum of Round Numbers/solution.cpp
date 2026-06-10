//
// Created by Fazal Qadir on 5/31/2026.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test{};
    cin >> test;
    for (int k=0;k<test;k++){
        int n;
        cin >> n;
        //cout << "----------------"<< endl;
        int i=0,j=1,b=n;
        int arr[5];
        while(true){
            int p = b%10;
            if(p == 0){
                j *= 10;
                b/=10;
            }
            else{
                arr[i]=j*p;
                i++;
                n -= j*p;
                j = 1;
                b=n;
            }
            if(b==0) break;
        }
        cout << i << '
';
        for(int t=0;t<i;t++) {
            cout << arr[t] << ' ';
        }
        cout << '
';
    }
}