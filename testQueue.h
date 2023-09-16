int main()
{
// call your test functions here!
        Queue x = new Queue();
  x.capacity = 2;
  x.enqueue(5);
  x.enqueue(6);
  printf(x.isFull());
  printf(x.isEmpty());
  printf(x.peek());
  x.dequeue();
  printf(x.peek());
  x.dequeue();
  printf(x.isFull());
  printf(x.isEmpty());
}
