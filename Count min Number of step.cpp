#include<bits/stdc++.h> 
using namespace std;

using std::cout; using std::endl;
using std::vector; using std::remove;
int ans1(vector<int>&a ,int n)
{
     int ans=0;
     while(n!=0)
     {
         if(a[0]!=a[n-1])
         {
            
             a.erase(std::remove(a.begin(),a.end(),a[0]),a.end());
             a.erase(std::remove(a.begin(),a.end(),a[n-1]),a.end());

             
         }
         else
         {
            
            a.erase(remove(a.begin(),a.end(),a[0]),a.end());

         }
         ans++;
         
     }
     return ans;
}
int main()
{ 
 vector<int>a={2,2,2,3,3};
  int n=a.size();
  
    
     std::cout << ans1(a,n) << std::endl;
    return 0; 
}
