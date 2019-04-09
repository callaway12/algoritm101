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
int brr1_1[3000000], brr1_2[3000000], brr1_3[3000000];
int brr2_1[3000000], brr2_2[3000000], brr2_3[3000000];
int brr3_1[3000000], brr3_2[3000000], brr3_3[3000000];

float tmp_time[3][3] = {0};

void ex_sort(int * arr, int n){
    // int n = sizeof(arr) - 1; //-1 안하면 null값까지 들어가서 안됨

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
    arr1_1[i] = rand() + 1;
    arr1_2[i] = rand() + 1;
    arr1_3[i] = rand() + 1;
  }
  srand((unsigned int)time(NULL));
  for(int i = 0; i < b; i++){
    arr2_1[i] = rand() + 1;
    arr2_2[i] = rand() + 1;
    arr2_3[i] = rand() + 1;
  }
  srand((unsigned int)time(NULL));
  for(int i = 0; i < c; i++){
    arr3_1[i] = rand() + 1;
    arr3_2[i] = rand() + 1;
    arr3_3[i] = rand() + 1;
  }
  for(int i = 0; i < a; i++){
    brr1_1[i] = arr1_1[i];
    brr1_2[i] = arr1_2[i];
    brr1_3[i] = arr1_3[i];
  }
  for(int i = 0; i < b; i++){
    brr2_1[i] = arr2_1[i];
    brr2_2[i] = arr2_2[i];
    brr2_3[i] = arr2_3[i];
  }
  for(int i = 0; i < c; i++){
    brr3_1[i] = arr3_1[i];
    brr3_2[i] = arr3_2[i];
    brr3_3[i] = arr3_3[i];
  }

}




