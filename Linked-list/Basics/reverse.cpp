#include <bits/stdc++.h> 
using namespace std;
#include <iostream>
#include<stdio.h>

struct Node{
	int data;
	Node* next;
};

struct Node* head;

void Insert(int data){

	Node* temp = new Node();
	temp->data=data;
	temp->next=NULL;
	
	if(head==NULL){
		head=temp;
		return;	
	}	
	
	
	Node* temp2=head;

	while(temp2->next !=NULL){
		temp2=temp2->next;
	}
	
	temp2->next=temp;
	
	temp->data=data;
	temp->next=NULL;


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

struct Node* Reverse(struct Node* head){
	
	Node* current = head;
	Node* prev = NULL;
	Node* next;
	while(current !=NULL){
		next=current->next;		
		current->next=prev;
		prev=current;
		current = next;
	}
	
	
	head = prev;
	
	
			
	

}

int main(){

	head= NULL;
	Insert(2);
	Insert(3);
	Insert(4);
	Insert(5);
	Insert(6);
	Insert(7);
	
	Print();


	head=Reverse(head);
	
	Print();
	
	

	return 0;


}
