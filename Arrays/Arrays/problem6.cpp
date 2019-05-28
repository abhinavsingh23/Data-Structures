#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include<stdio.h>
/*
	Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

	Input:
	The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists 		of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each 		test case contains N space separated integers denoting the array elements.

	Output:
	For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left 		if sum equals to subarray, else print -1.

	Constraints:
	1 <= T <= 100
	1 <= N <= 107
	1 <= Ai <= 1010

	Example:
	Input:
	2
	5 12
	1 2 3 7 5
	10 15
	1 2 3 4 5 6 7 8 9 10
	Output:
	2 4
	1 5

	Explanation : 
	Testcase1: sum of elements from 2nd position to 4th position is 12
	Testcase2: sum of elements from 1st position to 5th position is 15


*/
int sum(int arr[], int start, int end){
	int s=0;
	int i;
	for(i=start;i<=end;i++){
		s=s+arr[i];	
	}
	return s;
}


int main(){

	int T;
	scanf("%d", &T);
	int i;

	while(T--)
	{
		int n,S;
		scanf("%d %d", &n,&S);
		int arr[n];
		for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
		}
		int start=0;
		int end=0;
		int a;

		for(start=0;start<n;start++){
			for(end=start;end<n;end++){
				a=sum(arr,start,end);

				if(a==S){
					printf("%d %d \n", start+1,end+1);
					break;				
				}
			}		
			if(a==S){break;}
		}

		if(a!=S){
			printf("-1 \n");
			continue;
			
		}
	}



	
	return 0;
}
