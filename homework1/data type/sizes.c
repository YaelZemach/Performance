
#include <stdio.h>
#include <stdint.h>

int main()
{
    // typedef struct
    // {
    //     int id;
    //     int year;
    // } student;
    // char *arrTypes[17] = {"int",
    //                       "short",
    //                       "long",
    //                       "char",
    //                       "float",
    //                       "double",
    //                       "unsigned int",
    //                       "long long",
    //                       "uint8_t",
    //                       "uint16_t",
    //                       "uint32_t",
    //                       "uint64_t",
    //                       "uint_fast8_t",
    //                       "uint_fast16_t",
    //                       "uintmax_t",
    //                       "intmax_t",
    //                       "int[]"};
    // for (int i = 0; i < 17; i++)
    // {
    //     printf("size of %s is %ld\n", arrTypes[i], sizeof(*(arrTypes[i])));
    // }
    printf("%zu\n", sizeof(int64_t));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(short));
    printf("%zu\n", sizeof(long));
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(unsigned int));
    printf("%zu\n", sizeof(long long));
    printf("%zu\n", sizeof(uint8_t));
    printf("%zu\n", sizeof(uint16_t));
    printf("%zu\n", sizeof(uint32_t));
    printf("%zu\n", sizeof(uint64_t));
    printf("%zu\n", sizeof(uint_fast8_t));
    printf("%zu\n", sizeof(uint_fast16_t));
    printf("%zu\n", sizeof(uintmax_t));
    printf("%zu\n", sizeof(intmax_t));
    // printf("%zu\n", sizeof(int []));
    // printf("size of student is %ld", sizeof(student));
}

//! compile
//*    make sizes && ./sizes