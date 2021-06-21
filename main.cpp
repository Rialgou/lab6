#include <vector>
#include <iostream>
#include "PriorityQueueHeap.h"
#include "PriorityQueueUnsorted.h"

using namespace std;

void HeapSort(vector<int> &vec){
	PriorityQueueHeap *pqh = new PriorityQueueHeap();
	int tam = vec.size();
	for(int i=0;i<tam;i++){
		pqh->push(vec.back());
		vec.pop_back();
	}
	for(int i=0;i<tam;i++){
		vec.push_back(pqh->top());
		pqh->pop();
	}
}

void SelectionSort(vector<int> vec){
	PriorityQueueUnsorted *pqu = new PriorityQueueUnsorted();
	int tam = vec.size();
	for(int i=0;i<tam;i++){
		pqu->push(vec.back());
		vec.pop_back();
	}
	for(int i=0;i<tam;i++){
		vec.push_back(pqu->top());
		pqu->pop();
	}
}

int main(){
	vector <int> v1 ={5,4,3,2,6};
	vector <int> v2 ={5,4,3,2,6};
	HeapSort(v1);
	cout<<"el ordenamiento HeapSort queda: "<<endl;
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	SelectionSort(v2);
	cout<<"el ordenamiento SelectionSort queda: "<<endl;
	for(int i=0;i<v2.size();i++){
		cout<<v2[i]<<" ";
	}
	cout<<endl;
	return 0;
}