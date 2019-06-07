#include<iostream>
using namespace std;
#include <iostream>
#include<stdio.h>

/*

	Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

	Input:
	The first line contains an integer 'T' denoting the total number of test cases. Then T testcases follow. Each testcases contains two 		lines of input. The first line denotes the size of the array N. The second lines contains the elements of the array A separated by 		spaces.

	Output: 
	For each testcase, print the sorted array.

	Constraints: 
	1 <= T <= 500
	1 <= N <= 106
	0 <= Ai <= 2

	Example:
	Input :
	2
	5
	0 2 1 2 0
	3
	0 1 0

	Output:
	0 0 1 2 2
	0 0 1

	Explanation:
	Testcase 1: After segragating the 0s, 1s and 2s, we have 0 0 1 2 2 which shown in the output.


*/


int main(){

	int T;
	cin >> T;
	int i;
	while(T--){
		
		int N;
		cin >> N;
		int Arr[N];
		

		for(i=0;i<N;i++){
			cin >> Arr[i];
		}
		int count_0=0;
		int count_1=0;
		int count_2=0;
		for(i=0;i<N;i++){
			if(Arr[i]==0){
				count_0++;			
			}			
			if(Arr[i]==1){
				count_1++;			
			}
			if(Arr[i]==0){
				count_2++;			
			}		
		}
	
		for(i=0;i<N;i++){
			if(i<=count_0-1){
				Arr[i]=0;
			}		
			if((i<=count_0+count_1-1)&&(i>count_0-1)){
				Arr[i]=1;
			}
			if((i<=count_0+count_1+count_2-1)&&(i>count_0+count_1-1)){
				Arr[i]=2;
			}
		}
		for(i=0;i<N;i++){
			cout << Arr[i] << " ";
		}
		cout << "\n";

	}

	


	return 0;

}


