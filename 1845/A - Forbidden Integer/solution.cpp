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
	int n,k,x;
	cin >> n >> k >> x;
	if(x!=1 && k>1){
		cout << "YES
";
		cout << n << '
';
		for(int i=0;i<n;i++) cout << 1 << " ";
		cout << '
';
	}
	else if(k==2 ||(k>2&& !(n&1) ) ){
	    if(!(n&1) ){
	    	cout << "YES
";
	    	cout << n/2 << '
';
		    for(int i=0;i<n/2;i++) cout <<2 << " ";
		    cout << '
';
	    }else if((n&1))
		{
	    	cout << "NO
";
		}
	}
	else if(k>2){
		    cout << "YES
";
			cout << n/2 << '
';
			cout << 3 << " ";
			for(int i=0;i< (n/2)-1;i++){
				cout << 2 << " ";
			}
			cout << '
';
	}
	else {
		if(k==1){
			cout << "NO
";
		}
	}
}