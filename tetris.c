#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define WIDTH 12
#define HEIGHT 21 

char *map[HEIGHT][WIDTH] = {"O",};

void mapMaker(){
	for(int h = 0; h<HEIGHT; h++){
		for(int w = 0;w<WIDTH;w++){
			if(h!=20){
				if(w==0) map[h][w] = "■";
				else if(w==11) map[h][w] = "■";
				else map[h][w] = " ";	
			}else map[h][w] = "■";
		}
	}
}

int main(){
	mapMaker();	
	for(int h = 0; h<HEIGHT;h++){
		for(int w = 0;w<WIDTH;w++){
			printf("%s",map[h][w]);
		}
		printf("\n");
	}
}
