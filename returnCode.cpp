#include <string.h>
using namespace std;

char gencode(string a,int i)
  
{
   char c;  
 
  if(i==2){
    
    if(a[1]!='\0')
   {
     c=char(a[1]+48+(a[0]*10));
  
   }
    
   else 
     return (c); 
  }    
else  
{
  c=char(a[0]+48);
  
  return (c);
}

 return (c);
}





int getCodes(string input, string output[10000]) {
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */

if(input.size()==0)
{ output[0]='\0';
  
  
  return 1;
}
 
 int res1=getCodes(input.substr(1),output);
  
  char code1=gencode(input.substr(0,1),1);
       
  for(int i=0;i<res1;i++)
       {  
         output[i]=code1+output[i];
       }
    
  
  int res2=getCodes(input.substr(2),output);
    char code2=gencode(input.substr(0,2),2);
 
  for(int i=res1;i<res2;i++)
  {
 output[i]=code2+output[i];
  }
  
  
  
  
return (res1+res2);
}

