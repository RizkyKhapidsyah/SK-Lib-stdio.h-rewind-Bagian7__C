#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void) {
    FILE* stream;
    int data1, data2;

    data1 = 1;
    data2 = -37;

    fopen_s(&stream, "crt_rewind.out", "w+");

    if (stream != NULL) {
        fprintf(stream, "%d %d", data1, data2);
        printf("The values written are: %d and %d\n", data1, data2);
        rewind(stream);
        fscanf_s(stream, "%d %d", &data1, &data2);
        printf("The values read are: %d and %d\n", data1, data2);
        fclose(stream);
    }

    _getch();
    return 0;
}