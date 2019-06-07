#include<iostream>
using namespace std;
#include <iostream>
#include<stdio.h>

/*

	Given an array of positive integers. The task is to find inversion count of array.

	Inversion Count : For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already 		sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
	Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

	Input:
	The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, the size of 		array. The second line of each test case contains N elements.

	Output:
	Print the inversion count of array.

	Constraints:
	1 ≤ T ≤ 100
	1 ≤ N ≤ 107
	1 ≤ C ≤ 1018

	Example:
	Input:
	1
	5
	2 4 1 3 5

	Output:
	3

	Explanation:
	Testcase 1: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).


*/


int merge(int *Arr_l,int *Arr_r, int *Arr, int nl,int nr,int n){
	

	int i,j,k;
	i=0;
	j=0;
	k=0;
	
	int count=0;
	while(i<nl && j<nr){
		if(Arr_l[i]<Arr_r[j]){
			Arr[k]=Arr_l[i];
			i=i+1;
			k=k+1;
		}
		if(Arr_l[i]>Arr_r[j]){
			Arr[k]=Arr_r[j];
			j=j+1;
			k=k+1;
			count=count+nl-i;
		}
		if(Arr_l[i]==Arr_r[j]){
			Arr[k]=Arr_r[j];
			Arr[k+1]=Arr_l[i];
			i++;
			j++;
			k=k+2;
		}
	}

	while(i<nl){
		Arr[k]=Arr_l[i];
		i++;		
		k++;
	}
	while(j<nl){
		Arr[k]=Arr_r[j];
		j++;
		k++;
	}

	return count;
}



int mergesort(int Arr[] ,int n){

	int i;
	int count=0;;
	if(n<2){

		return count;
	}
	
	int nl= n/2;
	int nr= n-nl;
	int Arr_r[nr];
	int Arr_l[nl];


	for(i=0;i<nl;i++){
		Arr_l[i]=Arr[i];
	}

	for(i=0;i<nr;i++){
		Arr_r[i]=Arr[nl+i];
	}
	count = mergesort(Arr_l,nl);
	count += mergesort(Arr_r,nr);
	count += merge(Arr_l,Arr_r,Arr,nl,nr,n);

	return count;
	
	

}

int main(){

	int T;
	cin >> T;	

	while(T--){
		int n;
		cin >> n;
	
		int i;
		int Arr[n];
		for(i=0;i<n;i++){
		    	cin >> Arr[i];
		}
	
		int ans=mergesort(Arr,n);
		cout << ans << endl;
		
	}
	return 0;	

}

