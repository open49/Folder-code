#include<stdlib.h>
#include<iostream>

using namespace std;


struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void Print () {
    struct Node* temp = head;

    while (temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    }

    cout<<endl;
}

// The meat of the program
void Insert (int data, int position) {
    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    struct Node* previousNode = head;
    for (int i = 0; i < position - 2; i++) {
        previousNode = previousNode->next;
    }

    newNode->next = previousNode->next;
    previousNode->next = newNode;
}

int main () {
    int p,x  ;
    cout<<"nhap gia tri cua x \n";
    cin>>x;
    cout<<"nhap vi tri can chen \n ";
    cin>>p;
    head = NULL;
    Insert (2, 1);
    Insert (0, 2);
    Insert (0, 3);
    Insert (2, 4);
    Insert (1, 5);
    Insert (5, 6);
    Insert (9, 7);
    Insert (4, 8);
    Insert (x, p);

    Print ();
}
