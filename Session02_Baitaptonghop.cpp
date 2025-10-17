#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	
	a = 10;
	b = 5;
	c = 20;
	
	float S = 0;
	S = (pow(a,2) + sqrt(pow(b,2)+4*a*c))/(2*a) - (pow(b,3)/pow(c,2)) + sqrt(abs(a-b));
	
	printf("Gia tri can tinh: %f", S);
}

