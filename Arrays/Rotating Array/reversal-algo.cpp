#include <bits/stdc++.h> 
using namespace std; 
#include <iostream>

/*

	Algorithm :

	rotate(arr[], d, n)
  	reverse(arr[], 1, d) ;
  	reverse(arr[], d + 1, n);
  	reverse(arr[], 1, n);
	
	Let AB are the two parts of the input array where A = arr[0..d-1] and B = arr[d..n-1].

	The idea of the algorithm is :	

	Reverse A to get ArB, where Ar is reverse of A.
	Reverse B to get ArBr, where Br is reverse of B.
	Reverse all to get (ArBr) r = BA.

*/


void reverse(int arr[], int n){
	int temp;
	int i;

	
	for(i=0;i<= ((int (n/2))-1) ;i++){
		temp=arr[n-1-i];
		arr[n-1-i]=arr[i];
		arr[i]=temp;
	}


}





int main (){

	int n;
	int d;	
	int ar[n];
	int i;	
	
	cin >> n;
	cin >> d;
	
	for(i=0;i<n;i++){
		cin >> ar[i];
	}
	

	while (d>n){
		d=d-n;
	
	}


	
	reverse(ar,d);

	reverse((ar+d),(n-d));
	reverse(ar,n);

	for(i=0;i<n;i++){
		
		cout << ar[i] << "\n";
	}


	return 0;
}

