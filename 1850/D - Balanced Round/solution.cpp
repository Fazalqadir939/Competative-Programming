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
    vector <int> v(n);
    for(int &x:v){
    	cin >> x;
	}
	sort(v.begin(),v.end());
	int mx=1,s=1;
	for(int i=1;i<n;i++){
		if( (v[i]-v[i-1])<=k ){
			s++;
		}
		else{
			s=1;
		}
		if(s>mx) mx=s;
	}
	cout << n-mx;
}