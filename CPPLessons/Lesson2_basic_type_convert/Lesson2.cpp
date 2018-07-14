//
// Created by Adair on 2018/7/14.
//

#include "Lesson2.h"
#include "iostream"

void lesson2() {
    using namespace std;
    short shortVar;
    int intVar;
    long longVar;
    long long longLongVar;
    char charVar;
    char str1[256];


    shortVar=2;
    intVar=shortVar;
    charVar=52;
    strcpy(str1,"12345");
    cout<<str1<<endl;
    strcat(str1,str1);
    cout<<str1<<endl;
    sprintf(str1,"%d",shortVar);
    cout<<str1<<endl;
    cout<<charVar<<endl;

}

