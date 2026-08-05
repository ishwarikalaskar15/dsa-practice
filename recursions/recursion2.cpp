// printing name N times

/*#include<bits/stdc++.h>
using namespace std;
void fn(int i,int n);
int n;
int i=1;
int main()
{
    cout<<"enter a number";
    cin>>n;
    fn(i,n);
}
  void fn(int i,int n)

{
      if(i>n) return;

      cout<<"ishwari";
      fn(i+1,n);
} */
 
// printing lenearlly 1-N

/*#include<bits/stdc++.h>
using namespace std;
void fn(int i,int n);
int n;
int i=1;
int main()
{
    cout<<"enter a number";
    cin>>n;
    fn(i,n);
}
  void fn(int i,int n)

{
      if(i>n) return;

      cout<<i<<endl;
      fn(i+1,n);
} */

// print in opposite fashion N-1 // by backtracking 

/*#include<bits/stdc++.h>
using namespace std;
void fn(int n,int i);
int n;
int i=1;
int main()
{
    cout<<"enter a number";
    cin>>n;
    fn(n,i);
}
  void fn(int n,int i)

{
      if(i>n) return;

       fn(n,i+1); // u should call this funtion first for desending order
      cout<<i<<endl;
     
} */

// print 1-N by backtracking without using (i+1,n)

#include<bits/stdc++.h>
using namespace std;
void fn(int i,int n);
int n;

int main()
{
    cout<<"enter a number";
    cin>>n;
    fn(n,n);
}
  void fn(int i,int n)

{
      if(i<1) return;

      fn(i-1,n);
      cout<<i<<endl;
      
}

