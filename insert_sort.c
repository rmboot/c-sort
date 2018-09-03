#include "basic.h"
void insert_sort(int a[],int len){
    int temp,i,j;
    for(i=1;i<len;i++){
        temp=a[i];
        for(j=i;j>0&&a[j-1]>temp;j--)
            a[j]=a[j-1];
        a[j]=temp;
    }
}
main(){
	int a[]={2,1,4,3,8,5,7,6};
	int len=8;
	insert_sort(a,len);
	print(a,len);
}
