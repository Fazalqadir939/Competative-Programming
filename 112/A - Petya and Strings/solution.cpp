//// Created by User on 26-Dec-25.//
#include <iostream>
using namespace std;
int main()
{
  string str1;
  string str2;
  cin>>str1>>str2;
  int length = 0;
  do{length++;}
    while (str1[length]!='\0');
  for (int i =0;i<length;i++)
    {
      if (str1[i]>='A'&&str1[i]<='Z')
      {
        str1[i]+=32;
      }
      if (str1[i]>='A'&&str2[i]<='Z')
      {
        str2[i]+=32;
      }
    }
  int t;
  for (int i =0;i<length;i++)
    {
      if (str1[i]>str2[i])
      {
        t = 1;
        break;
      }
      else if (str1[i]<str2[i])
      {
        t = -1;
        break;
      }
      else
      {
        t =0;
      }
    }
  cout << t;
}
