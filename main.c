#include <stdio.h>

#define PACKED __attribute__((packed))

typedef struct PACKED
{
    char a;
    int b;
    char c;
} PackedStruct;

typedef struct
{
    int e;
    char f;
    int g;
} PACKED efg;

typedef struct
{
    char X;
    int  Y;
    char Z;
} NoPackedStruct;
efg example2 = {65535, 'A', 1};

int main() {
    PackedStruct example1 = {'a', 99, 'c'};
    NoPackedStruct  example3 = {'X', 128, 'Z'};

    printf("Size of PackedStruct: %lu\n", sizeof(example1));
    printf("Size of Packed_Struct: %lu\n", sizeof(example2));
    printf("Size of NoPackedStruct: %lu\n", sizeof(example3));
    return 0;
}

