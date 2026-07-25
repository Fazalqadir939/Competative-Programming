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
	vector <int> a(n);
	vector <int> b,c;
	int dif=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(i!=0 && a[i]!=a[i-1]) dif++;
	}
	sort(a.begin(),a.end());
	bool flag = true;
	if(dif==0) {
		cout << -1<<'
';
		return;
	}else{
		for(int i=n-1;i>=0;i--){
			if(a[i]==a[n-1]) c.push_back(a[i]);
			else b.push_back(a[i]);
		}
		cout << b.size() << " " << c.size()<<'
';
		for(int i=0;i<b.size();i++){
			cout << b[i] << " ";
		}
		cout << '
';
		for(int i=0;i<c.size();i++){
			cout << c[i] << " ";
		}
		cout << '
';
	}
	
}