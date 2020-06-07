#include <iostream>
#include <vector> 
using namespace std; 

int AdditionFunction(const vector<int> &v)
{
    int sum = 0; 
    for (const int &i : v)
        sum += i;
    return sum; 
}

int main()
{
    vector<int> v {1,2,3};
    cout << AdditionFunction(v) << "\n"; 
}