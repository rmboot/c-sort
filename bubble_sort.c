#include "basic.h"
void bubble_sort(int a[],int len){
	int flag,i,j;
	for(i=0;i<len-1;i++){
		flag=0;
		for(j=len-1;j>i;j--){
			if(a[j-1]>a[j]){
				swap(&a[j-1],&a[j]);
				flag=1;
			}
		}
		if(flag==0)
			return;
	}
}
main(){
	int a[]={2,1,4,3,8,5,7,6};
	int len=8;
	bubble_sort(a,len);
	print(a,len);
}
