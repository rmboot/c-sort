#include "basic.h"
int partition(int a[],int low,int high)
{
	int key=a[low];
	while(low<high){
		while(low<high&&a[high]>=key) high--;
		a[low]=a[high];
		while(low<high&&a[low]<=key) low++;
		a[high]=a[low];
	}
	a[low]=key;
	return low;
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
