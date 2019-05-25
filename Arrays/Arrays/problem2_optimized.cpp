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

	int T,count;
	cin >> T;
	int majority_i,value;
	while (T--){
		int N;
		cin >> N;
		int i;
		int Arr[N];
		for (i=0;i<N;i++){
			cin >> Arr[i];
		}

		majority_i=0;

		count=1;	
		for(i=1;i<N;i++){
			if(Arr[i]==Arr[majority_i]){
				count++;	
			}
			else{count--;}

			if(count==0){
				majority_i=i;
				count = 1;

			}
		}
		int p=0;
		int j;
		
		for(j=0;j<N;j++){
			if(Arr[j]==Arr[majority_i]){
				p++;
			}
		}

		if(p>float (N/2)){
			cout << Arr[majority_i] << endl;		
		}
		else{cout << "-1"<< endl;}	
		

	}



	return 0;
}
