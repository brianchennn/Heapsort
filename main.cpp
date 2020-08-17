#include"heapsort.h"
#include<iostream>
#include<fstream>
#include<vector>
int main()
{
    ifstream f;
    f.open("input.txt",ios::in);
    if(!f.is_open())cout<<"can't open input file.\n";
    while(f.eof() != 1){
        int size;
        f >> size;
        if(size==0)break;

        vector<double> A;
        for(int i=0; i<size; i++){  
            double tmp;
            f >> tmp;
            A.push_back(tmp);
        }
        Heapsort H(A,size);
        H.Print();
    }
}