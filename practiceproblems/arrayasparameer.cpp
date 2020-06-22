// function returning an array 
int * fun(int n)
{
    int *p;
    p = (int *)malloc(n*sizeof(int));
    return(p); 
}

int main()
{
    int *A;
    A = fun(5); 
}






/* 
#include <iostream>
using namespace std;
// int A[] pointer to an array 
// arrays can be only passed by address, not value there fore pointer to an array is used 
// *A is integer pointer

void fun(int A[], int n)
{
 /*   // int i;
    for(int i=0; i<n; i++)
        cout << A[i] << endl;

  A[0] = 25; 

}

int main()
{
    int A[5] = {2,4,6,8,10};
    fun(A,5); 
}

*/ 