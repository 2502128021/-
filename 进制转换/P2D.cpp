#include "P2D.h"

int Convert_P_to_D(char* x,char p){
	int scale;
	int length = strlen(x);
	int num[100];
	if ((p == 'd')||(p=='D')){
		for (int i = 0; i < length; i++){
			num[i] = x[i] - '0';
		}
		scale = 10;
		return cal(num, scale,length);
	}
	if ((p == 'h') || (p == 'H')){
		for (int i = 0; i < length; i++){
			if ((x[i] >= 'A') && (x[i] <= 'H')){
				num[i] = x[i] - 'A' + 10;
			}
			if ((x[i] >= '0') && (x[i] <= '9')){
				num[i] = x[i] - '0';
			}
		}
		scale = 16;
		return cal(num, scale, length);
	}
	if ((p>='2')&&(p<='9')){
		for (int i = 0; i < length; i++){
			num[i] = x[i] - '0';
		}
		scale = p - '0';
		return cal(num, scale,length);
	}
	
}
int cal(int* num, int scale, int length){
	int d = 0;
	int k = 1;
	int step = length;
	while (step != 0)
	{
		d = d + num[step - 1] * k;
		k = k * scale;
		step--;
	}
	return d;
};
