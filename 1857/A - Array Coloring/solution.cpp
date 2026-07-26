// =======================================================================================
//      July,2K26                                          Fazal Qadir
//      codeforces                                         -->   @fazalqadir
// =======================================================================================
 
 
#include <bits/stdc++.h>
using namespace std;
void mantri();
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
       mantri();
    }
    return 0;
}
 
void mantri(){
	int n;
	cin >> n;
	vector <int> vec(n);
	int o=0;
	for(int i=0;i<n;i++){
		cin >> vec[i];
		if(vec[i]&1) o++;
	}
	!(o&1) ? cout << "YES
" : cout << "NO
";
}