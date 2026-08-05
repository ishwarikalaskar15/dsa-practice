 #include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int j,i;
     int n;
     cout<<" enter a number";
     cin >> n;
     for(i=0;i<=9;i++)
    {
      int stars=i;
      if(i>n) stars=2*n-i;
      for(j=1;j<=stars;j++)
      {
        cout<<"*";
      }
      cout<< endl;
 }
}