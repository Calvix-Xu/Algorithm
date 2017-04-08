#include <iostream>
#include <vector>
using namespace std;
#include "quickSort.h"

void print(int a[], int length){
    for(int i=0; i<length;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, char *argv[]){
    vector<int> arr;
    int a;
    while(cin>>a){
        arr.push_back(a);
    }
    cout<<"before sort:";
    print(&arr[0], arr.size());
    quickSort(&arr[0], arr.size());
    cout<<"after quick sort:";
    if(!invalidInput){
        print(&arr[0], arr.size());
    }else{
        cout<<"排序出错！"<<endl;
    }
}