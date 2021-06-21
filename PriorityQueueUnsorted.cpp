#include "PriorityQueueUnsorted.h"
#include <bits/stdc++.h>
using namespace std;

PriorityQueueUnsorted::PriorityQueueUnsorted(){

}
PriorityQueueUnsorted::~PriorityQueueUnsorted(){

}
bool PriorityQueueUnsorted::empty(){
	return _arr.empty();
}
int PriorityQueueUnsorted::size(){
	return _arr.size();
}
int PriorityQueueUnsorted::top(){
	int min = INT_MAX;
	if(!empty()){
		for(int i=0,i<_arr.size();i++){
			if(_arr[i]<min)min=_arr[i];
		}
		return min;
	}
	else return min;

}
void PriorityQueueUnsorted::push(int n){
	_arr.push_back(n);
}
void PriorityQueueUnsorted::pop(){
	int min= INT_MAX;
	int posMin;
	if(!empty()){
		for(int i=0;_arr.size();i++){
			if(_arr[i]<min){
				min= _arr[i];
				posMin= i;
			}
		}
		_arr.erase(_arr.begin()+posMin);
	}
}