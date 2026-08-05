#include<bits/stdc++.h>
using namespace std;
void f();
int cn=0;
int main()
{
     cn=0;
    f();

}
void f()
{
    if(cn==2) return; // base condition 

    cout<<"1";
     cn=cn+1;
    f();
}

