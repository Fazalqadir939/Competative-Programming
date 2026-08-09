// =======================================================================================
//      August,2K26                                          Fazal Qadir
//      codeforces                                         -->   @fazalqadir
// =======================================================================================
 
 
#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    string str;
    cin >> str;
    int seq=1,longest=1;
    for(int i=1;i<n;i++){
    	if(str[i]==str[i-1]) seq++;
    	else seq=1;
    	seq>longest?longest=seq:0;
	}
	cout << longest+1;
}