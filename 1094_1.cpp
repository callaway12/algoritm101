#include <iostream>
using namespace std;

int main(){

    int X;
    cin>>X;

    int cnt=0; //붙인 막대 개수
    int length=0; //붙인 막대 길이
    int remain=64; //자른 막대 길이

    if(X==64){
        cout<<1<<endl;
        return 0;
    }

    while(X!=length){
        remain/=2;
        if(remain+length>X)
            continue;

        length+=remain;
        cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
