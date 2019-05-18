#include <bits/stdc++.h> 
using namespace std; 
#include <iostream>


/*

Question:

	Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.

*/


/*Solution*/


void rotate( int ar[],int  d, int n){

	int i=0;
	int p;
	int dummy[n];
	for (i=0;i<n;i++){
		
		p=i+d;
		
		while (p>=n){
			p=p-n;
		}
		
		dummy[p]=ar[i];			
				
	}	

	for(i=0;i<n;i++){
		ar[i]=dummy[i];

	}


}





int main(){

	int n;
	int d;		
	int j;
	int ar[n];

	cin >> n;
	cin >> d;
	
	for(j=0;j<n;j++){
		cin >> ar[j];
	}

	rotate(ar,d,n);

	
	
	for(j=0;j<n;j++){

		cout << ar[j];
	}

	cout << "\n";
	return 0;
}
