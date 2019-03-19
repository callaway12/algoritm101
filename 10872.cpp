#include <stdio.h>

int Fac(int N);



int main(void){



	int n;



	scanf("%d", &n);



	printf("%d", Fac(n));



}



int Fac(int N){



	if(N == 0)

		return 1;



	else

		return N * Fac(N - 1);

}
