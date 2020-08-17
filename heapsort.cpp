#include"heapsort.h"
#include<iostream>
using namespace std;

//template<typename T>
Heapsort::Heapsort(vector<double> A, int s){
    for(int i = 0; i<A.size(); i++){ 
        AA.push_back(A[i]);
    }
    size = s;
    Build_max_heap();
    for(int i=AA.size()-1; i>=1; i--){
        double tmp = AA[0];
        AA[0] = AA[i];
        AA[i] = tmp;
        size--;
        Heapify(0);
    }
    
}

//template<typename T>
void Heapsort::Build_max_heap(){
    size = AA.size();
    for(int i = AA.size()/2; i>=0; i--){
        Heapify(i);
    }
}
//template<typename T>
void Heapsort::Heapify(int i){

    int l = i*2+1;
    int r = i*2+2;
    int largest ;
    if(l <= size-1 && AA[l] > AA[i]){
        largest = l;
    }else{
        largest = i;
    }
    if(r <= size-1 && AA[r] > AA[largest]){
        largest = r;
    }
    if(largest != i){
        double tmp = AA[i];
        AA[i] = AA[largest];
        AA[largest] = tmp;
        Heapify(largest);
    }

}

void Heapsort::Print(){
    for(int i=0;i<AA.size();i++){
        cout<<AA[i]<<" ";
    }
    cout<<endl;
}
