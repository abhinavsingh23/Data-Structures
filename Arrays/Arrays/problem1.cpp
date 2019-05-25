#include <bits/stdc++.h> 
using namespace std; 
#include <iostream>



/*
	
	Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be 	found.

	Input:
	The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of 	  array).The subsequent line contains N-1 array elements.
	
	Output:
	Print the missing number in array.

	Constraints:
	1 ≤ T ≤ 200
	1 ≤ N ≤ 107
	1 ≤ C[i] ≤ 107

	Example:
	Input:
	2
	5
	1 2 3 5
	10
	1 2 3 4 5 6 7 8 10

	Output:
	4
	9

	Explanation:
	Testcase 1: Given array : 1 2 3 5. Missing element is 4.

*/

int find(int *Arr, int len){

	int i,j;
	int p=0;
	for(i=1;i<len+1;i++){
		
		for(j=0;j<len;j++){
			if(i==Arr[j]){
				p=0;				
				break;	
							
			}
			p=1;
				
		}
	if(p==1){
		return i;	
	}

	
	}

}


int main(){
	
	int T;
	cin >> T;
	if((T>200)||(T<1)){return 1;}
	int N[T];
	int Arr[T][100];
	int i,j;
	
	for (i=0;i<T;i++){
		cin >> N[i];
		if(N[i]>10000000||N[i]<1){return 1;}
		for(j=0;j<(N[i]-1);j++){
			cin >> Arr[i][j];
		}

	}	
	int p;
	for(i=0;i<T;i++){
		p=find(&Arr[i][0], (N[i]-1));
		cout << p << "\n";

	}
	

	return 0;
}




















