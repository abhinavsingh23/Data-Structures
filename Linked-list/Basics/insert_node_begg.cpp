#include <bits/stdc++.h> 
using namespace std;
#include <iostream>
#include<stdio.h>


struct Node{

	int data;
	Node* next;	
};

struct Node* head;    // header pointer


void Insert(int x){
	
	Node*temp = new Node();
	temp->data = x;
	temp->next = head;
	head=temp;
	
}

void Print(){
	
	Node* temp = head;
	cout << "List is: ";
	while (temp != NULL){
		cout << temp->data;
		temp=temp->next;
	}
	cout << endl;

} 

int main(){

	head = NULL; // empty
	int n;       //number of nodes
 	int x;		//variable to input data
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		Insert(x);
		Print();
	}			


	return 0;
}
