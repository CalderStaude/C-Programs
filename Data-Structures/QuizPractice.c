#include "stdio.h"
 
int main()
{
 struct {int a[2], b;} arr[] = {[0].a = {1}, [1].a = {2}, [0].b = 1, [1].b = 2};
 
 printf("%d %d %d and",arr[0].a[0],arr[0].a[1],arr[0].b);
 printf("%d %d %dn",arr[1].a[0],arr[1].a[1],arr[1].b);
 
 return 0;
}

