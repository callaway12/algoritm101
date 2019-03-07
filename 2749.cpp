#include <iostream>
using namespace std;

int main(void) {

    unsigned long long n;
    scanf("%lld",&n);
    unsigned int pibo[3];

    pibo[0] = 0;
    pibo[1] = 1;
    n = n% 1500000;
    for(int i=0; i<n-1 ;i++){
        pibo[(i+2)%3] = (pibo[(i+1)%3] + pibo[(i)%3] ) % 1000000;
    }

    cout<< pibo[(n)%3]% 1000000 <<endl;
    return 0;

}
