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
 
   int n;
   cin >> n;
   vi v(n);
   for(int i = 0 ; i<n;i++){
   	cin >> v[i];
   }
   
    vi s1(n), s2(n);
    int sum1 = 0, sum2 = 0;
    
    for (int i = 0; i < n; ++i) {
        if(v[i]==1){
        	sum1+=1;
		}
		else{
			sum1+=-1;
		}
        s1[i] = sum1;
        if(v[i]!=3){
        	sum2+=1;
		}
		else{
			sum2+=-1;
		}
        s2[i] = sum2;
    }
    
    vi mx(n);
    mx[n-2]=s2[n-2];
    for (int i=n- 3; i >= 0; --i) {
        mx[i] = max(s2[i], mx[i + 1]);
    }
 
    bool flag = false;
    for (int i = 0; i <= n - 3; ++i) {
        if (s1[i] >= 0) { 
            if (mx[i+1]>=s2[i]) { 
                flag = true;
                break;
            }
        }
    }
    if(flag){
    	cout << "Yes
";
	}
	else{
		cout << "NO
";
	}
}
 
 
 
 