#include <stdio.h>
int main()
{
    int a, b;
    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");
    char ch;
    while ((ch = getc(in)) != EOF)
    {
        putc(ch, out);
    }
    fclose(in);
    fclose(out);
    return 0;
}
