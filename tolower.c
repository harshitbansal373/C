// example of tolower() function. 
  
#include <ctype.h> 
#include <stdio.h> 
  
int main() 
{ 
  
    // Character to be converted to lowercase 
    char ch = 'G'; 
  
    // convert ch to lowercase using toLower() 
    printf("%c in lowercase is represented as = %c", ch, tolower(ch)); 
  
    return 0; 
} 

//Output:
//G in lowercase is represented as = g
