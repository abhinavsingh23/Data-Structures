#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include<stdio.h>

int main(){

	int i,T;
	cin >> T;
	while(T--){

		int N,S;
		cin >> N >> S;
		int Arr[N];
		for(i=0;i<N;i++){
			cin >> Arr[i];
		}
		
		int start=0;
		int sum = 0;

		for(i=0;i<N;i++){
		
			if(Arr[i]==S){
				cout << i <<"\n";
				break;

			}			
			if(sum==S){
				cout << start+1 <<" "<< i-1+1 << "\n" ;
				break;
					
			}
			if(sum<S){
				sum=sum+Arr[i];
			}
			if(sum>S){
				while(sum>S){
			
					sum=sum-Arr[start];
					start++;
					if(i==N-1){
						if(sum==S){
							cout << start+1 << i+1 << "\n";
							break;						
						}
					}

				}
			}

		}
		if(sum!=S){cout << "-1 \n";} 
		
		

	}	



	return 0;
}
