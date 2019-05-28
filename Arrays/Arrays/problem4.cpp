#include <bits/stdc++.h> 
using namespace std; 
#include <iostream>
#include<stdio.h>

/*
	Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. 			Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after 			it.

	Input:
	The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. First line of each test 		case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array A.

	Output:
	For each test case in a new  line print the position at which the elements are at equilibrium if no equilibrium point exists print 		-1.

	Constraints:
	1 <= T <= 100
	1 <= N <= 106
	1 <= Ai <= 108

	Example:
	Input:
	2
	1
	1
	5
	1 3 5 2 2

	Output:
	1
	3

	Explanation:
	Testcase 1: Since its the only element hence its the only equilibrium point.
	Testcase 2: For second test case equilibrium point is at position 3 as elements below it (1+3) = elements after it (2+2). 
*/

int sum(int Arr[], int start, int end){
	int i;	
	int s=0;
	for(i=start;i<=end;i++){
		s=s+Arr[i];

	}
	return s;
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
		
		int eq= int (N/2);
		int sum_r;
		int sum_l;
		sum_r=sum(Arr, 0 , eq-1);
		sum_l=sum(Arr , eq+1, N-1);
bingo:		
		if(sum_r==sum_l){
			printf("%d \n",eq+1);
			continue;
		}
		if(sum_r>sum_l){
			sum_r=sum_r - Arr[eq-1];
			sum_l=sum_l + Arr[eq];
			eq=eq-1;
			goto bingo;
		}
		if(sum_r<sum_l){
			sum_r=sum_r + Arr[eq];
			sum_l=sum_l - Arr[eq+1];
			eq=eq+1;
			goto bingo;
		}	
		if(eq==0||eq==(N-1)){
			printf("-1 \n");	
			continue;	
		}
		
	
	}







	return 0;
}
