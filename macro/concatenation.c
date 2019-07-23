#include <stdio.h> 
#define merge(a, b) a##b 
int main() 
{ 
    printf("%d ", merge(12, 34)); 
} 
// Output: 1234
