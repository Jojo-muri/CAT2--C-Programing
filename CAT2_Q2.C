#include <stdio.h>
int main() {
	int a, b ;
	int scores[2][2][2] ={{{65,92},{35,70}},{{84,72},{59,67}}}; 
	for (a=0;a<2;a++){
		for (b=0;b<2;b++){
			printf("scores[%d][%d] = %d\n",a,b,scores [a][b]);
			}
		}
return 0;
}