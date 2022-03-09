#include <iostream>
using namespace std;

class CircularArrayLinkedList
{
    // Initialize front and rear
    int rear, front;

    // Circular Queue
    int size;
    int *arr;

    CircularArrayLinkedList(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[s];
    }

    void push(int value);
    int deletion();
    void show();
};


/* Function to create Circular queue */
