#include <stdio.h>

int scanfFile()
{
    FILE *fp;
    char str[100];
    fp = fopen("./file.c", "r");
    fscanf(fp, "%s", str);

    printf("%s\n", str);
    fclose(fp);

    return 0;
}
int getsFile()
{
    FILE *fp;
    char str[100];
    fp = fopen("./file.c", "r");
    // fscanf(fp, "%s", str);
    fgets(str, 100, fp);

    printf("%s\n", str);
    fclose(fp);

    return 0;
}
int readFile()
{
    FILE *fp;
    char str[100];
    fp = fopen("./file.c", "r");
    while (fgets(str, 1024, fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}
int main()
{
    return readFile();
}