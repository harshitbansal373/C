#include <stdio.h> 
#define PRINT(i, limit) while (i < limit) \ 
                        { \ 
                            printf("GeeksQuiz "); \ 
                            i++; \ 
                        } 
int main() 
{ 
    int i = 0; 
    PRINT(i, 3); 
    return 0; 
} 
// Output: GeeksQuiz  GeeksQuiz  GeeksQuiz 
