#include "queue.h"
#include <iostream>

using namespace std;

Queue::Queue()
{
    Front=0;
    rear=0;
}


void Queue::enqueue(int x)
{
    arr[rear]=x;
    rear++;
}


void Queue::dequeue()
{
    Front++;
}

int Queue::first()
{
    return arr[Front];
}


void Queue::display()
{
    int w=Front;
    while(w<rear)
        {
        cout << arr[w] << endl;
        w++;
    }
}
