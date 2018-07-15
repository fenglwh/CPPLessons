//
// Created by Adair on 2018/7/15.
//
#include "string"    // this is the string part
#include "string.h"  // this is the old string function
#include "iostream"

void lesson5(){
    using namespace std;
    // C type string
    char a[256]="I like CPP";
    cout<<a<<endl;
    strcpy(a,"I love python");
    cout<<a<<endl;
    strcat(a," this is funny");
    cout<<a<<endl;
    cout<<"length of a is: "<<strlen(a)<<endl;
    cout<<strcmp(a,"I love python this is funny")<<endl;
    cout<<strcmp(a,"I love python this is funny")<<endl;

    // CPP type string
    string str1=a;
    cout<<"the str1 is: "<<str1<<endl;



    // CPP type string method


    // CString type


    // Windows string type and comment

}