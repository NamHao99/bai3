#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>

int main() {
    char type[10];
    printf("Enter the data type name (or all to display all type): ");
    scanf("%s", type);

    if (strcmp(type, "all") == 0) {
        printf("Type: int\n");
        printf("Size: %d bytes\n", sizeof(int));
        printf("Range: %d to %d\n", INT_MIN, INT_MAX);

        printf("Type: float\n");
        printf("Size: %d bytes\n", sizeof(float));
        printf("Range: %e to %e\n", FLT_MIN, FLT_MAX);

        printf("Type: double\n");
        printf("Size: %d bytes\n", sizeof(double));
        printf("Range: %e to %e\n", DBL_MIN, DBL_MAX);

        printf("Type: char\n");
        printf("Size: %d byte\n", sizeof(char));
        printf("Range: %d to %d\n", CHAR_MIN, CHAR_MAX);
    } else if (strcmp(type, "int") == 0) {
        printf("Type information for int:\n");
        printf("Size: %d bytes\n", sizeof(int));
        printf("Range: %d to %d\n", INT_MIN, INT_MAX);
    } else if (strcmp(type, "float") == 0) {
        printf("Type information for float:\n");
        printf("Size: %d bytes\n", sizeof(float));
        printf("Range: %e to %e\n", FLT_MIN, FLT_MAX);
    } else if (strcmp(type, "double") == 0) {
        printf("Type information for double:\n");
        printf("Size: %d bytes\n", sizeof(double));
        printf("Range: %e to %e\n", DBL_MIN, DBL_MAX);
    } else if (strcmp(type, "char") == 0) {
        printf("Type information for char:\n");
        printf("Size: %d byte\n", sizeof(char));
        printf("Range: %d to %d\n", CHAR_MIN, CHAR_MAX);
    } else {
        printf("Unknow type name\n");
    }

    return 0;
}
