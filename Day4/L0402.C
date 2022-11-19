#include<stdio.h>
#include<alloc.h>
#include<conio.h>


void readArray(int *arr ,int size);
void printArray(int *arr ,int size);

void main(){
	int size;
	int *arr;

	clrscr();

	printf("enter arr size:");
	scanf("%d",&size);
	arr =(int *)malloc(size*sizeof(int));
	readArray(arr,size);
	printArray(arr,size);
	free(arr);
	getch();
}

void readArray(int *arr,int size ){
	int i;
	for(i=0;i<size;i++){
		printf("\n\tenter number[%d]:",i);
		scanf("%d",&arr[i]);
	}
}

void printArray(int * arr, int size){
	int i;
	for(i=0;i<size;i++){

		printf("\n number [%d]=%d\n",i,arr[i]);
	}
}