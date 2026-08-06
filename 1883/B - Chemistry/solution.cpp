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
    int n,k;
	cin >> n >> k;
	string str;
	cin >> str;
	vector <int> freq(26,0);
	for(int i=0;i<n;i++){
		freq[str[i]-'a']++;
	}    
	int odd =0;
	for(int i=0;i<26;i++){
		if(freq[i]&1) odd++;
	}
	odd > k+1 ? cout << "NO" :cout << "YES";
}