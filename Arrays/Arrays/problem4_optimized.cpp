#include <bits/stdc++.h> 
using namespace std; 
#include <iostream>

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
		if (N==1){
			cout << "1" << "\n" ;
			continue;
		}
		int sum=0;
		for(i=0;i<N;i++){
			sum=sum+Arr[i];		
		}	

		int suml=0;
		int sumr=sum-Arr[0];
		for(i=1;i<N;i++){
			suml=suml+Arr[i-1];
			sumr=sumr-Arr[i];
			if(sumr==suml){
				cout << i+1<< "\n"; 
				break;
			}
		}
		if(sumr!=suml){
			cout << "-1" << "\n";
		}
	}

	return 0;
}
