#include <iostream>
using namespace std;
//Node class
class Node {
public:
	int data;
	Node* next;
	Node(int value) {
		data = value;
		next = nullptr;
	}
};
//Circular Linked List
class CircularLinkedList {
public:
	Node* head;
	CircularLinkedList() {
		head = nullptr;
	}

	//Insert Function

	void Insert(int value) {
		Node* newNode = new Node(value);

		if (head == nullptr) {
			head = newNode;
			newNode->next = head;
			return;
		}
		Node* temp = head;
		while (temp->next != head) {
			temp = temp->next;
		}

		temp->next = newNode;
		newNode->next = head;
	}

	//display function
	void display() {
		if (head == nullptr) {
			cout << "The list is empty " << endl;
			return;

		}

		Node* temp = head;
		cout << "Circular linked list: " << endl;
		do {
			cout << temp->data << " ->";
			temp = temp->next;
		} while (temp != head);
			cout << "Back to head: " << head->data << endl;
	}

};
int main(){
	CircularLinkedList C1;
	cout << "Circular Linked List" << endl;

	C1.Insert(63);
	C1.Insert(67);
	C1.Insert(71);
	C1.Insert(63);
	C1.display();

	return 0;
}