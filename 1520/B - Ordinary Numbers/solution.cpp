//=======================================================================================
//                                                                                      =
//                         بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ                                             =
// "وَلَقَدْ خَلَقْنَا الْإِنْسَانَ وَنَعْلَمُ مَا تُوَسْوِسُ بِهِ نَفْسُهُ ۖ وَنَحْنُ أَقْرَبُ إِلَيْهِ مِنْ حَبْلِ الْوَرِيدِ" (Quran 50:16) -          =       
//                                                                                      =
//                                                                                      =
//-======================================================================================
#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n;
    cin >> n;
    long long count = 0;
    for (int d = 1; d <= 9; d++) {
        long long num = d;
        while (num <= n) {
            count++;
            num = num * 10 + d;
        }
    }
    cout << count << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}