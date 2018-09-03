#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void print(int a[],int len){
	int i;
	for(i=0;i<len;i++)
		printf("%d ",a[i]);
}