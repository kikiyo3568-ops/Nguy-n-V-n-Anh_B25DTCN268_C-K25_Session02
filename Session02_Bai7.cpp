#include <stdio.h>
#include <math.h>
int main (){
	int number = 56789;
	int digit1 = number % 10;
	int digit2 = (number / 10) % 10;
	int digit3 = (number / 100) % 10;
	int digit4 = (number / 1000) % 10;
	int digit5 = (number /10000) % 10;
	
	int sum = digit1 + digit2 + digit3 + digit4 + digit5;
	
	printf("don vi: %d \n chuc: %d \n tram: %d \n nghin: %d, \n chuc nghin: %d \n",digit1,digit2,digit3,digit4,digit5);
	printf("Ket qua tong day so: %d",sum);
	
}
