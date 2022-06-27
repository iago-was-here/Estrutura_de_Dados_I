# Estrutura de Dados I (3° Período)

## Ponteiros
- Um ponteiro é uma variável que contém um endereço de memória, geralmente a posição de outra variável na memória. Logo dizemos que a primeira variavél aponta para a segunda.
- Declaração:
  - tipo_variavel *nome_variavel
  - operador & devolve o endereço do ponteiro.
  - operador * devolve o valor do ponteiro, ou o valor contido na variavel para a qual ele aponta.
- Aritmetica de ponteiros:
  - Existem duas operações adição ou subtração.
  - Devem ser feitas considerando que cada vez que incrementamos ou decrementamos um ponteiro ele apontara para o anterior ou proximo elemento de seu tipo base(int, float, double, char).
- Comparação de ponteiros: pode ser utilizada quando dois ou mais ponteiros apontam para um objeto em comum.
- Alocação dinamica de memoria: 
  - Utilizada quando não se sabe a quantidade de memória necessária para a execução do programa.
  - Gerenciada pelas funções malloc e free (#stdlib):
    - malloc(): requisita memória - void * malloc ( size_t numero de bytes );
    - free(): libera a memória alocada - void * malloc ( size_t numero de bytes );