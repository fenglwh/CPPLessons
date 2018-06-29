//
// Created by Adair on 2018/6/28.
//

#include "Lesson1.h"
#include "iostream"
#include "climits"

void lesson1(){
    using namespace std;
    int intVal;
    short shortVal;
    long longVal;
    long long longLongVal;
    char charVal;
    float floatVal;
    double doubleVal;

    unsigned int uintVal;
    unsigned short ushortVal;
    unsigned long ulongVal;
    unsigned long long ulongLongVal;
    unsigned char ucharVal;
    // unsigned float ufloatVal;
    // unsigned double udoubleVal;

    cout<< "Int used: " <<sizeof(intVal)<< " bytes" <<endl;     // 4
    cout<<  "short used: " <<sizeof(shortVal)<< " bytes"<<endl;   // 2
    cout<<  "long used: " <<sizeof(longVal)<< " bytes"<<endl;    // 8
    cout<<  "long long used: " <<sizeof(longLongVal)<< " bytes"<<endl;// 8
    cout<<  "char used: " <<sizeof(charVal)<< " bytes"<<endl;    // 1
    cout<<  "float used: " <<sizeof(floatVal)<< " bytes"<<endl;   // 4
    cout<<  "double used: " <<sizeof(doubleVal)<< " bytes"<<endl;  // 8

    cout<< "Int Max:"<<INT32_MAX<<endl;
    cout<< "Int Min:"<<INT32_MIN<<endl;
    cout<< "short Max:"<<INT16_MAX<<endl;
    cout<< "short Min:"<<INT16_MIN<<endl;
    cout<< "long Max:"<<INT64_MAX<<endl;
    cout<< "long Min:"<<INT64_MIN<<endl;
    cout<< "longLong Max:"<<INT64_MAX<<endl;
    cout<< "longLong Min:"<<INT64_MIN<<endl;
    cout<< "char Max:"<<CHAR_MAX<<endl;
    cout<< "char Min:"<<CHAR_MIN<<endl;
    cout<< "Unsigned Int Max:"<<UINT32_MAX<<endl;
    cout<< "Unsigned short Max:"<<UINT16_MAX<<endl;
    cout<< "Unsigned long Max:"<<UINT64_MAX<<endl;
    cout<< "Unsigned longLong Max:"<<UINT64_MAX<<endl;
    cout<< "Unsigned char Max:"<<UCHAR_MAX<<endl;
//    Int Max:2147483647
//    Int Min:-2147483648
//    short Max:32767
//    short Min:-32768
//    long Max:9223372036854775807
//    long Min:-9223372036854775808
//    longLong Max:9223372036854775807
//    longLong Min:-9223372036854775808
//    char Max:127
//    char Min:-128
//    Unsigned Int Max:4294967295
//    Unsigned short Max:65535
//    Unsigned long Max:18446744073709551615
//    Unsigned longLong Max:18446744073709551615
//    Unsigned char Max:255
}