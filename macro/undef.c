#include <stdio.h> 
#define LIMIT 1000 
int main() 
{ 
   printf("%d",LIMIT); 
   //removing defined macro LIMIT 
   #undef LIMIT 
   //Declare LIMIT as integer again 
   int LIMIT=1001; 
   printf("\n%d",LIMIT); 
   return 0; 
} 
//This code is contributed by Santanu 
  
/*Output is : 
1000 
1001 
*/
