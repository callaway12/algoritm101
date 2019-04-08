#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <ctime>
#include <vector>
#include <stdlib.h>       //srand
#include <time.h>     //time
#include <chrono>
using namespace std;
using namespace std::chrono;

const int dndnd = 3000000;

int nMax1, nMax2, nMax3 = 0;

int arr1_1[3000000], arr1_2[3000000], arr1_3[3000000];
int arr2_1[3000000], arr2_2[3000000], arr2_3[3000000];
int arr3_1[3000000], arr3_2[3000000], arr3_3[3000000];

float tmp_time[3][3] = {0};

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


void ran_num_input(int a, int b, int c){

  srand((unsigned int)time(NULL));
  for(int i = 0; i < a; i++){
    arr1_1[i] = rand()%a + 1;
    arr1_2[i] = rand()%a + 1;
    arr1_3[i] = rand()%a + 1;
  }
  srand((unsigned int)time(NULL));
  for(int i = 0; i < b; i++){
    arr2_1[i] = rand()%a + 1;
    arr2_2[i] = rand()%a + 1;
    arr2_3[i] = rand()%a + 1;
  }
  srand((unsigned int)time(NULL));
  for(int i = 0; i < c; i++){
    arr3_1[i] = rand()%a + 1;
    arr3_2[i] = rand()%a + 1;
    arr3_3[i] = rand()%a + 1;
  }

}




int main(void){

    cin >> nMax1 >> nMax2 >> nMax3;



    ran_num_input(nMax1, nMax2, nMax3);

    high_resolution_clock::time_point t11 = high_resolution_clock::now();
    ex_sort(arr1_1);
    high_resolution_clock::time_point t21 = high_resolution_clock::now();


    high_resolution_clock::time_point t12 = high_resolution_clock::now();
    merge_sort(arr1_2, 0, nMax1);
    high_resolution_clock::time_point t22 = high_resolution_clock::now();


    high_resolution_clock::time_point t13 = high_resolution_clock::now();
    sort(arr1_3, arr1_3 + nMax1);
    high_resolution_clock::time_point t23 = high_resolution_clock::now();


    tmp_time[0][0] = duration_cast<nanoseconds>(t21 - t11).count();
    tmp_time[0][1] = duration_cast<nanoseconds>(t22 - t12).count();
    tmp_time[0][2] = duration_cast<nanoseconds>(t23 - t13).count();



///////////////////////// ^ nMax1,///////// V nMax2///////



      high_resolution_clock::time_point t111 = high_resolution_clock::now();
      ex_sort(arr2_1);
      high_resolution_clock::time_point t211 = high_resolution_clock::now();


      high_resolution_clock::time_point t121 = high_resolution_clock::now();
      merge_sort(arr2_2, 0, nMax2);
      high_resolution_clock::time_point t221 = high_resolution_clock::now();


      high_resolution_clock::time_point t131 = high_resolution_clock::now();
      sort(arr2_3, arr2_3 + nMax2);
      high_resolution_clock::time_point t231 = high_resolution_clock::now();


      tmp_time[1][0] = duration_cast<nanoseconds>(t211 - t111).count();
      tmp_time[1][1] = duration_cast<nanoseconds>(t221 - t121).count();
      tmp_time[1][2] = duration_cast<nanoseconds>(t231 - t131).count();




  ///////////////////////// ^ nMax1,///////// V nMax2///////






        high_resolution_clock::time_point t112 = high_resolution_clock::now();
        ex_sort(arr3_1);
        high_resolution_clock::time_point t212 = high_resolution_clock::now();


        high_resolution_clock::time_point t122 = high_resolution_clock::now();
        merge_sort(arr3_2, 0, nMax3);
        high_resolution_clock::time_point t222 = high_resolution_clock::now();


        high_resolution_clock::time_point t132 = high_resolution_clock::now();
        sort(arr3_3, arr3_3 + nMax3);
        high_resolution_clock::time_point t232 = high_resolution_clock::now();


        tmp_time[2][0] = duration_cast<nanoseconds>(t212 - t112).count();
        tmp_time[2][1] = duration_cast<nanoseconds>(t222 - t122).count();
        tmp_time[2][2] = duration_cast<nanoseconds>(t232 - t132).count();



///////done...




    for(int i = 0; i <3; i++){
      for(int j = 0; j <3; j++){
        cout << tmp_time[i][j] << endl;
      }
    }


    return 0;
}
