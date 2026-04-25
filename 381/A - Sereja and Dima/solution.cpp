//=======================================================================================
//                                                                                      =
//                         بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ                                             =
// "وَلَقَدْ خَلَقْنَا الْإِنْسَانَ وَنَعْلَمُ مَا تُوَسْوِسُ بِهِ نَفْسُهُ ۖ وَنَحْنُ أَقْرَبُ إِلَيْهِ مِنْ حَبْلِ الْوَرِيدِ" (Quran 50:16) -          =       
//                                                                                      =
//                                                                                      =
//-======================================================================================
#include<iostream>
#include<deque>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    deque<int> vec(n);
    for(int i =0;i<n;i++){
       cin >> vec[i];
    }
    int ser = 0,dima =0;
    int bari =1;
    while(!vec.empty()){
        if(vec.front()>vec.back()){
            if(bari%2!=0){
                ser+=vec.front();
                vec.pop_front();
            }
            else{
                dima+=vec.front();
                vec.pop_front();
            }
        }
        else{
            if(bari%2!=0){
                ser+=vec.back();
                vec.pop_back();
            }
            else{
                dima+=vec.back();
                vec.pop_back();
            }
        }
        bari++;
    }
    cout << ser << " " << dima;
}