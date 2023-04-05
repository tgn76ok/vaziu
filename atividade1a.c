#include <stdio.h>
struct agenda
{
    char nome[50];
    char telefone[13];
    
};




int main()
{
    struct agenda agenda1[10];

    
    for (int i = 0; i < 10; i++)
    {
        printf("digite o nome que voce quer: \n");
        fflush(stdin);
        scanf("%s",agenda1[i].nome);
        printf("digite o telefone que voce quer: \n");
        scanf("%s",agenda1[i].telefone);
    }
    
    return 0;
}
