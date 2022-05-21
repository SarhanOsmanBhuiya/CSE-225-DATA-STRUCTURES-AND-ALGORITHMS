#include <iostream>
#include "queue.h"
#include "queue.cpp"

using namespace std;

int main()
{
    Queue q;
    q.enqueue(28);
    q.enqueue(28);
    q.enqueue(28);
    q.diaplay();


    cout << endl;
    q.dequeue();
    q.diaplay();



    return 0;
}
