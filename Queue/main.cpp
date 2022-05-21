#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    queue q;
    q.Enqueue(3);
    q.Enqueue(66);
    q.Enqueue(999);
   // cout << q.First() << endl;
    q.Display();
    cout << endl;
    q.Dequeue();
    q.Display();

    return 0;
}
