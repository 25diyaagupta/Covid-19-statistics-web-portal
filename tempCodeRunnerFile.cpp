#include<bits/stdc++.h>
using namespace std;
#define ll long long
int N=1000000009;
int main(){
    int n,m;cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans1=1;
    for(int i=1;i<n-1;i++){
      if(arr[i]==-1){
        if(i%2==0){
           ans1=(ans1*(min(arr[i-1],arr[i+1])-1))%N;
        }
        else {
          if(max(arr[i-1],arr[i+1])==m)ans1=0;
          else ans1=(ans1*(m-max(arr[i-1],arr[i+1])))%N;
        }
      }
    }
    if(arr[0]==-1)ans1=(ans1*(arr[1]-1))%N;
    if(arr[n-1]==-1){
      if((n-1)%2==0)ans1=(ans1*(arr[n-2]-1))%N;
      else ans1=(ans1*(m-arr[n-2]))%N;
    }
    int ans2=1;
    for(int i=1;i<n-1;i++){
      if(arr[i]==-1){
        if(i%2==1){
           ans2=(ans2*(min(arr[i-1],arr[i+1])-1))%N;
        }
        else {
          if(max(arr[i-1],arr[i+1])==m)ans2=0;
          else ans2=(ans2*(m-max(arr[i-1],arr[i+1])))%N;
        }
      }
    }
    if(arr[0]==-1)ans2=(ans2*(m-arr[1]))%N;
    if(arr[n-1]==-1){
      if((n-1)%2==1)ans2=(ans2*(arr[n-2]-1))%N;
      else ans2=(ans2*(m-arr[n-2]))%N;
    }
    cout<<ans1+ans2<<endl;
}