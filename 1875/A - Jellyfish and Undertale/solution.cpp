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
    int a,b,n;
    cin >> a >> b >>n;
    vector <int> v(n);
    for(int &x:v){
    	cin >> x;
	}
	sort(v.begin(),v.end());
	if(a==1){
		cout << 1;
		return;
	}
	long long int total = b;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(v[i]>=a){
		    cnt++;
		    total+=a;
		}else{
			total+=v[i];
		}
		
	}
	cout << total-cnt;
}