#include <queue>
using namespace std;

class Queue {
private:
    queue<int> myQueue;

public:
    void enqueue(int element);
    int dequeue();
    int front() const;
    bool isEmpty() const;
    size_t size() const;
};


