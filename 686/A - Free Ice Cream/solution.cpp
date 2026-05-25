// =======================================================================================
//
//                         بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// "وَلَقَدْ خَلَقْنَا الْإِنْسَانَ وَنَعْلَمُ مَا تُوَسْوِسُ بِهِ نَفْسُهُ ۖ وَنَحْنُ أَقْرَبُ إِلَيْهِ مِنْ حَبْلِ الْوَرِيدِ" (Quran 50:16)
//
// MONDAY , 25 MAY,2K26                                    Fazal Qadir
//      Current Rating: 1207  --> Pupil   -->   @fazalqadir
// =======================================================================================
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b;
    cin >> a >> b;
    long long  kid = 0, sum = b;
    for (int i = 0; i < a; i++) {
        char ch;
        cin >> ch;
        long long num{};
        cin >> num;
        if (ch == '+') {
            sum += num;
        } else {
            if (num <= sum) {
                sum -= num;
            } else {
                kid++;
            }
        }
    }
    cout << sum << " " << kid;
    return 0;
}