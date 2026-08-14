// =======================================================================================
//      August,2K26                                          Fazal Qadir
//      codeforces                                         -->   @fazalqadir
// =======================================================================================
 
 
#include <bits/stdc++.h>
using namespace std;
void mantri();
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t=1;
    cin >> t;
    while (t--)
    {
       mantri();
       cout << '
';
    }
    return 0;
}
 
void mantri(){
    int sz;
    cin >> sz;
    
    set<int> s;
    for (int i = 0; i < sz; i++) {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    
    int u = s.size();
    int diff = sz - u;
    
    if (diff % 2 == 0) {
        cout << u;
    } else {
        cout << u - 1;
    }
}