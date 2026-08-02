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
	int n ,mul=1,two=0;
	cin >> n;
	vector <int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
		mul *= a[i]; 
		if (a[i] == 2) two++;
	}
	if(two&1){
		cout << -1;
		return;
	}
	int k=0;
	int m=0,p=0;
	for(int i=0;i<n;i++){
		if( m<two/2 && a[i]==2){
			m++;
			m==two/2?k=i:1;
		}
		else if(a[i]==2){
			p++;
		}
	}
	m==p?cout << k+1:cout << -1;
	
		
}