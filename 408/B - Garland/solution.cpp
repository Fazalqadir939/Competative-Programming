// =======================================================================================
//
//                         بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// "وَلَقَدْ خَلَقْنَا الْإِنْسَانَ وَنَعْلَمُ مَا تُوَسْوِسُ بِهِ نَفْسُهُ ۖ وَنَحْنُ أَقْرَبُ إِلَيْهِ مِنْ حَبْلِ الْوَرِيدِ" (Quran 50:16)
//
// Monday , 22 June,2K26                                    Fazal Qadir
//      codeforces Current Rating: 1237  --> Pupil   -->   @fazalqadir
// =======================================================================================
// Created by Fazal Qadir on 6/22/2026.
 
#include<bits/stdc++.h>
using namespace std;
// --- Shortened ---
 
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
 
// --- Macros ---
 
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define fi first
#define se second
 
// --- Local Debugger ---
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif
 
// --- User Defined function Part ---
 
void solve();
 
 
// --- main function ---
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // ---  Don't change above ---
    int test=1;
    //cin >> test;
    while(test--){
        solve();
    }
}
 
// ---  Actual code itthe rakh ---
 
void solve() {
        string str1,str2;
        cin>>str1>>str2;
        sort(all(str1));
        sort(all(str2));
        int n = max(str1.length(), str2.length());
        int a=0,b=0,count=0;
        set <char> str_1 (all(str1));
        set <char> str_2 (all(str2));
        if(str_1.size()<str_2.size()) {
            cout<<-1;
            return;
        }
        int diff = 0;
        while (a < str1.length() && b < str2.length()) {
            if(str1[a]==str2[b]) {
                if (b == 0 || str2[b] != str2[b-1]) {
                    diff++;
                }
                count++;
                a++;
                b++;
            }
            else {
                if(str1[a]<str2[b]) {
                    a++;
                }
                else {
                    b++;
                }
            }
        }
        if (count!=0 && diff == str_2.size()) {
            cout<<count;
        }
        else {
            cout<<-1;
        }
    }