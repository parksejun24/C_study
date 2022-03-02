#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
	char name[20];
	int age;
	char address[100];
}Person;

void idPrint(Person *man){
	printf("%s, %d, %s", man->name, man->age, man->address);
}

int main(){	
	Person p1;
	strcpy(p1.name, "박세준");
	p1.age = 20;
	strcpy(p1.address,"경기도 양주시 가마골로 40-8");
	idPrint(&p1);
}
// 
// p1->age;    화살표 연산자로 멤버에 접근
// (*p1).age;  구조체 포인터를 역참조한 뒤 .으로 멤버에 접근
// 두개가 같은 의미임 즉 구조체 포인터를 사용할때는 ->를 사용해야 한다. 포인터를 역참조 해야 하기 때문에.  
