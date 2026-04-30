//
// Created by Fazal Qadir on 30/04/2026.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int>b,tw,th,ne;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            int d2=x%2==0 ,d3=x%3==0;
            //cout << d2;
            if(d2&&d3)b.push_back(x);
            else if(d2)tw.push_back(x);
            else if(d3)th.push_back(x);
            else ne.push_back(x);
 
        }
        for(int x:b)cout<<x<<" ";
        //cout << endl;
        for(int x:tw)cout<<x<<" ";
        for(int x:ne)cout<<x<<" ";
        for(int x:th)cout<<x<<" ";
        cout<<"
";
    }
}