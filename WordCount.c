#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpr;
    char name[100] = {0};//�洢·����
    int ch;
    int total = 0;

    scanf("%s",name);

    if((fpr = fopen(name,"r")) == NULL)
    {
        printf("Can't open %s\n",name);
        exit(1);
    }
    while((ch = fgetc(fpr)) != EOF)
    {
       
       total++;
    }
    printf("�ַ��� = %d\n",total);
    return 0;
}

