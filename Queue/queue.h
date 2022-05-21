class queue{
  public:
      queue();
      void Enqueue(int x);
      void Dequeue();
      int First();
      void Display();
  private:
      int frnt;
      int rear;
      int arr[5];
};
