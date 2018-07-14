//
// Created by Adair on 2018/7/14.
//
#include "Lesson3.h"
#include "iostream"
#include "stddef.h"

void lesson3(){
    using namespace std;
    printf("I love C\n");
    cout<<"I love CPP"<<endl;

    char str1[1000];
    cout<<"enter the string you wanna cin"<<endl;
    cin>>str1;
    cout<<"str1 after cin:"<<str1<<endl;

    printf("enter the string you wanna scanf");
    scanf("%s",str1);
    printf("str1 after scanf:%s",str1);
    cin.get();

    cout<<"enter the string you wanna getling"<<endl;
    cin.getline(str1,(ptrdiff_t)100,'\n');
    cout<<"str1 after cin:"<<str1<<endl;

}


