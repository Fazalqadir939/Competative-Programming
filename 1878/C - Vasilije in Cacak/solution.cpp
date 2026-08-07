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
    long long int n,k,x;
    cin >> n >> k >>x;
    long long int n_sum = (n*(n+1))/2;
    long long int k_sum = (k*(k+1))/2;
    long long int b=n-k;
    long long int b_s = (b*(b+1))/2;
    long long int b_sum = n_sum-b_s;
    if(n_sum<x||k_sum>x||b_sum<x) cout << "No";
    else cout << "Yes";
}