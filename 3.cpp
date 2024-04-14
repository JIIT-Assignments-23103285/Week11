#include <iostream>
using namespace std;

template<class T>
T add(T a, T b){
    return (a+b);
}

template<class T>
T sub(T a, T b){
    return (a-b);
}

template<class T>
T mult(T a, T b){
    return (a*b);
}

template<class T>
T divi(T a, T b){
    return (a/b);
}

int main(){
    int a=1, b=2;
    float c=1.1, d=2.2;
    cout<<"Addition of integers "<<add(a,b)<<endl
        <<"Subtraction of integers "<<sub(a,b)<<endl
        <<"Multiplication of integers "<<mult(a,b)<<endl
        <<"Division of integers "<<divi(a,b)<<endl
        <<"Addition of decimals "<<add(c,d)<<endl
        <<"Subtraction of decimals "<<sub(c,d)<<endl
        <<"Multiplication of decimals "<<mult(c,d)<<endl
        <<"Division of decimals "<<divi(c,d)<<endl;
    return 0;
}