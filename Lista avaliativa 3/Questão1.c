#include <stdio.h>
#include <string.h>

int main(){

    char romano[13];
    int valorAtual = 0;
    int resultado = 1;
    int tamanho;
    int BinarioX;
    int Binario[32];
    int Hexadecimal = 0;
    int b = 0;


 fflush(stdin);
 fgets(romano, 13, stdin);
 romano[strcspn(romano,"\n")] = 0;

 fflush(stdin);
 tamanho = strlen(romano);
 


 for(int i = 0; i < tamanho; i++){
    if(romano[i] == 'C' && romano[i+1] =='M' && valorAtual < resultado){
        valorAtual = valorAtual + 900;
        resultado = resultado + 900;
        i = i + 1;
    
    }else if(romano[i] == 'C' && romano[i+1] =='D' && valorAtual < resultado){
        valorAtual = valorAtual + 400;
        resultado = resultado + 400;
        i = i + 1;
    
    }else if(romano[i] == 'X' && romano[i+1] =='C' && valorAtual < resultado){
        valorAtual = valorAtual + 90;
        resultado = resultado + 90;
        i = i + 1;
    
    }else if(romano[i] == 'X' && romano[i+1] =='L' && valorAtual < resultado){
        valorAtual = valorAtual + 40;
        resultado = resultado + 40;
        i = i + 1;

    }else if(romano[i] == 'I' && romano[i+1] =='X' && valorAtual < resultado){
        valorAtual = valorAtual + 9;
        resultado = resultado + 9;
        i = i + 1;

    }else if(romano[i] == 'I' && romano[i+1] =='V' && valorAtual < resultado){
        valorAtual = valorAtual + 4;
        resultado = resultado + 4;
        i = i + 1;
        
    }else if(romano[i] == 'I' && valorAtual < resultado){
        valorAtual = valorAtual + 1;
        resultado = resultado + 1;
        
    }else if(romano[i] =='V' && valorAtual < resultado){
        valorAtual = valorAtual + 5;
        resultado = resultado + 5;
        
    }else if(romano[i] == 'X' && valorAtual < resultado){
         valorAtual = valorAtual + 10;
         resultado = resultado + 10;
        
    }else if(romano[i] == 'L' && valorAtual < resultado){
        valorAtual = valorAtual + 50;
        resultado = resultado + 50;
        
    }else if(romano[i] == 'C' && valorAtual < resultado){
        valorAtual = valorAtual + 100;
        resultado = resultado + 100;
        
    }else if(romano[i] == 'D' && valorAtual < resultado){
        valorAtual = valorAtual + 500;
        resultado = resultado + 500;
        
    }else if(romano[i] == 'M' && valorAtual < resultado){
        valorAtual = valorAtual + 1000;
        resultado = resultado + 1000;
        
    }else {
        printf("ERRO\n");
    }
 }
 resultado = resultado -1;

    BinarioX = resultado;
    Hexadecimal = resultado;

//convertendo

 printf("%s na base 2: ", romano);
  if(Binario == 0){
    printf("0");
  }
  
  while (BinarioX > 0){
    Binario[b] = BinarioX % 2;
     BinarioX = BinarioX / 2;
     b++;
  }

    for(int k = b - 1; k >= 0; k--){
      printf("%d",Binario[k]);
    }
    printf("\n");

  printf("%s na base 10: %d\n", romano, resultado);
  printf("%s na base 16: %x\n", romano, Hexadecimal);



    return 0;
}