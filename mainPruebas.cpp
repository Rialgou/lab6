#include <bits/stdc++.h>
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

void SelectionSort(vector<int> &vec){
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
	vector <int> _arr1;
	vector <int> _arr2;
	double timePQH;
	double timePQU;
	srand(time(NULL));
	int rep= 100;
	int n;
	cout<<"ingrese la cantidad de numeros: ";
	cin>>n;
	for(int i=0;i<n;i++){
		_arr1.push_back(i+1);
	}
	for(int i=0;i<n;i++){
		_arr2.push_back(i+1);
	}
	for (int i = 0; i < rep; ++i)
	{
		random_shuffle (_arr1.begin(),_arr1.end() );
		//cout<<_arr1[4]<<endl;
		clock_t start = clock();
		HeapSort(_arr1);
		clock_t end = clock();
		timePQH+= (double)(end-start)/CLOCKS_PER_SEC;
		random_shuffle (_arr2.begin(),_arr2.end() );
		clock_t start2 = clock();
		SelectionSort(_arr2);
		clock_t end2 = clock();
		timePQU+= (double)(end2-start2)/CLOCKS_PER_SEC;
	}
	printf("Tiempo HeapSort: %.10f\n\n",timePQH/(double)rep );
	printf("Tiempo SelectionSort : %.10f\n\n",timePQU/(double)rep );
	return 0;
}