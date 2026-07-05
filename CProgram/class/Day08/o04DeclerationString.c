#include<stdio.h>

// Demonstration of different string declarations in C
int main()
{
    // String as a char array with explicit '\0'
    // Total size = 6 bytes (5 chars + '\0')
    char str[6] = {'A','B','C','D','E','\0'};  
    printf("\nString str => ");
    printf("%s", str);                     // Output: ABCDE
    printf("\nSize of string str = %d", sizeof(str)); // 6

    // String declared without explicit size (compiler counts elements)
    char str1[] = {'A','B','C','D','E','\0'};  
    printf("\nString str1 => %s", str1);  // Output: ABCDE
    printf("\nSize of string str1 = %d", sizeof(str1)); // 6

    // Partial initialization: remaining characters auto-filled with '\0'
    // str2 = {'A','B','C','\0','\0'}
    char str2[5] = {'A','B','C'};
    printf("\nString str2 => %s", str2);  // Output: ABC
    printf("\nSize of string str2 = %d", sizeof(str2)); // 5

    // String initialized using string literal
    // Compiler inserts '\0' automatically
    char str3[6] = "ABCD"; // "ABCD\0"
    printf("\nString str3 => %s", str3);  // Output: ABCD
    printf("\nSize of string str3 = %d", sizeof(str3)); // 6

    return 0;
}