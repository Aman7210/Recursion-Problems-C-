/*
QUESTION

Sort an array A using Quick Sort.
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
1 5 2 7 3
Sample Output 2 :
1 2 3 5 7 */

//SOLUTION

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}



int partition(int arr[], int start, int end)
{
    int pivot=arr[start];
    int i=start , j=end;
    
    do{
        do{i++;} while(arr[i]<=pivot);
        do{j--;} while(arr[j]>pivot);
            
        if (i<j)
        {
           swap(&arr[i], &arr[j]);
        }
    }while(i<j);
    
    swap(&arr[start], &arr[j]);
    return j;
    
}


void quicksort2(int array[], int start, int end)
{
    if(start>=end)
    {
        return;
    }
    
    if(start<end)
    {
        int j=partition(array, start, end);
        quicksort2(array, start, j);
        quicksort2(array, j+1, end);
        
    }
}



void quickSort(int input[], int size) {


  quicksort2(input,0, size);

}
