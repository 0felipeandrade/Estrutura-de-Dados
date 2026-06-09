#include <stdio.h>
#define MAX_TAM 10


/*A funcao de selecao foi feita baseada aos moldes da implementação do Nivio Ziviani
Só a implementaçao que faremos a partir do vetor 0 (acredito que seja mais amigável), diferente do Ziviani que gosta de começar pela posicao 1 dos vetores
Codigo feito em C*/



typedef struct TipoItem{

    int chave;

    /*Outros elementos desejados*/

}item;

void selection_sort(item a[],int *n){

    int menor;
    item x;

    for(int i = 0; i < *n-1; i++){

        menor = i;

        for(int j = i+1; j < *n; j++){

            if(a[j].chave < a[menor].chave){

                menor = j;
            }

        }

        x = a[menor];
        a[menor] = a[i];
        a[i] = x;
        
    }

    
}

int main(void){

    item vetor[MAX_TAM];

    int n = MAX_TAM;

    for(int i = 0; i < n; i++){

        scanf("%d",&vetor[i].chave);
        
    }

    selection_sort(vetor, &n);

    for(int i = 0; i < n; i++){

        printf("%d ", vetor[i].chave);
        
    }

    printf("\n");

    return 0;
}