#include<bits/stdc++.h>
using namespace std; 

int main(){

    string s= "Alim";
    string* ptr = &s;
    // Pointer stores the address of variable
    cout<<"ptr : "<< ptr<<endl;
    cout<<"*ptr : "<<*ptr<<endl;
    cout<<"&ptr : "<<&ptr<<endl;
    cout<<"&s : "<<&s<<endl;
    
    *ptr = "jafar";
    cout<<"modified ptr : "<<*ptr<<endl;

    string** doubPtr = &ptr;    
    cout<<"Making double pointer"<<**doubPtr<<endl;

    **doubPtr = "khan";
    cout<<"changing the name by doubPtr : "<<**doubPtr<<endl;


    
}