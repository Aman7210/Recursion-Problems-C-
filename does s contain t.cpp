/* 
QUESTION

Given two string s and t, write a function to check if s contains all characters of t (in the same order as they are in string t).
Return true or false.
Do it recursively.
E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. So function will return true.
Input Format :
Line 1 : String s
Line 2 : String t
Output Format :
true or false
Sample Input 1 :
abchjsgsuohhdhyrikkknddg
coding
Sample Output 1 :
true
Sample Input 2 :
abcde
aeb
Sample Output 2 :
false*/

//SOLUTION

#include<cstring>
#include<string>

bool checksequenece(char large[] , char*small) {
       
    if(strlen(small)==0)
    {
        return true;
    }
    if(strlen(large)==0)
        return false;
   
    if (large[0]==small[0])
    {
         checksequenece(large+1, small+1); 
    }
    else
        checksequenece(large+1, small);
}


#include<iostream>
using namespace std;
#include "solution.h"

int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}
