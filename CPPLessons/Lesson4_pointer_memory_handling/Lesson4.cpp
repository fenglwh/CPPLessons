//
// Created by Adair on 2018/7/15.
//

#include "Lesson4.h"
#include "iostream"

// this is the fucntion which parameter should be int,int and the return value should be int as well.
int intMax(int a, int b)
{
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

void lesson4(){
    using namespace std;
    // int pointer initialize
    int * a;
    int b= 2;
    a=&b;
    b=3;
    cout<<*a<<endl;

    // char pointer and char array
    int * pa;
    int c[50];
    pa=c;
    pa[2]=50;
    pa[3]=54;
    cout<<*(pa+3)<<endl;

    // pointer to pointer
    int **ppa;
    ppa=&pa;
    cout<<*(*ppa+3)<<endl;

    // const pointer and pointer to const variable
    const int*  cpi; // can not change value through this pointer
    int const * pic; // can nnot change this pointer address.

    // pointer is an address point to an address
    // the destination address must be valid
    // through the pointer, function can modify the variables
    // to access the var defined in function, then, should have a container which used to contain the variable.

    // pointer to function
    // this is usually used to dynamic loading
    int (*fp)(int,int);
    fp=intMax;
    cout<<fp(3,4)<<endl;

    // memory handling in heap
    int * heapPointer;
    heapPointer=new int();
    *heapPointer=5;
    cout<<*heapPointer<<endl;
    delete heapPointer;
    // delete (void*)heapPointer;
    // this pointer is alway used to auto recycle memory in class.




}
