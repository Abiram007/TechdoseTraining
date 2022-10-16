//This program has both recursive and iterative method for reversing a Linked list
#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node* next;
};

struct LinkedList {
	Node* head;
	LinkedList() { head = NULL; }
	void reverse()
	{

		Node* current = head;
		Node *prev = NULL, *next = NULL;

		while (current != NULL) {
		
			next = current->next;

			current->next = prev;

			prev = current;
			current = next;
		}
		head = prev;
	}

    Node* reverse_recursion(Node* head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        Node* rest = reverse_recursion(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
    }

	void print()
	{
		struct Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data)
	{
		Node* temp = new Node;
        temp->data = data;
		temp->next = head;
		head = temp;
	}
};

int main()
{
	LinkedList ll;
	ll.push(20);
	ll.push(4);
	ll.push(15);
	ll.push(85);

	cout << "Given linked list\n";
	ll.print();
	cout << "\nReversed linked list (ITERATIVE)\n";
    ll.reverse();
	ll.print();
    cout << "\nReversed linked list (Recursively)\n";
    ll.head = ll.reverse_recursion(ll.head);
    ll.print();
	return 0;
}
