/* 
QUESTION

Sort an array A using Merge Sort.
Change in the input array itself. So no need to return or print anything.
Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)
Output format :
Array elements in increasing order (separated by space)
Constraints :
1 <= n <= 10^3
Sample Input 1 :
6 
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8
Sample Input 2 :
5
2 1 5 2 3
Sample Output 2 :
1 2 2 3 5 */

//SOLUTION

#include<cstring>
 void merge2(int A[], int start, int mid, int end)
   {
    int B[end+1] ;
    int i=start, j=mid+1, k=start;
    
    while(i<=mid && j<=end)
    {
        if(A[i]<=A[j])
           {
               B[k++]=A[i++];
           }
        else
            B[k++]=A[j++];
    }
    for( ; i<=mid; i++)
    {
        B[k++]=A[i];
    }
    for( ; j<=end; j++)
    {
        B[k++]=A[j];
    }
    
    for(int i=start; i<=end; i++)
    {
        A[i]=B[i];
    }
     
     
}


    

void merge1(int array[], int start, int end)
{
    
    if(start>=end)
    {
        return;
    }
    
    if(start<end){
    int mid=(start+end)/2;
    merge1(array, start, mid);
    merge1(array, mid+1, end);
    merge2(array, start, mid, end);   
    }
    
}
    
   
void mergeSort(int input[], int size){
	
     merge1(input, 0, size-1)   ;
}

