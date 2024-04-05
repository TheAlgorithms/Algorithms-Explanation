# Quick Sort (Ordenação rápida)

#### Declaração do problema

Dada uma matriz não classificada de n elementos, escreva uma função para classificar a matriz.

#### Aproximação

- Faça o pivô de valor de índice mais à direita
- particionar a matriz usando o valor dinâmico
- partição esquerda quicksort recursivamente
- partição direita quicksort recursivamente

#### Complexidade de tempo

- `O(n^2)` Desempenho de pior caso
- `O(n log n)` Desempenho de melhor caso
- `O(n log n)` Desempenho médio

#### Complexidade do Espaço

`O(log (n))` Pior caso

#### Nome do fundador

Tony Hoare em 1959.

#### Exemplo

```
arr[] = {10, 80, 30, 90, 40, 50, 70}
Índices: 0 1 2 3 4 5 6

baixo = 0, alto = 6, pivô = arr[h] = 70
Inicialize o índice do elemento menor, i = -1

Atravesse elementos de j = baixo para alto-1
j = 0: como arr [j] <= pivô, faça i ++ e troque (arr[i], arr[j])
i = 0
arr [] = {10, 80, 30, 90, 40, 50, 70} // Sem alteração como i e j
                                     // são iguais

j = 1: como arr[j] > pivô, não faça nada
// Sem alteração em i e arr[]

j = 2: Como arr [j] <= pivô, faça i ++ e troque (arr [i], arr [j])
i = 1
arr [] = {10, 30, 80, 90, 40, 50, 70} // Trocamos 80 e 30

j = 3: Como arr[j] > pivô, não faça nada
// Sem alteração em i e arr[]

j = 4: Como arr [j] <= pivô, faça i ++ e troque (arr[i], arr[j])
i = 2
arr[] = {10, 30, 40, 90, 80, 50, 70} // 80 e 40 trocados
j = 5: Como arr[j] <= pivô, faça i ++ e troque arr[i] por arr[j]
i = 3
arr[] = {10, 30, 40, 50, 80, 90, 70} // 90 e 50 trocados

Saímos do loop porque j agora é igual a high-1.
Finalmente, colocamos o pivô na posição correta, trocando
arr[i + 1] e arr[alto] (ou pivô)
arr[] = {10, 30, 40, 50, 70, 90, 80} // 80 e 70 trocados

Agora, 70 está em seu lugar correto. Todos os elementos menores que
70 estão antes dele e todos os elementos maiores que 70 estão depois
isto.
```

#### Explicação em vídeo

[Um vídeo explicando o algoritmo de classificação rápida](https://www.youtube.com/watch?v=COk73cpQbFQ)
