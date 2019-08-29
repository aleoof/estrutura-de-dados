#include <stdio.h>
#include <stdlib.h>

struct No{
    int number; // cointeudo do nó
    struct No *l; // lado esquedo do nó
    struct No *r; // lado direito do nó
};
typedef struct No node;

int main()
{
}

void criarArvore(node **pRaiz){
    *pRaiz = NULL;
}

void insercao(node **pRaiz, int number2){
    if(pRaiz == NULL){
        *pRaiz = (node *)malloc(sizeof(node));
        (*pRaiz) -> l =NULL;
        (*pRaiz) -> r =NULL;
        (*pRaiz) -> number =number2;
    }else {
        if (number2 <((*pRaiz) -> number))
        {
            insercao(&((*pRaiz)->l), number2);
        }else {
            insercao(&((*pRaiz)->r), number2);
        }
    }
}

