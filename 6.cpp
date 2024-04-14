#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;
    while (true){
        int l;
        cout<<"Enter element for v1: ";
        cin>>l;
        if(l>=0){
            v1.push_back(l);
        }
        else{
            break;
        }
    }
    while (true){
        int l;
        cout<<"Enter element for v2: ";
        cin>>l;
        if(l>=0){
            v2.push_back(l);
        }
        else{
            break;
        }
    }
    for(int i=0;i<v2.size();i++){
        int x=0;
        for(int j=0;j<v1.size();j++){
            if (v2[i]==v1[j]){
                x++;
                break;
            }
        }
        if(x==0){
            v1.push_back(v2[i]);
        }
    }
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v1.size()-i-1;j++){
            if(v1[j]>v1[j+1]){
                int temp=v1[j];
                v1[j]=v1[j+1];
                v1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }
    return 0;
}