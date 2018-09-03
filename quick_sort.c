#include "basic.h"
int partition(int a[],int low,int high)
{
	int left,right,key;
	left=low,right=high,key=a[low];
	while(left<right){
		while(left<right&&a[right]>=key) right--;
		a[left]=a[right];
		while(left<right&&a[left]<=key) left++;
		a[right]=a[left];
	}
	a[left]=key;
	return left;
}
void quick_sort(int a[],int low,int high){
	int pos;
	if(low<high){
		pos=partition(a,low,high);
		quick_sort(a,low,pos-1);
		quick_sort(a,pos+1,high);
	}
}
main(){
	int a[]={2,1,4,3,8,5,7,6};
	int len=8;
	quick_sort(a,0,len-1);
	print(a,len);
}
