// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define ll int long long 
#define vi vector<int>
//heapify

void heapify(vi &a, int n , int i)
{
    int l = 2*i + 1;
    int r = 2*i + 2;
    int maxind=i;
    
    if(l<n && a[l]>a[maxind])
      maxind=l;
      
     if(r<n && a[r]>a[maxind])
      maxind=r;
    
    if(maxind != i)
    {
        swap(a[i], a[maxind]);
        heapify(a,i,maxind);
    }
    
    
}
void heapsort(vi &a )
{
    int n=a.size();
    for(int i=n/2-1 ; i>=0 ;i--)
    {
        heapify(a,n,i);
    }
    for(int i=n-1; i>0; i--)
    {   //heapify down
        swap(a[0], a[i]);
        heapify(a,i,0);
    } 
    
}


int main() {
   
int n;
cin>>n;
vi a(n);
for(int i=0;i<n;i++)
cin>>a[i];

heapsort(a); //  calling of function

for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
    
    return 0;
}