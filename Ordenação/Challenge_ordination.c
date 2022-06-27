#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int splitMatrix(char *string, char **matrix) {
   
   int i=0;

   // Extract the first token
   char * token = strtok(string, " ");
   // loop through the string to extract all other tokens
   while( token != NULL ) {
      //printf( " %s\n", token ); //printing each token
      strcpy(matrix[i++],token);
      token = strtok(NULL, " ");
   }

   return i;
}

void ordenaMatrix(char **Matrix, int size){
    
    char aux[50];
    for(int i = 0; i < size; i++){
        strcpy(aux,Matrix[i]);
        int j = i - 1;

        while (j >= 0 && strcmp(Matrix[i],Matrix[j]) < 0)
        {
           strcpy(Matrix[j+1],Matrix[j]);
           j = j - 1;
        }

        strcpy(Matrix[j+1], aux);
    }
}

int main(void)
{
     char string[50] = "A Dona Aranha Subiu Pela Parede";
    int i, line=50,col=50;

    char **m = (char **)malloc(line*sizeof(char *));
    for(i=0;i<line;i++)
        m[i]=(char *)malloc(col*sizeof(char));
   

   int size = splitMatrix(string, m);

   ordenaMatrix(m, size);
   
   for(i=0; i < size; i++){
     printf("%s\n", m[i]);
   }

   for(i=0;i<line;i++)
       free(m[i]);
   
   free(m);
    return 0;
}
