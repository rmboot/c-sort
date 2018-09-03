#include "basic.h"
void select_sort(int a[],int len){
	int min,i,j;
	for(i=0;i<len-1;i++){
		min=i;
		for(j=i+1;j<len;j++)
			if(a[j]<a[min])
				min=j;
		if(min!=i)
			swap(&a[i],&a[min]);
	}
}
main(){
	int a[]={2,1,4,3,8,5,7,6};
	int len=8;
	select_sort(a,len);
	print(a,len);
}
