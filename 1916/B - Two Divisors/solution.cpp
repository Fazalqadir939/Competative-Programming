//                                                                                 ||
//                         بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ                                       ||
// "وَلَقَدْ خَلَقْنَا الْإِنْسَانَ وَنَعْلَمُ مَا تُوَسْوِسُ بِهِ نَفْسُهُ ۖ وَنَحْنُ أَقْرَبُ إِلَيْهِ مِنْ حَبْلِ الْوَرِيدِ" (Quran 50:16) -     ||
//                                                                                 ||
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (b % a == 0) {
            cout << (b * b) / a << "
";
        } else {
            cout << (a * b) / gcd(a, b) << "
";
        }
    }
 
    return 0;
}