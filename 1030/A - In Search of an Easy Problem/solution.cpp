//// Created by User on 04-Jan-26.//
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  bool g = false;
  for (int i =0;i<n;i++)  
    {   
      cin >>arr[i];  
      if (arr[i]==1) 
    {  
      g = true;    
      break;    
    } 
    }
  if (g==true)   
  {   
    cout << "HARD"; 
  } 
  else 
  {    
    cout << "EASY";   
  } 
}
