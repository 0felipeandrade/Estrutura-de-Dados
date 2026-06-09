#include <stdio.h>
#define MAX_TAM 10


typedef struct item{

    int chave;
    /*Outros elementos desejados*/

}item;



void insertion_sort(item a[], int n){

    item x;
    int j;

    for(int i = 2; i < n; i++){
        x = a[i];
        j = i-1;
        a[0] = x;

        while(a[j].chave > x.chave){

            a[j+1] = a[j];
            j--;

        }

        a[j+1] = x;


    }

}


int main(void){

    int n = MAX_TAM+1;

    item vetor[n];

    for(int i = 1; i < n; i++){

        scanf("%d",&vetor[i].chave);

    }

    insertion_sort(vetor,n);

    for(int i = 1; i < n; i++){

       printf("%d ",vetor[i].chave);

    }

    printf("\n");

    return 0;
}