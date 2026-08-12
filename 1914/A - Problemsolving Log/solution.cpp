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
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    vector<int> cnt(26, 0);
    for (char c : s) {
        cnt[c-'A']++;
    }
    int ans = 0;
    for (int i=0;i <26;i++) {
        if (cnt[i]>=i + 1) {
            ans++;
        }
    }
    cout << ans;
}