// =======================================================================================
//
//                         بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// "وَلَقَدْ خَلَقْنَا الْإِنْسَانَ وَنَعْلَمُ مَا تُوَسْوِسُ بِهِ نَفْسُهُ ۖ وَنَحْنُ أَقْرَبُ إِلَيْهِ مِنْ حَبْلِ الْوَرِيدِ" (Quran 50:16)
//
// =======================================================================================
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
        for (int i = 0; i < test; i++) {
            long long int a, b;
            cin >> a >> b;
            long long int res = b - a;
            if (res < 0) {
                res *= -1;
            }
            long long int bar = res / 10;
            long long int  rem = res % 10;
            if (rem != 0) {
                bar += 1;
            }
            cout << bar << "
";
        }
    return 0;
}