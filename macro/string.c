#include <stdio.h> 
#define get(a) #a 
int main() 
{ 
    // GeeksQuiz is changed to "GeeksQuiz" 
    printf("%s", get(GeeksQuiz)); 
} 
// Output: GeeksQuiz
