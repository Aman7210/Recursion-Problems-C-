/*
QUESTION

Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")
Output format :
Corresponding integer N (int, Eg. 1234)
Constraints :
0 <= |S| <= 9
where |S| represents length of string S.
Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567
Sample Output 2 :
12567*/

//SOLUTION

#include<cstring>
#include<math.h>
int stringtonumber2(char str[], int start, int n)
{
    if(str[start]=='\0')
    {
        return 0;
    }
         int a= str[start]-48;

    int y=stringtonumber2(str, start+1, n-1);
    int ans= a*pow(10, n);

        return ans + y;

}



int stringToNumber(char input[]) {
    int n=strlen(input);
    stringtonumber2(input, 0, n-1);

}


