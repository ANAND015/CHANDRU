

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *source,*target;
    source=fopen("kec1.txt","w");
    fprintf(source,"C is a robust language");
    fclose(source);
    source=fopen("kec1.txt","r");
    target=fopen("kec2,txt","w");
    while((ch=fget(source))!=EOF)
    {

        fput(ch,target);
    }
    fclose(source);
    fclose(target);
    target=fopen("kec2","r");
    while((ch=fget())!=EOF)
          {

              printf("%c",ch);
          }
          fclose(target);
          return 0;
}
