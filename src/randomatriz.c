#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "randomatriz.h"

void initMatriz(int TAM){

 int sum, matriz[TAM][TAM];
 srand(time(NULL));
 int i, j;
for(i=0; i < TAM; i++){
    for(j=0; j < TAM; j++){
  matriz[i][j]= rand()%99;
    printf("%d", matriz[i][j]);
 }
        printf("/n");
    }
    sum = matriz[0][0];
    
    while((j==(TAM-1)) && ((TAM-1)>i)){
     if((j==0)&& (i==0)){                           //Posição da Matriz localizada na beirada da esquerda e em qualquer linha
         if(matriz[i][j+1]>matriz[i+1][j]){         // Caminho para DIREITA
             matriz[i][j]= -1;
             j++;
         }
        else if(matriz[i+1][j]>matriz[i][j+1]){     // Caminho para BAiXO
            sum += matriz[i+1][j];
            matriz[i][j]= -1;
            i++;
        }
     }

    else if ((j>0)&&((TAM-1)>j)&&((TAM-1)>i)){       //Posição da Matriz localizada nas linhas e colunas exceto nas posições das beiradas
       if(((matriz[i][j+1]> matriz[i+1][j])&&(matriz[i][j+1]>matriz[i][j-1]))){        //Caminho da DIREITA
            sum += matriz[i][j+1];
            matriz[i][j]= -1;
            j++;
        }  
    }
       else if(((matriz[i+1][j]> matriz[i][j+1])&&(matriz[i+1][j]>matriz[i][j-1]))){   //Caminho para BAIXO
                sum += matriz[i+1][j];
                matriz[i][j]= -1;
            i++;
       }      
       else if(((matriz[i][j-1]> matriz[i+1][j])&&(matriz[i][j-1]>matriz[i][j+1]))){   //Caminho para ESQUERDA 
                sum += matriz[i][j-1];
                matriz[i][j]= -1;
            j--;
       }     
    else if(((TAM-1)==j)&&((TAM-1)>j)){           //Posição da Matriz localizada na beirada da direita e em qualquer linha
        if(matriz[i+1][j]>matriz[i][j-1]){        //Caminho para BAIXO
            sum += matriz[i+1][j];
            matriz[i][j]=-1;
            i++;
        }
        else if(matriz[i][j-1]>matriz[i+1][j]){    //Caminho para ESQUERDA 
            sum += matriz[i][j-1];
            matriz[i][j]= -1;
            j--;
        }

    }   
}     
    if(TAM-1==i){                     //Linha Final só percorre para direita
        sum += matriz[i][j+1];
        j++;
    }
printf("\n The sum of the path is : %d \n",sum);

}



    