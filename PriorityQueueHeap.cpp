#include "PriorityQueueHeap.h"
#include <bits/stdc++.h>
using namespace std;

PriorityQueueHeap::PriorityQueueHeap(){
	_arr.push_back(-1);
	tam= 0;
}
PriorityQueueHeap::~PriorityQueueHeap(){
}
bool PriorityQueueHeap::empty(){
	return tam ==0;
}
int PriorityQueueHeap::size(){
	return tam;
}
int PriorityQueueHeap::top(){
	if(tam>0) return _arr[1];
	else return INT_MAX;
}
void PriorityQueueHeap::push(int n){
	_arr.push_back(n);
	tam++;
	upHeap(tam);
}
void PriorityQueueHeap::pop(){
	swap(_arr[1],_arr[tam]);
	_arr.erase(_arr.begin()+tam);
	tam--;
	downHeap(1);
}
void PriorityQueueHeap::upHeap(int i){
	if(i ==1) return;
	if(_arr[i]<_arr[parent(i)]){
		swap(_arr[i],_arr[parent(i)]);
	}
	upHeap(parent(i));
}
void PriorityQueueHeap::downHeap(int i){
	int aux=i;
	if(left(i)<=tam && _arr[i]>_arr[left(i)]){
		aux=left(i);
	}
	if(right(i)<=tam && _arr[aux]>_arr[right(i)]){
		aux=right(i);
	}
	if(aux!=i){
		swap(_arr[i],_arr[aux]);
		downHeap(aux);
	}
}
int PriorityQueueHeap::parent(int i){
	return i/2;
}
int PriorityQueueHeap::right(int i){
	return i*2+1;
}
int PriorityQueueHeap::left(int i){
	return i*2;
}