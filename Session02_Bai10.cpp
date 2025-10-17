#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	
	a = 3;
	b = 4;
	c = 2;
	
	float S;
	S = sqrt(pow(a,2)+pow(b,2))/(c+1) + (float)a*b/c - sqrt(abs(a-b)+pow(c,2));
	printf("S = %.2f",S);  // %.2f  : In ra 2 so sau day phay
}
