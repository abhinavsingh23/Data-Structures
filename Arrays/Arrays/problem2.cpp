#include <bits/stdc++.h> 
using namespace std; 
#include <iostream>


/*
	Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element 		that appears more than N/2 times in the array.

	Input:  
	The first line of the input contains T denoting the number of testcases. The first line of the test case will be the size of array 		and second line will be the elements of the array.

	Output: 
	For each test case the output will be the majority element of the array. Output "-1" if no majority element is there in the array.

	Constraints:
	1 <= T<= 100
	1 <= N <= 107
	0 <= Ai <= 106

	Example:
	Input:
	2
	5
	3 1 3 3 2
	3
	1 2 3

	Output:
	3
	-1

	Explanation:
	Testcase 1: Since, 3 is present more than N/2 times, so it is the majority element.

*/
int main(){

	int i,j,T,var;
	cin >> T;
	float count=0;
	int max=0;
	int p=1;
	while (T--){
		count = 0;
		int N;
		cin >> N;
		int Arr[N];
		for(i=0;i<N;i++){
			cin >> Arr[i];
		}
		for(i=0;i<N;i++){	
			var=Arr[i];
			for(j=0;j<N;j++){
				
				if(var==Arr[j]){
					count ++;
				}			

			}
		
			if(count>float (N/2)){
				cout << var <<endl;
				p=0;	
				break;
			}
			count = 0;
		
		}
		
		if(p==1){
		cout<< -1 << endl;
		}
		p=1;
		
	}
	
	

	return 0;
}
