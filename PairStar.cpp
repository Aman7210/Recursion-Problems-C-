/*
QUESTION

Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a */

//SOLUTION

#include<cstring>
#include<string>


 void pairstar2(char str[], int start) 
 {
     
     if(str[start]=='\0')
     {
         return;    
     }

   if(str[start]==str[start+1])
   {
       
       for(int i=strlen(str); i>=start; i--)
       {
           str[i+1]=str[i];
       }
       str[start+1]='*';
   }
     pairstar2(str, start+1);
}

void pairStar(char input[]) {
    
    pairstar2(input, 0);

}
