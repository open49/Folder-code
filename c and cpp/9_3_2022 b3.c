void Enqueue(char queue[], char element, int& rear, int arraySize) {
    if(rear == arraySize)
        printf("OverFlow\n");
    else {
        queue[rear] = element;
        rear++;
    }
}


void Dequeue(char queue[], int& front, int rear) {
    if(front == rear)
        printf("UnderFlow\n");
    else {
        queue[front] = 0;
        front++;
    }
}

char Front(char queue[], int front) {
    return queue[front];
}
