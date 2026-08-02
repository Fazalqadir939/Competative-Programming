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
    int t;
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
	vector <int> a(n),b(n);
	int mx = 0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		mx < a[i] ?mx=a[i]:1;
	}
	for(int i=0;i<n;i++){
		cout << mx-a[i]+1 << " ";
	}	
}