//=====================================================================================---
//
//                         بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ                                       
// "وَلَقَدْ خَلَقْنَا الْإِنْسَانَ وَنَعْلَمُ مَا تُوَسْوِسُ بِهِ نَفْسُهُ ۖ وَنَحْنُ أَقْرَبُ إِلَيْهِ مِنْ حَبْلِ الْوَرِيدِ" (Quran 50:16) -     
//  
//
//-======================================================--------------=========------=---
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        bool flag = false;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                
                if (__gcd(arr[i], arr[j]) <= 2){
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
 
        if(flag == false){
            cout << "No
";
        }
        else{
            cout << "Yes
";
        }
    }
}