// parameterized recursion

/*#include<bits/stdc++.h>
using namespace std;
void fn(int i,int sum);
int n;

int main()
{
    cout<<"enter a number";
    cin>>n;
    fn(n,0);
}
  void fn(int i,int sum)

{
      if(i<1)
      {
      cout<<sum;
      return;
      }

      fn(i-1,sum+i);
}*/

//fucntional recursion( returning a value)

/*#include<bits/stdc++.h>
using namespace std;
int n;
int sum(int n);
int main()
{
   cout<<"enter a number";
   cin>>n;
   cout<<sum(n);
}
int sum( int n)
{
    if(n == 0) return 0;
    return n+sum(n-1);
}*/

// factorial 

#include<bits/stdc++.h>
using namespace std;
int n;
int fact(int n);
int main()
{
   cout<<"enter a number";
   cin>>n;
   cout<<fact(n);
}
int fact( int n)
{
    if(n == 0) return 1;
    return n*fact(n-1);
}

