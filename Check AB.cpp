/*
QUESTION

Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false.
Input format :
String S
Output format :
'true' or 'false'
Constraints :
1 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
abb
Sample Output 1 :
true
Sample Input 2 :
abababa
Sample Output 2 :
false
Explanation for Sample Input 2
In the above example, a is not followed by either "a" or "bb", instead it's followed by "b" which results in false to be returned*/

//SOLUTION

// #include<string>
// #include<cstring>
// bool checkAB2(char input[], int start) {
// 	if(input[start]=='\0')
//     {
//         return true;
//     }
    
//      if(input[start]!='a')
    
//        {   return false;
//        }
    
//      else 
//      {  
//          if(input[start+1]=='\0')
//              return 1;
//          if(input[start+1]=='a')
//         {   
//             if (input[start+2]=='\0');
//             { return true;}
//             return checkAB2(input, start+2);
//         }
    
        
//         else if(input[start+1]=='b' && input[start+2]=='b')
//         {
//             if(input[start+3]=='\0')
//             {return true;}
            
//             else if(input[start+3]=='a')
//             {  
//                 if(input[start+4]=='\0'){
//                     return true;
//                 }
//              return checkAB2(input, start+4);
//             }
//             // return checkAB2(input, start+3);
//         }
        
//         // else 
//             return false;
// }
// }
    
    



 

// bool checkAB(char input[])
// {
//     checkAB2(input, 0);
// }


bool cab(char in[],int stind){
    if(in[stind]=='\0')
        return 1;
    if(in[stind]!='a')
        return 0;
    if(in[stind+1]=='b'&&in[stind+2]=='b')
        return cab(in,stind+3);
    return cab(in,stind+1);
}

bool checkAB(char in[]) {
	// Write your code here
    return cab(in,0);

}
