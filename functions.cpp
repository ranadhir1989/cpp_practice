#include <iostream>
#include <vector> 
using namespace std; 

int AdditionFunction(int i, int j)
{
    return i+j; 
}

int main()
{
    auto d = 3;
    auto f = 7; 
    cout << AdditionFunction(d,f) << "\n";
}