#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <ctime>
#include <vector>
#include <stdlib.h>       //srand
#include <time.h>     //time

using namespace std;

int nMax1, nMax2, nMax3 = 0;


void ex_sort(int * arr){
    int n = sizeof(arr) - 1; //-1 안하면 null값까지 들어가서 안됨

    for(int i = 0; i < n; i ++ ){
        for(int j = 0; j < n; j++){
            int tmp = arr[i];
            if(arr[i] < arr[j]){
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++){
      printf("%d \n", arr[i]);
    }
}



void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int * arr, int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        merge_sort(arr, l, m);
        merge_sort(arr, m+1, r);

        merge(arr, l, m, r);
    }


}
void printArray(int * arr)
{
    int n = sizeof(arr) - 1;
    for(int i = 0; i < n; i++){
      printf("%d \n", arr[i]);
    }
}



int main(void){

    cin >> nMax1 >> nMax2 >> nMax3;


    int arr[] = {100, 23, 31, 123, 435, 642, 1};

    // ex_sort(arr);
    //
    // merge_sort(arr, 0, 6);
    // printArray(arr);

    sort(arr, arr + 7);
    printArray(arr);


    return 0;
}
