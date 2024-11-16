#include <stdio.h>

void qsort(int v[], int left, int right);
void swap(int v[], int i, int j);

int main()
{
	int len = 6;
	int arr[] = {5, 2, 1, 6, 3, 6, 7};
	qsort(arr, 0, len);
	for (int i = 0; i < len; i++)
		printf("%d\n", arr[i]);
}
	
	
void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v [], int i, int j);

	if (left >= right) /* do nothing if array contains */ 
		return;		   /* fewer than two elemens */ 
	swap(v, left, (left + right)/2); /* move partition elem */
	last = left;					 /* to v[0] */
	for (i = left+1; i <= right; i++)	/* partition */
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);		/* restore partion elem */
	qsort(v, left, last-1);
	qsort(v, last+1, right);
}

/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j)
{
	int temp;
	
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
