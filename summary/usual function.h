#include<stdlib.h>
/* 交换函数 */ 
/*	int *m,*n;
	m=&a,n=&b;	*/
void swap(int *m,int *n); 
void swap(int *m,int *n)
{
	int t;
	t=*n;
	*n=*m;
	*m=t;
}

/* 二分查找(一) */
/* int a[n];
   return: 1 means in
   0 means not in   */
int binary_search_1(int *a,int n,int target)
{
	int tmp;
	int bottom=0,top=n-1;
	while(bottom<top){
		int mid=(bottom+top)/2;	/* 防止溢出：int mid=bottom+(top-bottom)/2 */
		tmp=a[mid];
		if(target>tmp){
			bottom=mid+1;
		}else{
			top=mid;
		}
	}
	if(top<bottom){
		return 0;
	}else{
		tmp=a[bottom];
		if(target==tmp){
			return 1;
		}else{
			return 0;
		}
	}
}

/* 二分查找(二) */
/* int a[n];
   return: 1 means in
   0 means not in   */
int binary_search_2(int *a,int n,int target)
{
	int tmp;
	int bottom=0,top=n-1;
	while(bottom<=top){
		int mid=(bottom+top)/2;	/* 防止溢出：int mid=bottom+(top-bottom)/2 */
		tmp=a[mid];
		if(target==tmp){
			return 1;
		}
		if(target>tmp){
			bottom=mid+1;
		}else{
			top=mid-1;
		}
	}
	return 0;
}

/* 冒泡排序(由小到大) */
/* int a[n]; */
void bubble_sort(int *a,int n);
void bubble_sort(int *a,int n)
{
	int i,j,flag;
	for(i=n-1;i>=0;--i){
		flag=0;
		for(j=0;j<i;++j){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
				flag=1;
			}
		}
		if(!flag){
			break;
		}
	}
}

/* 自创冒泡排序(由小到大) */
/* int a[n]; */
void my_bubble_sort(int *a,int n);
void my_bubble_sort(int *a,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
			}
		}
	}
}

/* 插入排序(由小到大) */
/* int a[n]; */
void insertion_sort_array(int *a,int n);
void insertion_sort_array(int *a,int n)
{
	int tmp;
	int i,j;
	for(i=1;i<n;++i){
		tmp=a[i];
		for(j=i;j>0;--j){
			if(a[j-1]<=tmp){
				break;
			}
			a[j]=a[j-1];
		}
		a[j]=tmp;
	}
}

/* 插入排序(由小到大) */
/* List *phead=&head; 
typedef struct sortable_list *List;
struct sortlist{
	int data;
	List next;
};
void insertion_sort_list(List *phead);
void insertion_sort_list(List *phead)
{
	List head=*phead;
	List last_sorted,first_unsorted;
	List cur,tra;
	if(head!=NULL){
		last_sorted=head;
		while(last_sorted->next!=NULL){
			first_unsorted=last_sorted->next;
			if(first_unsorted->data<head->data){
				last_sorted->next=first_unsorted->next;
				first_unsorted->next=head;
				head=first_unsorted;
			}else{
				tra=head;
				cur=tra->next;
				while(first_unsorted->data>cur->data){		// 不稳定
					tra=cur;
					cur=tra->next;
				}
				if(first_unsorted==cur){
					last_sorted=first_unsorted;
				}else{
					last_sorted->next=first_unsorted->next;
					first_unsorted->next=cur;
					tra->next=first_unsorted;
				}
			}
		}
	}
	*phead=head;
}	*/

/* 选择排序(由小到大) */
/* int a[n]; */
void selection_sort(int *a,int n);
void selection_sort(int *a,int n)
{
	int min,t;
	int i,j;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		swap(&a[min],&a[i]);
	}
}

