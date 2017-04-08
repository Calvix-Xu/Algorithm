#ifndef QUICKSORT
#define QUICKSORT

#include <stdio.h>
void swap(int&, int&);
void quickSort(int *arr, int start, int end);
int partition(int *arr, int start, int end);

bool invalidInput = false;
void quickSort(int *arr, int length){
    invalidInput = false;
    quickSort(arr, 0, length-1);
}

void quickSort(int *arr, int start, int end){
    if(arr == NULL || start < 0 || start > end){
        printf("%s\n", "数组非法");
        invalidInput = true;
        return;
    }
    int mid = partition(arr, start, end);
    if(start < mid && mid != -1){
        quickSort(arr, start, mid-1);
    }
    if(mid < end && mid != -1){
        quickSort(arr, mid+1, end);
    }
}

int partition(int *arr, int start, int end){
    if(arr == NULL || start < 0 || start > end){
        invalidInput = true;
        return -1;
    }
    if(start == end)
        return start;
    int index = rand()%(end-start+1) + start;
    swap(arr[end], arr[index]);
    int j = start-1;
    for(int i=start; i<end; i++){
        if(arr[i] < arr[end]){
            ++j;
            if(j >= start && arr[j] >= arr[end]){
                swap(arr[i], arr[j]);
            }
            continue;
        }
    }
    swap(arr[++j],arr[end]);
    return j;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

#endif