#include<stdlib.h>
#include<stdio.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void Print () {
    struct Node* temp = head;

    while (temp != NULL){
        printf ("%d", temp->data);
        temp = temp->next;
    }

    printf("\n");
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
    printf( "nhap gia tri cua x \n");
    scanf ( "%d",&x );
    printf("nhap vi tri can chen \n ") ;
    scanf ("%d",&p) ;
    head = NULL;
    Insert (2, 1);
    Insert (0, 2);
    Insert (0, 3);
    Insert (2, 4);
    Insert (1, 5);
    Insert (5, 6);
    Insert (0, 7);
    Insert (0, 8);
    Insert (x, p);

    Print ();
}
