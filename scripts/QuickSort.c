#include <stdio.h>
#include <stdlib.h>
#define N 20

void printSeq(int a[], int n) {
  printf("[");
  for (int i=0; i<n; i++) printf("%d ", a[i]);
  if (n==0) printf("]\n"); else printf("\b]\n");
}

void quicksort(int arr[], int n) {
/* Sorts arr in ascending order.
 * n is the dimension of arr.
 * Uses a divide and conquer approach.
 * 1. Split arr into two parts left and right with respect
 * to a pivot where left contains elements < pivot and
 * right has elements >= pivot.  This is the divide step.
 * 2. quicksort left, quicksort right. The recursive step.
 * 3. stick left, pivot, right for final sorted array - conquer step.
 */
  if(n<2) return;//base step. Array sorted if empty or has 1 element.
  int larr[n], rarr[n], pivot=arr[0];//pivot chosen as first element in arr.
  int i, li=0, ri=0;
//Divide step
  for(i=1;i<n;i++)
    if(arr[i]<pivot) larr[li++]=arr[i]; else rarr[ri++]=arr[i];
  printf("larr="); printSeq(larr,li); printf("pivot=%d\n", pivot);
  printf("rarr=");printSeq(rarr,ri);
//Recursive step
  quicksort(larr,li); quicksort(rarr,ri);
//Conquer step. Copy in order arrays larr, pivot and rarr into arr.
  for(i=0;i<li;i++) arr[i]=larr[i];//copy larr
  arr[i]=pivot;//copy pivot
  for(i++;i<n;i++) arr[i]=rarr[i-li-1];//copy rarr
  return;
}
int main() {
  int a[N], n, i;
  printf("Sequence length (>0, <20) = ");
  scanf("%d", &n);
  if (n<1) {printf("Illegal length\n"); exit(0);}
  printf("Give seq. elements sep. by white space = ");
  for (i=0; i<n; i++) scanf("%d", &a[i]);
  printf("Original sequence = ");
  printSeq(a, n);
  quicksort(a, n);
  printf("Sorted sequence = ");
  printSeq(a, n);
  return 0;
}
