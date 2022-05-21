#ifndef QUEUE_H
#define QUEUE_H



class Queue
{
    public:
        void enqueue(int);
        void dequeue();
        void display();
        int first();


    private:
        int Front();
        int rear();
        int arr[5];
};
#endif // QUEUE_H
