#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *maskify (char *masked, const char *string)
{
	*masked = *string; // write to masked
  
  int len = strlen(string) , i = 0;
  for(i = 0; i < len - 4; i++){
    *masked++ = '#';
  }
 
  for(int j = 0; j < 4-1; j++){
    *masked++;
  }

  *masked = '\0';

    printf("%s\n", masked);
  
	return masked; // return it
}
 
int main()
{
    char *masked = malloc(sizeof(char)*20);
    const char *string = "BIBEKRAWAL";
    maskify(masked, string);

    free(masked);

}