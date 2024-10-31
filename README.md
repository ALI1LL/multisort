# Documentação do Código: Ordenação de Vetores em C++

## Descrição Geral
Este programa em C++ permite ao usuário inserir um vetor de números inteiros e escolher um algoritmo de ordenação para ordenar o vetor. 
Dependendo do número de elementos inseridos, o programa utiliza um dos três algoritmos de ordenação: Insertion Sort, Bubble Sort ou Selection Sort.

## Estrutura do Código

### Definições de Constantes
- **MAX_TAMANHO**: Define o tamanho máximo do vetor (50 elementos).

### Funções
- **printArray(int array[], int n)**: Imprime os elementos do vetor.
- **insertionSort(int array[], int n)**: Ordena o vetor usando o algoritmo Insertion Sort.
- **selectionSort(int array[], int n)**: Ordena o vetor usando o algoritmo Selection Sort.
- **bubbleSort(int array[], int n)**: Ordena o vetor usando o algoritmo Bubble Sort.

### Função Principal
- **int main()**: Ponto de entrada do programa que gerencia a interação com o usuário e chama as funções de ordenação.

## Detalhamento das Funções

1. **void printArray(int array[], int n)**
   - **Descrição**: Imprime os elementos do vetor.
   - **Parâmetros**:
     - `array[]`: Vetor de inteiros a ser impresso.
     - `n`: Número de elementos no vetor.
   - **Exemplo de uso**:
     ```cpp
     printArray(vetor, n);
     ```

2. **void insertionSort(int array[], int n)**
   - **Descrição**: Ordena o vetor usando o algoritmo Insertion Sort.
   - **Parâmetros**:
     - `array[]`: Vetor de inteiros a ser ordenado.
     - `n`: Número de elementos no vetor.
   - **Exemplo de uso**:
     ```cpp
     insertionSort(vetor, n);
     ```

3. **void selectionSort(int array[], int n)**
   - **Descrição**: Ordena o vetor usando o algoritmo Selection Sort.
   - **Parâmetros**:
     - `array[]`: Vetor de inteiros a ser ordenado.
     - `n`: Número de elementos no vetor.
   - **Exemplo de uso**:
     ```cpp
     selectionSort(vetor, n);
     ```

4. **void bubbleSort(int array[], int n)**
   - **Descrição**: Ordena o vetor usando o algoritmo Bubble Sort.
   - **Parâmetros**:
     - `array[]`: Vetor de inteiros a ser ordenado.
     - `n`: Número de elementos no vetor.
   - **Exemplo de uso**:
     ```cpp
     bubbleSort(vetor, n);
     ```

## Função Principal
**int main()**
- **Descrição**: Gerencia a entrada do usuário e controla o fluxo do programa. Solicita a quantidade de elementos e os valores 
a serem armazenados no vetor, além de escolher o algoritmo de ordenação com base na quantidade de elementos.

### Fluxo do Programa:
1. Solicite a quantidade de elementos e valide a entrada.
2. Leia os elementos do vetor.
3. Chame a função `printArray()` para mostrar o vetor original.
4. Escolha e aplique o algoritmo de ordenação adequado.
5. Imprima o vetor ordenado.

## Exemplo de Uso
1. Compile o código utilizando um compilador C++.
2. Execute o programa. O usuário será solicitado a inserir o número de elementos e os valores do vetor.
3. O programa ordenará os elementos utilizando o algoritmo escolhido e imprimirá o vetor original e o vetor ordenado.

## Considerações Finais
Este programa é uma ótima introdução à implementação de algoritmos de ordenação em C++. Os algoritmos escolhidos são comuns e 
oferecem uma boa variedade em termos de eficiência, dependendo do tamanho do vetor. A escolha do algoritmo com base no número de elementos é 
uma abordagem interessante para demonstrar.

## Alunos
- **Ali**
- **Lwara**
