/*
n個の品物があり、i番目の品物のそれぞれ重さと価値が 
weight[i],value[i]weight[i],value[i] となっている (i=0,1,...,n−1)。
これらの品物から重さの総和が Wを超えないように選んだときの、価値の総和の最大値を求めよ。

【制約】
・1≤n≤1001≤n≤100
・weight[i],value[i]は整数
・1≤weight[i],value[i]≤1000
・1≤W≤10000

【数値例】
1) 
　n=6
　(weight,value)=(2,3),(1,2),(3,6),(2,1),(1,3),(5,85)
　W=8
　答え: 91 ((3,6), (5,85) を選んだときが最大です)*/
#include<bits/stdc++.h>

using namespace std;

int n,W;
int weight[100];
int value[100];

int dp[100][10000];



int main(){
	cin>>n>>W;
	for(int i=0;i<n;i++){
		cin>>weight[i]>>value[i];
	}

	//DP初期条件
	for(int w=0;w<W;w++){
		dp[0][w]=0;
	}

	//DPループ
	for(int i=0;i<n;i++){
		for(int w=0;w<=W;w++){
			if(w>=weight[i]){
				dp[i+1][w]=max(dp[i][w-weight[i]]+value[i],dp[i][w]);
			}else{
				dp[i+1][w]=dp[i][w];
			}
		}
	}
	cout<<dp[n][W]<<endl;
 }