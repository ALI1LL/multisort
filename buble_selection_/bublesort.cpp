#include <iostream>


using namespace std;


// Define o tamanho máximo do vetor
const int MAX_TAMANHO = 50;


// Função para imprimir os elementos do vetor
void printArray(int array[], int n) {
    for (int i = 0; i < n; i++)
        cout << array[i] << " "; // Imprime cada elemento
    cout << endl; // Nova linha após imprimir todos os elementos
}


// Função para ordenar o vetor usando Insertion Sort
void insertionSort(int array[], int n) {
    for (int i = 1; i < n; i++) { // Começa do segundo elemento
        int key = array[i]; // O elemento a ser inserido
        int j = i - 1; // Índice do último elemento da parte ordenada
        // Move os elementos da parte ordenada que são maiores que o key uma posição para frente
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key; // Insere o key na posição correta
    }
}


// Função para ordenar o vetor usando Selection Sort
void selectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) { // Percorre todo o vetor
        int minIndex = i; // Assume que o primeiro elemento é o menor
        for (int j = i + 1; j < n; j++) { // Procura o menor elemento
            if (array[j] < array[minIndex]) {
                minIndex = j; // Atualiza o índice do menor elemento
            }
        }
        swap(array[i], array[minIndex]); // Troca o menor elemento com o primeiro não ordenado
    }
}


// Função para ordenar o vetor usando Bubble Sort
void bubbleSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) { // Percorre o vetor várias vezes
        for (int j = 0; j < n - i - 1; j++) { // Compara elementos adjacentes
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]); // Troca se estiver na ordem errada
            }
        }
    }
}


int main() {
    int vetor[MAX_TAMANHO]; // Declara o vetor
    int n; // Variável para armazenar a quantidade de elementos


    // Solicita ao usuário a quantidade de elementos
    cout << "Digite a quantidade de elementos (1 a " << MAX_TAMANHO << "): ";
    cin >> n;


    // Verifica se a quantidade é válida
    if (n < 1 || n > MAX_TAMANHO) {
        cout << "Quantidade inválida!" << endl;
        return 1; // Saída com erro
    }


    // Solicita ao usuário para inserir os elementos do vetor
    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i]; // Lê cada elemento
    }


    // Imprime o vetor original
    cout << "Array original: ";
    printArray(vetor, n);


    // Escolhe o algoritmo de ordenação baseado no tamanho do vetor
    if (n >= 1 && n <= 20) {
        insertionSort(vetor, n); // Usa Insertion Sort
        cout << "Após Insertion Sort: ";
    } else if (n >= 21 && n <= 30) {
        bubbleSort(vetor, n); // Usa Bubble Sort
        cout << "Após Bubble Sort: ";
    } else {
        selectionSort(vetor, n); // Usa Selection Sort
        cout << "Após Selection Sort: ";
    }


    // Imprime o vetor ordenado
    printArray(vetor, n);


    return 0; // Finaliza o programa
}
    //Alunos: Ali e lwara
