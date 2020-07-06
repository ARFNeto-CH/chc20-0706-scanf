#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char** argv)
{
    teste();
    return 0;
};


int teste()
{
    while (1)
    {
        printf("a,b,c: ");
        int a = 0, b = 0, c = 0;
        printf("Entre 3 valores separados por ',': ");
        int n = scanf("%d,%d,%d", &a, &b, &c);
        printf("scanf() retornou %d\n", n);
        printf("a,b,c = (%d,%d,%d)\n", a, b, c);
        if (n == 0)
        {   // se nao leu nada deve ter algo errado pra ler
            //char c;
            //while ((c = getchar()) != '\n' && c != EOF);
            while (!feof(stdin))
            {
                char c = fgetc(stdin);
                if (isprint(c))
                    printf("Para ler ainda: c = '%c', codigo = %d\n", c, c);
                else
                    printf("Para ler ainda: codigo = %d\n", c);

                if (c == '\n') break;
            };
        };  // if()
    };  // while()
};


