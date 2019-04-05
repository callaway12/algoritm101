#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <ctime>


void ex_sort(int arr[]){
    int n = sizeof(arr);

    for(int i = 0; i < n; i ++ ){
        for(int j = 0; j < n; j++){
            int tmp = arr[i];
            if(arr[i] > arr[j]){
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

}




int main(void){

    int arr[] = {100, 23, 31, 123, 435, 642, 1};

    ex_sort(arr);
    int n = sizeof(arr);
    for(int i = 0; i < n; i++ ){
        printf("%d \n", arr[i]);
    }



    return 0;
}
