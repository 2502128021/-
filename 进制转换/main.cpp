#include "P2D.h"
#include "D2Q.h"
#include<cstdio>
#include<cstdlib>
/*
*void Convert_D_to_Q(int res, char q, char* y)
*void Convert_D_to_Q(int res,char q,char* y)
*
*/
int main(){
	char x[100] = { '\0' };
	char y[400] = { '\0' };
	int a, b;
	char d;
	scanf("%d %d %c", &a, &b, &d);
	int sum = a + b;
	Convert_D_to_Q(sum, d, y);
	printf("%s\n", y);
	/*char p ;
	char q;
	scanf("%s %c %c", &x, &p, &q);
	int res = Convert_P_to_D(x, p);
	printf("%d\n", res);
	
	Convert_D_to_Q(res, q, y);
	printf("%s", y);*/
	system("pause");
	return 0;
}