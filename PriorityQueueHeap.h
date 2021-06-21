#ifndef PRIORITYQUEUEHEAP_H
#define PRIORITYQUEUEHEAP_H
#include "PriorityQueueADT.h"
#include <vector>
using namespace std;
class PriorityQueueHeap : public PriorityQueueADT{

private:
	vector<int> _arr;
	int tam;
	int right(int i);
	int left(int i);
	int parent(int i);

public:
	PriorityQueueHeap();
	~PriorityQueueHeap();
	bool empty();
	int size();
	int top();
	void push(int n);
	void pop();
	void upHeap(int n);
	void downHeap(int n);
};
#endif