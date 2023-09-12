#include <stdio.h>

int main(int argc, char * argv[]) {
    int op;
    float n1,n2,operacao;
    //entrada de dados
    printf("\n\ninforme o numero 1:  ");
    scanf("%f",&n1 );
    printf("\n\ninfrome o numero 2:  ");
    scanf("%f",&n2);
    
    do{
        printf("\n\n todas as opcoes");
        printf("\n 1 - soma");
        printf("\n 2 - sub");
        printf("\n 3 - mult");
        printf("\n 4 - div");
        printf("\n 5 - sair");
    
        printf("\n\ninforme uma das 5 opcoes - ");
        scanf("%d",&op);
    
    //as oporeções dos dados (no case 4 teve uma condição sobro o 0 que ele não podera ser divido)
    
    
    switch(op){
        case 1:
            operacao=n1+n2;
            printf("\n\n soma : %.2f", operacao);
            break;
            
        case 2:
            operacao=n1-n2;
            printf("\n\n subtracao : %.2f", operacao);
            break;
            
        case 3:
            operacao=n1*n2;
            printf("\n\n multiplicao : %.2f", operacao);
            break;
        case 4:
            if(n2 != 0){
                operacao=n1/n2;
                printf("\n\n divisao : %.2f", operacao);
            }else{
                printf("\n divisao invalida, o numero nao pode ser divido por numero zero");
            }
            break;
        default:
            printf("invalido tentar, outra opcao");
    }
    
    }while(op !=5);
    
    
    return 0;
}
