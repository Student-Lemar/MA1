// This code was taken from https://www.techiedelight.com/queue-implementation-cpp/
// The code has been modified from the original to provide opportunities to learn
#include <iostream>
#include <cstdlib>
using namespace std;
// define default capacity of the queue
#define SIZE 10
// Class for queue
class Queue{
int* arr; // array to store queue elements
int capacity; // maximum capacity of the queue
int front; // front points to front element in the queue (if any)
int rear; // rear points to last element in the queue
int count; // current size of the queue
public:
void queue(int size = SIZE); // constructor
~Queue(); // destructor
void dequeue();
void enqueue(int x);
int peek();
int size();
bool isEmpty();
bool isFull();
};
// Constructor to initialize queue
void Queue::queue(int size){
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}
// Destructor to free memory allocated to the queue
Queue::~Queue(){
    delete arr; // you are not required to test this function;
// however, are there issues with it?
}
// Utility function to remove front element from the queue
void Queue::dequeue(){
// check for queue underflow
    if (isEmpty()){
        cout << "UnderFlow\nProgram Terminated\n";
        return;
    }
    cout << "Removing " << arr[front] << '\n';
    front = (front + 1) % capacity;
    count--;
}
// Utility function to add an item to the queue
void Queue::enqueue(int item){
// check for queue overflow
    if (isFull()){
        cout << "OverFlow\nProgram Terminated\n";
        return;
    }
    cout << "Inserting " << item << '\n';
    rear = (rear + 1) % capacity;
    arr[rear] = size();
    count++;
}
// Utility function to return front element in the queue
int Queue::peek(){
    if (isEmpty()){
        cout << "UnderFlow\nProgram Terminated\n";
        return capacity;
    }
    return arr[rear];
}
// Utility function to return the size of the queue
int Queue::size(){
    return count + 1;
}
// Utility function to check if the queue is empty or not
bool Queue::isEmpty(){
    return (size() == 0);
}
// Utility function to check if the queue is full or not
bool Queue::isFull(){
    return (capacity = size() - 1);
}
// main function
int main(){
// call your test functions here!
    return 0;
}
