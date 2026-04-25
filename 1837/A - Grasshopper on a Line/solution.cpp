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
        int n,k;
        cin >> n >>k;
        
        if(n%k!=0){
            cout << 1 << '
';
            cout << n<<'
';
        }
        else{
            cout << 2 << "
";
            cout << n - 1 << " " << 1 << "
";
        }
    }
 
    return 0;
}