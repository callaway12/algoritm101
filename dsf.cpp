/*

연속된 부분 구간 중 그 합이 최대인 구간 찾기

*/

#include <iostream>

#include <cstdlib>

#include <ctime>

#include <vector>

#include <algorithm>

#include <chrono>

using namespace std;



const int MAX = numeric_limits<int>::max();

//A[]의 연속된 부분 구간의 최대 합을 구한다 시간복잡도 O(N^3)
//
// int inefficientMaxSum(const vector<int> &A)
//
// {
//
//         int N = A.size(), ret = MIN;
//
//         for (int i = 0; i < N; i++)
//
//                for (int j = i; j < N; j++)
//
//                {
//
//                        //구간 A[i...j]의 합을 구한다
//
//                        int sum = 0;
//
//                        for (int k = i; k <= j; k++)
//
//                               sum += A[k];
//
//                        ret = max(ret, sum);
//
//                }
//
//         return ret;
//
// }
//
//
//
// //A[]의 연속된 부분 구간의 최대 합을 구한다 시간 복잡도 O(N^2)
//
// int betterMaxSum(const vector<int> &A)
//
// {
//
//         int N = A.size(), ret = MIN;
//
//         for (int i = 0; i < N; i++)
//
//         {
//
//                int sum = 0;
//
//                for (int j = i; j < N; j++)
//
//                {
//
//                        //구간 A[i...j]의 합을 구한다
//
//                        sum += A[j];
//
//                        ret = max(ret, sum);
//
//                }
//
//         }
//
//         return ret;
//
// }
//
//

//A[lo...hi]의 연속된 부분 구간 최대 합을 구한다 시간 복잡도 O(nlogn)

int fastMaxSum(const vector<int> &A, int lo, int hi)

{

        //기저 사례:구간의 길이가 1일 경우

        if (lo == hi)

               return A[lo];

        //배열을 A[lo..mid], A[mid+1..hi] 두 조각으로 나눈다

        int mid = (lo + hi) / 2;

        //두 부분에 모두 걸쳐 있는 최대 합 구간을 찾는다 이 구간은

        //A[i..mid]와 A[mid+1,,j] 형태를 갖는 구간의 합으로 이루어진다

        //A[i..mid] 형태를 갖는 최대 구간을 찾는다

        int left = MIN, right = MIN, sum = 0;

        for (int i = mid; i >= lo; i--)

        {

               sum += A[i];

               left = max(left, sum);

        }

        //A[mid+1..j] 형태를 갖는 최대 구간을 찾는다

        sum = 0;

        for (int j = mid + 1; j <= hi; j++)

        {

               sum += A[j];

               right = max(right, sum);

        }

        //최대 구간이 두 조각 중 하나에만 속해 있는 경우의 답을 재귀호출로 찾는다

        int single = max(fastMaxSum(A, lo, mid), fastMaxSum(A, mid + 1, hi));



        //두 경우 중 최대치를 반환한다

        return max(left + right, single);

}

//

//A[]의 연속된 부분 구간의 최대 합을 구한다 시간 복잡도 O(n)

// int fastestMaxSum(const vector<int> &A)
//
// {
//
//         int N = A.size(), ret = MAX, psum = 0;
//
//         for (int i = 0; i < N; i++)
//
//         {
//
//                psum = min(psum, 0) + A[i];
//
//                ret = min(psum, ret);
//
//         }
//
//         return ret;
//
// }



int main(void)

{

        using namespace std::chrono;



        vector<int> v;
        v.push_back(2);
        v.push_back(4);
        v.push_back(5);
        v.push_back(3);
        v.push_back(2);
        v.push_back(1);
        v.push_back(4);
        v.push_back(2);
        v.push_back(5);
        v.push_back(1);
\






        cout << "v: ";

        for (vector<int>::size_type i = 0; i < v.size(); i++)

               cout << v[i] << " ";

        cout << endl << endl;



        cout << fastestMaxSum(v);




        return 0;

}
