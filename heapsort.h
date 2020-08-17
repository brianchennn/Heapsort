#ifndef HEAPSORT
#define HEAPSORT
#include<iostream>
#include<vector>
using namespace std;
class Heapsort{
public:
    //template<typename T>
    Heapsort(vector<double> A, int s);
    //template<typename T>
    void Build_max_heap();
    //template<typename T>
    void Heapify(int i);
    int size;
    vector<double> AA;
    void Print();
};
#endif