/* 希尔排序(由小到大) */
/* int a[n]; */
void shell_sort(int *a,int n);
void shell_sort(int *a,int n)
{
	int tmp;
	int i,j,k,t;
	int sedgewick[8]={929,505,209,109,41,19,5,1};	/* 可变，此处为特殊数组 */ 
	for(t=0;t<8;++t){
		k=sedgewick[t];
		for(i=k;i<n;++i){
			tmp=a[i];
			for(j=i;j>=k;j-=k){
				if(a[j-k]<=tmp){
					break;
				}
				a[j]=a[j-k];
			}
			a[j]=tmp;
		}
	}
}

/* 快速排序函数(数组，由小到大) */
/* #include<stdlib.h>
	qsort(array,length,sizeof(a type of array),compare); */
int cmp(const void *a,const void *b);
int cmp(const void *a,const void *b)
{
	return (*(int*)a-*(int*)b);
}

/* 归并排序(递归实现) */
/* int a[n]; */
void recursive_merge_sort_array(int *a,int n);
void merge_sort_array(int *a,int *tmp,int left,int right);
void merge_array(int *a,int *tmp,int left,int right,int rightend);
void merge_array(int *a,int *tmp,int left,int right,int rightend)	/* 归并 */ 
{
	int leftend=right-1;
	int n=left;
	while(left<=leftend&&right<=rightend){
		if(a[left]<=a[right]){
			tmp[n++]=a[left++];
		}else{
			tmp[n++]=a[right++];
		}
	}
	while(left<=leftend){
		tmp[n++]=a[left++];
	}
	while(right<=rightend){
		tmp[n++]=a[right++];
	}
	int i;
	for(i=0;i<n;++i,--rightend){
		a[rightend]=tmp[rightend];
	}
}
void merge_sort_array(int *a,int *tmp,int left,int right)	/* 调用 */ 
{
	int center;
	if(left<right){
		center=(left+right)/2;
		merge_sort_array(a,tmp,left,center);
		merge_sort_array(a,tmp,center+1,right);
		merge_array(a,tmp,left,center+1,right);
	}
}
void recursive_merge_sort_array(int *a,int n)	/* 统一接口 */ 
{
	int tmp[n];
	merge_sort_array(a,tmp,0,n-1);
}

/* 快速排序(递归实现) */
/* int a[n]; */
void recursive_quick_sort_array(int *a,int n);
void quick_sort_array(int *a,int left,int right);
int seekpivot(int *a,int left,int right);
int seekpivot(int *a,int left,int right)	/* 可变，此处为中间位置 */
{
	swap(&a[left],&a[(left+right)/2]);
	int pivot=a[left];
	int last_small=left;
	int i;
	for(i=left+1;i<=right;++i){
		if(a[i]<pivot){
			++last_small;
			swap(&a[last_small],&a[i]);
		}
	}
	swap(&a[left],&a[last_small]);
	return last_small;
}
void quick_sort_array(int *a,int left,int right)
{
	int pivot_position;
	if(left<right){
		pivot_position=seekpivot(a,left,right);
		quick_sort_array(a,left,pivot_position-1);
		quick_sort_array(a,pivot_position+1,right);
	}
}
void recursive_quick_sort_array(int *a,int n)
{
	quick_sort_array(a,0,n-1);
}

/* 堆排序 */
/* int a[n]; */
void heap_sort(int *a,int n);
void build_heap(int *a,int n);
void insert_heap(int *a,int tmp,int low,int high);
void insert_heap(int *a,int tmp,int low,int high)
{
	int large=2*low+1;
	while(large<=high){
		if(large<high&&a[large]<a[large+1]){
			++large;
		}
		if(tmp>=a[large]){
			break;
		}else{
			a[low]=a[large];
			low=large;
			large=2*low+1;
		}
	}
	a[low]=tmp;
}
void build_heap(int *a,int n)
{
	int low;
	for(low=n/2-1;low>=0;--low){
		int tmp=a[low];
		insert_heap(a,tmp,low,n-1);
	}
}
void heap_sort(int *a,int n)
{
	build_heap(a,n);
	int tmp;
	int last_unsorted;
	for(last_unsorted=n-1;last_unsorted>0;--last_unsorted){
		tmp=a[last_unsorted];
		a[last_unsorted]=a[0];
		insert_heap(a,tmp,0,last_unsorted-1);
	}
}
