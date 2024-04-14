#include <iostream>
using namespace std;

template<class T>
T Max(T a, T b){
    return (a>b)?a:b;
}

template<class T>
T Min(T a, T b){
    return (a<b)?a:b;
}

int main(){
    int a=1, b=2;
    float c=1.1, d=2.2;
    cout<<"Maximum of 2 integers "<<Max(a,b)<<endl
        <<"Minimum of 2 integers "<<Min(a,b)<<endl
        <<"Maximum of 2 decimals "<<Max(c,d)<<endl
        <<"Minimum of 2 decimals "<<Min(c,d)<<endl;
    return 0;
}