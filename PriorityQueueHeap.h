#ifndef PRIORITYQUEUEHEAP_H
#define PRIORITYQUEUEHEAP_H
#include "PriorityQueueADT.h"
#include <vector>
using namespace std;
class PriorityQueueHeap : public PriorityQueueADT{

private:
	vector<int> _arr;


public:
	PriorityQueueHeap();
	~PriorityQueueHeap();
	bool empty();
	int size();
	int top();
	void push(int);
	void pop();
};
#endif