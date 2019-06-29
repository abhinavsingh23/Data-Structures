#include <bits/stdc++.h> 
using namespace std;
#include <iostream>
#include<stdio.h>

struct Node{
	int data;
	Node* next;
};

struct Node*head;		//global

void Insert(int data){
	Node*temp = new Node();
	temp->data = data;
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

void Delete(int n){

	
	Node* temp1=head;
	if(n==1){

		head=temp1->next;
		free(temp1);
		return;

	}	
	int i;
	for(i=0;i<n-2;i++){
		temp1=temp1->next;	
	}
	Node* temp2;
	temp2=temp1->next;
	temp1->next=temp2->next;
	free(temp2);
	
	
}



int main(){

	head = NULL;

	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();
	int n;
	cin >> n;

	Delete(n);
	Print();



	return 0;

}
