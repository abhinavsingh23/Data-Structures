#include <bits/stdc++.h> 
using namespace std;
#include <iostream>
#include<stdio.h>

/*

Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print the maximum sum of the contiguous sub-array in a separate line for each test case.

Constraints:
1 ≤ T ≤ 110
1 ≤ N ≤ 106
-107 ≤ A[i] <= 107

Example:
Input
2
5
1 2 3 -2 5
4
-1 -2 -3 -4
Output
9
-1

Explanation:
Testcase 1: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.



*/

/*Kadane's algo*/

int kadane(int arr[], int n){
	
	int max=0;
	int running_sum=0;

	int i;
	for(i=0;i<n;i++){
		running_sum=running_sum+arr[i];
		
		if(running_sum<0){
			running_sum=0;		
		}
		if(running_sum>max){
			max=running_sum;
		}

	}
	return max;
}
int max(int arr[], int n){

	int i;
	int max=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

int main(){

	int T;
	cin >> T;

	while(T--){
		int n;
		cin >> n;
		int i;
		int arr[n];
		for(i=0;i<n;i++){
			cin >> arr[i];
		}
		int p=0;
		for(i=0;i<n;i++){
			if(arr[i]>0){
				p=1;
				break;			
			}
		}
		if(p==0){
			cout << max(arr,n)<<endl;
			continue;	
		}
		int ans=kadane(arr,n);
		cout << ans << endl;
	}
	
		



	return 0;	

}


