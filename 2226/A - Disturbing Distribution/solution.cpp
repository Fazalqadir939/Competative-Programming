//=======================================================================================
//                                                                                      =
//                         بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ                                             =
// "وَلَقَدْ خَلَقْنَا الْإِنْسَانَ وَنَعْلَمُ مَا تُوَسْوِسُ بِهِ نَفْسُهُ ۖ وَنَحْنُ أَقْرَبُ إِلَيْهِ مِنْ حَبْلِ الْوَرِيدِ" (Quran 50:16) -          =       
//                                                                                      =
//                                                                                      =
//-======================================================================================
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n;
         cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;
        const int MOD = 676767677;
        long long cost = 0;
        int right = -1;
        for (int i = n-1; i >= 0; i--) {
            if (a[i] != 1) 
            { 
                right = i; break; }
        }
        bool one = false;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                if (i < right) continue;
                else one = true;
            } else {
                cost += a[i];
            }
        }
        if (one) cost += 1;
        cout << cost % MOD << "
";
    }
}