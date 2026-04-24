//                                                                                 ||
//                         بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ                                       ||
// "وَلَقَدْ خَلَقْنَا الْإِنْسَانَ وَنَعْلَمُ مَا تُوَسْوِسُ بِهِ نَفْسُهُ ۖ وَنَحْنُ أَقْرَبُ إِلَيْهِ مِنْ حَبْلِ الْوَرِيدِ" (Quran 50:16) -     ||
//                                                                                 ||
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,nve =0,pve=0,steps = 0;
        cin >> n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin >> arr[i];
            arr[i]==1?pve++:nve++;
        }
       if(nve<=pve){
        if(nve%2==0){
            cout << 0 << '
';
        }
        else{
            cout << 1<< '
';
        }
       }
       else{
            int result = nve-pve;
            if(result%2!=0){
                steps+=(result/2)+1;
                nve-=steps;
            }
            else{
                steps+=result/2;
                nve-=steps;
            }
            if(nve%2!=0){
                steps++;
            }
            cout << steps<<'
';
       }
    }
 
    return 0;
}