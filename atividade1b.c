#include <stdio.h>
#define tamalho 10

typedef struct 
{
    char nome[50];
    char telefone[13];
    
}agenda;
int main(int argc, char const *argv[])
{
    
    
    

    agenda *pont = (agenda*) malloc(sizeof(agenda)*tamalho);
    for (int i = 0; i < tamalho; i++)
    {
        printf("digite o nome que voce quer: \n");
        fflush(stdin);
        
        scanf("%s",pont[i].nome);
        printf("digite o telefone que voce quer: \n");
        fflush(stdin);
        scanf("%s",pont[i].telefone);
    }
    free(pont);
    return 0;
}
