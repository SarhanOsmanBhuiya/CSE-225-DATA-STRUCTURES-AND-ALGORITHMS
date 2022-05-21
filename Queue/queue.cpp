#include "queue.h"
#include <iostream>

using namespace std;

queue::queue()
{
    frnt = 0;
    rear = 0;
}

void queue::Enqueue(int x)
{
    arr[rear] = x;
    rear++;
}

void queue::Dequeue()
{
    frnt++;
}

int queue::First()
{
    return arr[frnt];
}

void queue::Display()
{
    int itr = frnt;
    while( itr < rear)
    {
        cout << arr[itr] << endl;
        itr++;
    }
}
