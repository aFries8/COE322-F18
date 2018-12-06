#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;

struct node {
	int val;
	node* next;
};

int main() 
{
	node* head;
	node* second;
	node* third;
		
	head = (node*)malloc(sizeof(node));
	// allocated 3 nodes in the heap
	second = (node*)malloc(sizeof(node));
	third = (node*)malloc(sizeof(node));
	
	head->val = 1;
//val is an integer so it must be set to an integer and next is a node pointed so it must be set to a node pointer
	head->next = second;
	
	second->val = 2;
	second->next = third;
	
	third->val = 3;
	third->next = NULL;
	
	node* cur;

	cur = head;
//	cout << head->val << endl;

//	cur = cur->next;
	
	while(cur != NULL)
	{
		cout << cur->val << endl;
		cur = cur->next;
	}
}
