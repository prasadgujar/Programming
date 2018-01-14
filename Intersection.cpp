/** Given two sorted array ,find Intersection of two array **/
/** Algorithm=
Algorithm Intersection(arr1[], arr2[]):
For Intersection of two arrays, print the element only if the element is present in both arrays.
1) Use two index variables i and j, initial values i = 0, j = 0
2) If arr1[i] is smaller than arr2[j] then increment i.
3) If arr1[i] is greater than arr2[j] then increment j.
4) If both are same then print any of them and increment both i and j.
**/
printIntersection(int arr1[], int arr2[], int m, int n)
{
int i=0,j=0; // initial value of i and j.
while( i < m && j < n )
{
    if( arr1[i] < arr2[j] ) // if arr2[j] is greater then arr1[i] , increment i.
        i++;
    else if ( arr1[i] > arr2[j] ) // if arr1[i] is greater than arr2[j] than increment j
        j++;
    else  // if both arr1[i] is equal to arr2[j] than print any of the array and increment i and j.
    {
        printf(" %d ", arr2[j++] );
        i++;
    }
  }
}


int main()
{
  int arr1[] = {1 , 2 , 4, 5, 6}; // arr1 values
  int arr2[] = {2 , 3, 5,7}; //arr2 values
  int m = sizeof(arr1)/sizeof(arr1[0]);  // storing size of arr1 in m
  int n = sizeof(arr2)/sizeof(arr2[0]); // storing size of arr2 in  =n.
  printIntersection(arr1, arr2, m, n); // call the function and print the result.
  getchar();
  return 0;
}
/** output=
2,5
Time Complexity= O(m+n)
**/
