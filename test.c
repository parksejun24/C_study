#include<stdio.h>
//int main(){
//	int a=6, b=4;
//	float c = a/b;
//	printf("%f",c); 
//} 자료형 int 연산에서는 몫이 실수여도 피연산자가 모두 정수면 값은 정수로 나온다. 
// ex 6/4는 1.5지만 피연산자가 모두 정수기 때문에 1로 나온다. 따라서 1.5가 나오고 싶으면 피연산자중 적어도 하나는 실수여야 한다.

int main(){
int a=3;
	{
		int a=4;
		printf("%d",a);
	}
printf("%d",a);	
}
//자신의 괄호범위 안에서만 영향을 끼치는 block scope기 때문에 첫번째 printf는 4 두번째  printf는 3이 나온다. 

