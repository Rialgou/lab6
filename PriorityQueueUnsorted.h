#ifndef PRIORITYQUEUEUNSORTED_H
#define PRIORITYQUEUEUNSORTED_H
#include "PriorityQueueADT.h"
#include <vector>

using namespace std;
class PriorityQueueUnsorted : public PriorityQueueADT{

private:
	vector<int> _arr;
public:
	PriorityQueueUnsorted();
	~PriorityQueueUnsorted();
	bool empty();
	int size();
	int top();
	void push(int n);
	void pop();
	
};
#endif