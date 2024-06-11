#include <stdio.h> 
#include <math.h> 
int main()
{ 
 	float a, b, c, sol1, sol2; 
 	printf("A general quadratic equation is of the form a*x^2 + b*x + c = 0\n"); 
 	printf("Enter the value of a: "); 
 	scanf("%f", &a); 
 	printf("Enter the value of b: "); 
 	scanf("%f", &b); 
 	printf("Enter the value of c: "); 
 	scanf("%f", &c); 
 	sol1 = (-b + sqrt(b*b - 4*a*c))/(2*a); 
 	sol2 = (-b - sqrt(b*b - 4*a*c))/(2*a); 
 	printf("The solutions are %f and %f\n", sol1, sol2); 
 	return 0;
}