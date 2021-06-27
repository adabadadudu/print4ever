#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define WIDTH 30
int main(){
	int w = 0;
	int cls = 0;
	puts("enter character");
	char ch = fgetc(stdin);
	while(1){
		for(int y = 0; y < w; y++)
			printf(" ");
		printf("%c",ch);
		w = rand() % WIDTH;
		if(w == 30)
			printf("\n");
		if(w == 0)
			cls++;
		if(cls == 100){
			system("clear");
			cls = 0;
		}
	}
	return 0;
}
