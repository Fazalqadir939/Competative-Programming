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
	vector <int> vec(n);
	int diff = 1;
	for(int i=0;i<n;i++){
		cin >> vec[i];
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<n-1;i++){
	 if(vec[i]!=vec[i+1]){
	 	diff++;
	 }
}
	int s=1,d=1;
		for(int i=0;i<n-1;i++){
			if(vec[i]==vec[i+1]){
			    s++;	
			}
			else{
				break;
			}
		}
		d = n-s;
		if(d>s) swap(s,d);
		
	
	
	if(n==2||(diff<=2&& (d>=s-1)||d==0 )){
		cout << "Yes
";
	}else{
		cout << "NO
";
	}
}