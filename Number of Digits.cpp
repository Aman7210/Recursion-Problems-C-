/*
QUESTION

Given the number 'n', find out and return the number of digits present in a number recursively.
Input Format :
Integer n
Output Format :
Count of digits
Constraints :
1 <= n <= 10^6
Sample Input 1 :
 156
Sample Output 1 :
3
Sample Input 2 :
 7
Sample Output 2 :
1 */

//SOLUTION

int count(int n){
    int c;
    if (n/10==0)
    {
        return 1;
    }
    int smalloutput=count(n/10);
    int output= 1+smalloutput;
    return output;
}
