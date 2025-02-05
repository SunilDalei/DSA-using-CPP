// C++ Program to implement a queue using array
#include <iostream>
using namespace std;

// defining the max size of the queue
#define MAX_SIZE 100

class Queue
{
public:
    int front;
    int rear;
    int arr[MAX_SIZE];
    // initializing pointers in the constructor
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty() { return front == -1 || front > rear; }
    bool isFull() { return rear == MAX_SIZE - 1; }
    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        // if queue is empty, set front to 0
        if (isEmpty())
            front = 0;

        rear++;
        arr[rear] = val;
    }

    int dequeue()
    {
        // Check underflow condition
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[front];
        front++;
        // if queue becomes empty, reset both pointers
        if (isEmpty())
            front = rear = -1;

        return ans;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue:  ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Queue q;
    int n;
    cout << "Enter the number of elements you want to insert to the queue :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cout << "Enter the " << i << " element: " << endl;
        cin >> x;
        q.enqueue(x);
    }
    cout << "\nAfter Enqueueing:" << endl;
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;
    q.display();
    // Dequeueing elements
    cout << "\nDequeueing elements:" << endl;
    cout << "Dequeued element: " << q.dequeue() << endl;
    cout << "Dequeued element: " << q.dequeue() << endl;
    cout << "\nAfter Dequeueing:" << endl;
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;
    q.display();

    return 0;
}