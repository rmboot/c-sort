#include "basic.h"
void shell_sort(int a[], int len)
{
	int gap,temp,i,j;
	for(gap=len/2;gap>0;gap/=2){
		for(i=gap;i<len;i+=1){
			temp=a[i];
			for(j=i;j>=gap&&a[j-gap]>temp;j-=gap)
				a[j]=a[j-gap];
			a[j]=temp;
		}
	}
}
main(){
	int a[]={2,1,4,3,8,5,7,6};
	int len=sizeof(a)/sizeof(a[0]);
	shell_sort(a,len);
	print(a,len);
}
