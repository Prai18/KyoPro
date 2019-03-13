#include<bits/stdc++.h>

using namespace std;

int main(){
  vector<int> a={-2,4,6,-3,7};
  vector<int> dp(5);

  for(int i=0;i<5;i++){
  	dp[i+1]=max(dp[i],dp[i]+a[i]);
  	cout<<dp[i]<<endl;
  }

  cout<<dp[5]<<endl;
}