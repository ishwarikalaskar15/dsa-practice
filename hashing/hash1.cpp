// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     //precomputation

//     int hash[13] ={0};
//     for(int i=0;i<n;i++)
//     {
//         hash[arr[i]] +=1;
//     }

//     int q;
//     cin>>q;
//     while(q--)
//     {
//         int number;
//          cin>>number;
//         //fetch
//         cout<< hash[number] <<endl;
//     }
//     return 0;
// }


// character hashing 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    // precomute 
      int hash[26] = {0};      // u can take 256 characters as well 
      for( int i=0;i<=s.size(); i++)
      {  
        hash[s[i] - 'a'] ++;     // no need to minus it 
      }  


    int q;
    cin>>q;
    while(q--)
    {
        char c; 
        cin>>c;
        //fetch
       cout << hash [c-'a'] << endl; // here also just write hash[c]

    }
    return 0;
}

// for (int i=0;i<nums.size();i++)
//          {
//             for (int j=i+1; j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j] == target)
//                 {
//                     return {i,j};
//                 }  
//             }   
//             }  
//              return {}; 
// two sum solution - tc o(n2)