int main(void){

    cin >> nMax1 >> nMax2 >> nMax3;

float out_time [3][6] ={0};

    ran_num_input(nMax1, nMax2, nMax3);

    high_resolution_clock::time_point t11 = high_resolution_clock::now();
    merge_sort(arr1_1, 0, nMax1);
    high_resolution_clock::time_point t21 = high_resolution_clock::now();


    high_resolution_clock::time_point t12 = high_resolution_clock::now();
    merge_sort(arr1_2, 0, nMax1);
    high_resolution_clock::time_point t22 = high_resolution_clock::now();


    high_resolution_clock::time_point t13 = high_resolution_clock::now();
    merge_sort(arr1_3, 0, nMax1);
    high_resolution_clock::time_point t23 = high_resolution_clock::now();


    tmp_time[0][0] = duration_cast<microseconds>(t21 - t11).count();
    tmp_time[0][1] = duration_cast<microseconds>(t22 - t12).count();
    tmp_time[0][2] = duration_cast<microseconds>(t23 - t13).count();

    out_time[0][0] = tmp_time[0][0];
    out_time[0][1] = tmp_time[0][1];
    out_time[0][2] = tmp_time[0][2];

/////위에가 10000

    high_resolution_clock::time_point t111 = high_resolution_clock::now();
    merge_sort(arr2_1, 0, nMax2);
    high_resolution_clock::time_point t211 = high_resolution_clock::now();


    high_resolution_clock::time_point t121 = high_resolution_clock::now();
    merge_sort(arr2_2, 0, nMax2);
    high_resolution_clock::time_point t221 = high_resolution_clock::now();


    high_resolution_clock::time_point t131 = high_resolution_clock::now();
    merge_sort(arr2_3, 0, nMax2);
    high_resolution_clock::time_point t231 = high_resolution_clock::now();


    tmp_time[0][0] = duration_cast<microseconds>(t211 - t111).count();
    tmp_time[0][1] = duration_cast<microseconds>(t221 - t121).count();
    tmp_time[0][2] = duration_cast<microseconds>(t231 - t131).count();

    out_time[1][0] = tmp_time[0][0];
    out_time[1][1] = tmp_time[0][1];
    out_time[1][2] = tmp_time[0][2];

    /////20000

    high_resolution_clock::time_point t112 = high_resolution_clock::now();
    merge_sort(arr3_1, 0, nMax1);
    high_resolution_clock::time_point t212 = high_resolution_clock::now();


    high_resolution_clock::time_point t122 = high_resolution_clock::now();
    merge_sort(arr3_2, 0, nMax1);
    high_resolution_clock::time_point t222 = high_resolution_clock::now();


    high_resolution_clock::time_point t132 = high_resolution_clock::now();
    merge_sort(arr3_3, 0, nMax1);
    high_resolution_clock::time_point t232 = high_resolution_clock::now();


    tmp_time[0][0] = duration_cast<microseconds>(t212 - t112).count();
    tmp_time[0][1] = duration_cast<microseconds>(t222 - t122).count();
    tmp_time[0][2] = duration_cast<microseconds>(t232 - t132).count();

    out_time[2][0] = tmp_time[0][0];
    out_time[2][1] = tmp_time[0][1];
    out_time[2][2] = tmp_time[0][2];


//30000 merge done
///////////////////////// ^ nMax1,///////// V nMax2///////
high_resolution_clock::time_point t113 = high_resolution_clock::now();
sort(brr1_1, brr1_1 + nMax1);
high_resolution_clock::time_point t213 = high_resolution_clock::now();


high_resolution_clock::time_point t123 = high_resolution_clock::now();
sort(brr1_2, brr1_2 + nMax1);
high_resolution_clock::time_point t223 = high_resolution_clock::now();


high_resolution_clock::time_point t133 = high_resolution_clock::now();
sort(brr1_3, brr1_3 + nMax1);
high_resolution_clock::time_point t233 = high_resolution_clock::now();


tmp_time[0][0] = duration_cast<microseconds>(t213 - t113).count();
tmp_time[0][1] = duration_cast<microseconds>(t223 - t123).count();
tmp_time[0][2] = duration_cast<microseconds>(t233 - t133).count();

out_time[0][3] = tmp_time[0][0];
out_time[0][4] = tmp_time[0][1];
out_time[0][5] = tmp_time[0][2];

/////위에가 10000

high_resolution_clock::time_point t114 = high_resolution_clock::now();
sort(brr2_1, brr2_1 + nMax2);
high_resolution_clock::time_point t214 = high_resolution_clock::now();


high_resolution_clock::time_point t124 = high_resolution_clock::now();
sort(brr2_2, brr2_2 + nMax2);
high_resolution_clock::time_point t224 = high_resolution_clock::now();


high_resolution_clock::time_point t134 = high_resolution_clock::now();
sort(brr2_3, brr2_3 + nMax2);
high_resolution_clock::time_point t234 = high_resolution_clock::now();


tmp_time[0][0] = duration_cast<microseconds>(t214 - t114).count();
tmp_time[0][1] = duration_cast<microseconds>(t224 - t124).count();
tmp_time[0][2] = duration_cast<microseconds>(t234 - t134).count();

out_time[1][3] = tmp_time[0][0];
out_time[1][4] = tmp_time[0][1];
out_time[1][5] = tmp_time[0][2];


/////20000

high_resolution_clock::time_point t115 = high_resolution_clock::now();
sort(brr3_1, brr3_1 + nMax3);
high_resolution_clock::time_point t215 = high_resolution_clock::now();


high_resolution_clock::time_point t125 = high_resolution_clock::now();
sort(brr3_2, brr3_2 + nMax3);
high_resolution_clock::time_point t225 = high_resolution_clock::now();


high_resolution_clock::time_point t135 = high_resolution_clock::now();
sort(brr3_3, brr3_3 + nMax3);
high_resolution_clock::time_point t235 = high_resolution_clock::now();


tmp_time[0][0] = duration_cast<microseconds>(t215 - t115).count();
tmp_time[0][1] = duration_cast<microseconds>(t225 - t125).count();
tmp_time[0][2] = duration_cast<microseconds>(t235 - t135).count();

out_time[2][3] = tmp_time[0][0];
out_time[2][4] = tmp_time[0][1];
out_time[2][5] = tmp_time[0][2];


//30000 quick done



///////done...



    //
    // for(int i = 0; i <3; i++){
    //   for(int j = 0; j <6; j++){
    //     cout << out_time[i][j] << endl;
    //   }
    // }
    //


float aver[2][3] = {0};

aver[0][0] = out_time[0][0] + out_time[1][0] + out_time[2][0];
aver[0][1] = out_time[0][1] + out_time[1][1] + out_time[2][1];
aver[0][2] = out_time[0][2] + out_time[1][2] + out_time[2][2];
aver[1][0] = out_time[0][3] + out_time[1][3] + out_time[2][3];
aver[1][1] = out_time[0][4] + out_time[1][4] + out_time[2][4];
aver[1][2] = out_time[0][3] + out_time[1][5] + out_time[2][5];


    printf("Merge Sort\n" );
    printf("data 1     %f     %f     %f\n", out_time[0][0], out_time[0][1], out_time[0][2]);
    printf("data 2     %f     %f     %f\n", out_time[1][0], out_time[1][1], out_time[1][2]);
    printf("data 3     %f     %f     %f\n", out_time[2][0], out_time[2][1], out_time[2][2]);
    printf("average    %f     %f     %f\n",  aver[0][0]/3, aver[0][1]/3, aver[0][2]/3);

    printf("Quick Sort \n");
    printf("data 1     %f     %f     %f\n", out_time[0][3], out_time[1][3], out_time[0][5]);
    printf("data 2     %f     %f     %f\n", out_time[1][3], out_time[1][4], out_time[1][5]);
    printf("data 3     %f     %f     %f\n", out_time[2][3], out_time[2][4], out_time[2][5]);
    printf("average    %f     %f     %f\n",  aver[1][0]/3, aver[1][1]/3, aver[1][2]/3);







    return 0;
}
