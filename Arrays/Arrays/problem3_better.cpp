#include <bits/stdc++.h> 
using namespace std; 
#include <iostream>
#include<stdio.h>

/*
	Given an array of positive integers. Your task is to find the leaders in the array.
	Note: An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost 		element is always a leader. 

	Input:
	The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
	The first line of each test case contains a single integer N denoting the size of array.
	The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

	Output:
	Print all the leaders.

	Constraints:
	1 <= T <= 100
	1 <= N <= 107
	0 <= Ai <= 107

	Example:
	Input:
	3
	6
	16 17 4 3 5 2
	5
	1 2 3 4 0
	5
	7 4 5 7 3
	Output:
	17 5 2
	4 0
	7 7 3

	Explanation:
	Testcase 3: All elements on the right of 7 (at index 0) are smaller than or equal to 7. Also, all the elements of right side of 7 		(at index 3) are smaller than 7. And, the last element 3 is itself a leader since no elements are on its right.

*/

int maximum(int Arr[] , int start, int end){
	int i;
	int max_i=start;
	for(i=start; i<=end; i++){
		if(Arr[i]>Arr[max_i]){
			max_i=i;
		}
	
	}
	printf("%d ", Arr[max_i]);
	if(max_i==end){
		return 0;
	}
	maximum(Arr,max_i+1,end);

}


int main(){


	int T;
	scanf("%d", &T);
	int i;
	while (T--){

		int N;
		scanf("%d", &N);
		int Arr[N];
		
		for(i=0;i<N;i++){
			scanf("%d", &Arr[i]);
		}
		
		int start,end;
		start=0;
		end=N-1;
		maximum(Arr,start,end);
		
		printf("\n");

	}







	return 0;
}
