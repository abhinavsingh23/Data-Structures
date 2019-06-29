#include <bits/stdc++.h> 
using namespace std;
#include <iostream>
#include<stdio.h>

struct Node{

	int data;
	Node* link;

};

int main(){

	Node* A;
	A=NULL;  //empty list

	Node*temp = new Node(); 
	
	temp->data = 2;
	temp->link = NULL;

	A=temp;	
	
	temp = new Node();
	
	temp->data = 4;
	temp->link = NULL;

	Node* temp1 = A;
	while(temp1->link!=NULL){
		temp1=temp1->link;
	}
	temp1->link = temp;
	



	


	return 0;	

}


