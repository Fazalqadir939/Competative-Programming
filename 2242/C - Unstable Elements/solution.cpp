// =======================================================================================
//
//                         بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// "وَلَقَدْ خَلَقْنَا الْإِنْسَانَ وَنَعْلَمُ مَا تُوَسْوِسُ بِهِ نَفْسُهُ ۖ وَنَحْنُ أَقْرَبُ إِلَيْهِ مِنْ حَبْلِ الْوَرِيدِ" (Quran 50:16)
//
//       July , 2K26                                       Fazal Qadir
//      codeforces                                  -->   @fazalqadir
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
bool check();
 
// --- main function ---
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
// ---  Don't change above ---
    int test=1;
    cin >> test;
    while(test--){
    solve();
    }
}
 
// ---  Actual code itthe rakh ---
 
void solve(){
	int n, k;
    cin >> n >> k;
    vi arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vll f;
    int count = 1;
    for(int i=1; i<n; i++) {
        if(arr[i] == arr[i-1]) {
            count++;
        } else {
            f.pb(count);
            count = 1;
        }
    }
    f.pb(count);
 
    sort(all(f));
    
    int m = sz(f);
    ll S = n; 
    int ans = 0;
    for(int i=0; i<m; i++) {
        if(i ==0||f[i]!= f[i-1]) {
            ll diff=k - S;
            ll C =m - i;
            if(diff% C == 0) {
                ll c = diff / C;
                if(c+f[i] >= 1) {
                    ans++;
                }
            }
        }
        S -= f[i];
    }
    
    cout << ans << '
';
}
 
 
 
 