


#include <stdio.h>

typedef struct {
    int a;
    int b;
} my_struct;

void Load1(my_struct *my_struct, char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        my_struct->a = 10;
        my_struct->b = 20;
    }else {
        fread(&my_struct->a, sizeof(&my_struct->a), 1, file);
        fread(&my_struct->a, sizeof(&my_struct->b), 1, file);
    }
    fclose(file);
}

void Save1(my_struct *my_struct, char *filename) {
    FILE *file = fopen(filename, "wb");
    if (file) {
        fwrite(&my_struct->a, sizeof(&my_struct->a), 1, file);
        fwrite(&my_struct->b, sizeof(&my_struct->b), 1, file);
    }
    fclose(file);
}

int main(void) {
    my_struct my_struct;
    Load1(&my_struct, "data/my_struct.bin");
    printf("%d\n", my_struct.a);
    printf("%d\n", my_struct.b);
    my_struct.a = 20;
    Save1(&my_struct, "data/my_struct.bin");
}