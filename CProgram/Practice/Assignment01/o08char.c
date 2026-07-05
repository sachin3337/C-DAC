#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("DataType\tSize\tFormat\tRange\n");

    /* char */
    printf("char\t%zu\t%%c\t%d to %d\n",
           sizeof(char), SCHAR_MIN, SCHAR_MAX);

    printf("unsigned char\t%zu\t%%c\t0 to %u\n",
           sizeof(unsigned char), UCHAR_MAX);

    /* short */
    printf("short int\t%zu\t%%hd\t%hd to %hd\n",
           sizeof(short), SHRT_MIN, SHRT_MAX);

    printf("unsigned short int\t%zu\t%%hu\t0 to %hu\n",
           sizeof(unsigned short), USHRT_MAX);

    /* int */
    printf("int\t%zu\t%%d\t%d to %d\n",
           sizeof(int), INT_MIN, INT_MAX);

    printf("unsigned int\t%zu\t%%u\t0 to %u\n",
           sizeof(unsigned int), UINT_MAX);

    /* long */
    printf("long int\t%zu\t%%ld\t%ld to %ld\n",
           sizeof(long), LONG_MIN, LONG_MAX);

    printf("unsigned long int\t%zu\t%%lu\t0 to %lu\n",
           sizeof(unsigned long), ULONG_MAX);

    return 0;
}