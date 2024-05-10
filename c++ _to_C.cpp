// function.cpp

#include<iostream>
#include<vector>
#include "function.h"
using namespace std;
int fun(int x, int y, int z)
{
    cout << x << "" <<y<< "" <<z<<endl;
    vector<int> v;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    return x*x;
}