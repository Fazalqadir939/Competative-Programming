// =======================================================================================
//
//                         بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// "وَلَقَدْ خَلَقْنَا الْإِنْسَانَ وَنَعْلَمُ مَا تُوَسْوِسُ بِهِ نَفْسُهُ ۖ وَنَحْنُ أَقْرَبُ إِلَيْهِ مِنْ حَبْلِ الْوَرِيدِ" (Quran 50:16)
//
// Saturday , 30 MAY,2K26                                    Fazal Qadir
//      Current Rating: 1207  --> Pupil   -->   @fazalqadir
// =======================================================================================
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        long long  int sum=0;
        long long  int ans=LLONG_MAX;
        for(int i=1; i<=n; i++){
            long long int x;
            cin>>x;
            sum+=x;
            ans=min(ans, sum/i);
            cout<<ans<<" ";
        }
        cout<<"
";
    }
}