#include "D2Q.h"
void Convert_D_to_Q(int res, char q, char* y){
	int i = 0;
	if ((q >= '0') && (q <= '9')){
		int scale = q - '0';
		while (res != 0){
			int temp = res % scale;
			y[i] = '0' + temp;
			res = res / scale;
			i++;
		}
	}
	if ((q == 'd') && (q == 'D')){
		int scale = 10;
		while (res != 0){
			int temp = res % scale;
			y[i] = '0' + temp;
			res = res / scale;
			i++;
		}
	}
	if ((q == 'h') && (q == 'H')){
		int scale = 16;
		while (res != 0){
			int temp = res % scale;
			if (temp >= 10){
				y[i] = 'A' + temp -10;
			}
			else{
				y[i] = '0' + temp;
			}
			res = res / scale;
			i++;
		}
	}
	int length = strlen(y);
	for (int i = 0; i < length / 2; i++){
		char temp = y[i];
		y[i] = y[length - 1 - i];
		y[length - 1 - i] = temp;
	}
}