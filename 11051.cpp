/*

자연수 N과 정수 K가 주어졌을 때 이항 계수 (N, K)를 10,007로 나눈 나머지를 구하는 프로그램을 작성하시오.

*/

#include <iostream>

#include <cstring> //memset

using namespace std;



const int MAX = 1001;

const int MOD = 10007;



int N, K; //주어진 수

int cache[MAX][MAX];



int binomialCoef(void) //이항계수

{

        for (int i = 1; i <= N; i++)

        {

               //Combination(i, 1)=i, Combination(i, i)=1, Combination(i, 0)=1

               cache[i][1] = i;

               cache[i][i] = cache[i][0] = 1;

        }



        for (int i = 3; i <= N; i++)

               for (int j = 2; j < i; j++)

                       //공식

                       cache[i][j] = (cache[i - 1][j - 1] + cache[i - 1][j]) % MOD;

        return cache[N][K] % MOD;

}



int main(void)

{

        cin >> N >> K;

        if (N < 1 || N >= MAX || K<0 || K>N)

               exit(-1);



        cout << binomialCoef() << endl;

        return 0;

}
