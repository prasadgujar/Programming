
/**     Given two sorted array, find their union *8/
/*Algorithm Union(arr1[], arr2[]):
For union of two arrays, follow the following merge procedure.
1) Use two index variables i and j, initial values i = 0, j = 0
2) If arr1[i] is smaller than arr2[j] then print arr1[i] and increment i.
3) If arr1[i] is greater than arr2[j] then print arr2[j] and increment j.
4) If both are same then print any of them and increment both i and j.
5) Print remaining elements of the larger array. */
/** Time Complexity = O(m+n) **/
#include <bits/stdc++.h>
using namespace std;
/* Function prints union of arr1[] and arr2[]
   m is the number of elements in arr1[]
   n is the number of elements in arr2[] */
int printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0; // Initial value of i and j
    while(arr1[i] < arr2[j])
    {
         if(arr1[i] < arr2[j]) // check if arr2 if greater then arr1 , if yes than print arr1 and increment i
            printf("%d",arr1[i++]); // check if arr1 is greater then arr2 ,if yes than print the smaller element which is arr2 and increment the counter of j.
         else if(arr1[i] > arr2[j])
            printf("%d",arr2[j++]);
         else
            printf("%d",arr1[i++]); // if both array has same element than print any of the array and than increment the both i and j.
         j++;

    }

    /* Print remaining elements of the larger array */

    while(i < m)
        printf("%d",arr1[i++]);
    while(j < n)
        printf("%d",arr2[j++]);


}
/* Driver Programmer to test above function */
int main()
{
    int arr1[] = {1 , 2 , 4, 5 ,6};
    int arr2[] ={2 , 3, 5 ,7};
    int m=sizeof(arr1)/sizeof(arr1[0]); // stored the size of arr1.
    int n=sizeof(arr2)/sizeof(arr2[0]); // stored the size of arr2.
    printUnion(arr1,arr2,m,n); // call the function and print the result.
    getchar();
    return 0;
}
/** For example, if the input arrays are:
arr1[] = {1, 3, 4, 5, 7}
arr2[] = {2, 3, 5, 6}
Then your program should print Union as {1, 2, 3, 4, 5, 6, 7} **/
