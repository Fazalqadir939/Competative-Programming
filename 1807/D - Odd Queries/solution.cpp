// =======================================================================================
//      August,2K26                                          Fazal Qadir
//      codeforces                                         -->   @fazalqadir
// =======================================================================================
 
 
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
void mantri();
bool isprime(int);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t=1;
    cin >> t;
    while (t--)
    {
       mantri();
       //cout << '
';
    }
    return 0;
}
 
void mantri(){
    int n,q;
    cin >> n >> q;
    vector <int > v(n);
    vector <int> sum(n);
    for(int i=0;i<n;i++){
    	cin >> v[i];
    	i>0 ? sum[i]=v[i]+sum[i-1]:sum[i]=v[i];
	}
	while(q--){
		int l,r,k;
	    cin >> l >> r >> k;
	    long long int total{};
	    l>1?total+=sum[l-2]:1;
	    total+= (r-l+1)*k;
	    total+= (sum[n-1]-sum[r-1]);
	    (total&1) ? cout << "Yes
" : cout << "No
";
	}
}