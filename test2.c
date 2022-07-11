#include<stdio.h>
#include<stdint.h>
int main(){
    uint32_t test = 255;
    test = test << 9;
    printf("%d", test);
}