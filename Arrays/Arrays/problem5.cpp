#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int start, int end);
int maxLen(int arr[], int n);

/*
	Given an array of 0's and 1's your task is to complete the function maxLen which returns size of the largest sub array with equal 		number of 0's and 1's. The function maxLen takes 2 arguments. The first argument is the array A[] and second argument is the size 		'N' of the array A[].

	Input:
	The first line of the input is T denoting the number of test cases. Then T test cases follow . Each test case contains two lines. 		The first line of each test case is a number N denoting the size of the array and in the next line are N space separated values of 		A [].

	Output:
	For each test case output in a new line the max length of the subarray.

	Constraints:
	1 <= T <= 100
	1 <= N <= 100
	0 <= A[] <= 1

	Example:
	Input 
	2
	4
	0 1 0 1
	5
	0 0 1 0 0

	Output
	4
	2

	Explanation:
	Testacase 1: The array from index [0...3] contains equal number of 0's and 1's. Thus maximum length of subarray having equal number 		of 0's and 1's is 4. 


*/


int main() {

	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<maxLen(a,n)<<endl;
		
	}
	return 0;
}


/*
	Please note that it's Function problem i.e.						
													
	you need to write your solution in the form of Function(s) only.
	Driver Code to call/invoke your function is mentioned above.
*/

/*
	You are required to complete this method
*/
int sum(int arr[], int start, int end){
	int s=0;
	int i;
	for(i=start;i<=end;i++){
		s=s+arr[i];	
	}
	return s;
}

int maxLen(int arr[], int n)
{
//Your code here

	int start;
	int end;
	int i,max_len,p,count_1,count_0;
	start=0;
	end=1;
	p=sum(arr,0,n-1);
	//cout << p;
	if(p==0||p==n){
		max_len=0;
		return max_len;
	}	
	if(p!=0){max_len=1;}
	for(start=0;start<=n-2;start++){
		for(end=start+1;end<n;end++){
			count_1=sum(arr, start,end);		
			count_0=(end-start+1)-count_1;
			if(count_0==count_1){
				if((end-start+1)>max_len){
					max_len=(end-start+1);
				}
						
			}
			
		}
	
	}
	return max_len;
}

/*------------------------Alternates-----------------------------*/

// 1. Convert all the 0's to -1, thus the problem reduces to find the length of largest subarray giving sum 0.

//2. After converting 0's, we can maintain hashmap to keep track of indices of getting subarray sum equal to 0.
//Also we will keep updating maxLen of subarray by subtracting last zero sum index from current index.

