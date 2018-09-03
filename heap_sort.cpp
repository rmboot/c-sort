#include "basic.h"
void heapify(int a[], int len, int i)
{
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<len&&a[left]>a[largest])
		largest=left;
	if(right<len&&a[right]>a[largest])
		largest=right;
	if(largest!=i){
		swap(&a[i],&a[largest]);
		heapify(a,len,largest);
	}
}
void heap_sort(int a[], int len)
{
	int i;
	for(i=len/2-1;i>=0;i--)
		heapify(a,len,i);
	for(i=len-1;i>=0;i--){
		swap(&a[0],&a[i]);
		heapify(a,i,0);
	}
}
main(){
	int a[]={2,1,4,3,8,5,7,6};
	int len=sizeof(a)/sizeof(a[0]);
	heap_sort(a,len);
	print(a,len);
}
