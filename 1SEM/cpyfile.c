#include <stdio.h>

int main()
{
    FILE *inp = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    char buf;
    do
    {
        buf = fgetc(inp);
        if(buf == EOF)
            break;
            
        fputc(buf, out);

    }while(1);

    fclose(inp);
    fclose(out);
    
}