/*
QUESTION

Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S
Output format :
Modified String
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 
Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abc
Sample Input 3 :
xx
Sample Output 3:*/

//SOLUTION

#include<cstring>
void removexhelper(char str[], int start)
{
    
    if(str[start]=='\0')
    {
        return;
    }
    
    if(str[start]=='x')
    {
        for(int i=start; i<strlen(str); i++)
        {
        str[i]=str[i+1];
        }
        removexhelper(str, start);
    }

     else
         removexhelper(str, start+1);
} 



void removeX(char input[]) {
    removexhelper(input, 0);

}
