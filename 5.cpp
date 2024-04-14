#include <iostream>
using namespace std;

template <class T>
class MyVector{
    int s;
    T* arr;
    public:
    MyVector(){
        s=0;
        arr=new T[0];
    }
    void push_back(T l){
        T* temp=new T[s+1];
        for(int i=0;i<s;i++){
            temp[i]=arr[i];
        }
        temp[s]=l;
        s++;
        arr=temp;
        delete[] temp;
    }
    void pop_back(){
        T* temp=new T[s-1];
        for(int i=0;i<s-1;i++){
            temp[i]=arr[i];
        }
        s--;
        arr=temp;
        delete[] temp;
    }
    int size(){
        return s;
    }
};

int main(){
    MyVector<int> v;
    v.push_back(1);
    v.push_back(2);
    cout<<v.size();
    v.pop_back();
    cout<<v.size();
    return 0;
}