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
       cout << '
';
    }
    return 0;
}
 
void mantri(){
    long long int n;
    cin >> n;
    long long int i=1;
    while(n%i==0){
    	i++;
	}
	cout << i-1;
}