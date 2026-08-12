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
    string b, c;
    cin >> b >> c;
    vector<int> d(26);
    for (int e =0;e<26; ++e) {
        d[b[e]-'a'] = e;
    }
    int f = 0;
    for (size_t g = 1; g< c.length(); ++g) {
        f += abs(d[c[g]-'a'] - d[c[g - 1] - 'a']);
    }
    cout << f;
}