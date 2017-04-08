#include <iostream>
#include <stdio.h>
#include <assert.h>
#include "quickSort.h"
using namespace std;
/**
 * 测试用例
 */

void testSwap(){
    int a = 12;
    int b = 99;
    swap(a,b);
    assert(a==99 && b==12);
}
//非法输入
void testQuickSort1(){
    quickSort(NULL,0);
    assert(invalidInput == true);
}

//测试边界
void testQuickSort2(){
    int a[] = {1};
    quickSort(a,1);
    assert(invalidInput == false);
    assert(a[0] == 1);
}

void testQuickSort3(){
    int a[] = {1,3,6,3,9,31,1,7};
    quickSort(a,8);
    assert(invalidInput == false);
    assert(a[0]==1);
    assert(a[1]==1);
    assert(a[2]==3);
    assert(a[3]==3);
    assert(a[4]==6);
    assert(a[5]==7);
    assert(a[6]==9);
    assert(a[7]==31);
}


int main(){
    testSwap();
    testQuickSort1();
    testQuickSort2();
    testQuickSort3();
}