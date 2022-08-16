#include <stdio.h>
#include <string.h>

#define SIZE 20

int main(int argc, char *argv[])
{
    printf("Opening file\n");
    FILE * fp = fopen("input.txt", "r");
    printf("Creating buffer\n");
    char buf[SIZE];
    memset(buf, 0, SIZE);
    /** Reading file in 4 different ways */
    /** ***************** */
    /** fgets(buf, SIZE, fp); */
    /** fscanf(fp, "%s", buf); */
    char ch = fgetc(fp);
    fread(buf, sizeof(char), SIZE, fp);
    printf("ch = %c\n", ch);
    for (int i = 0; i < SIZE; i++) {
        printf("buf[%d] = %c\n", i, buf[i]);
    }
    fclose(fp);
    return 0;
}
