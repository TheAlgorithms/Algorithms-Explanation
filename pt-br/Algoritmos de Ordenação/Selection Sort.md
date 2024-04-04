# Classificação de Seleção

#### Declaração do problema

Dada uma matriz não classificada de n elementos, escreva uma função para classificar a matriz

#### Abordagem

- selecione o menor elemento da matriz
- coloque-o no início da matriz
- em seguida, selecione a menor matriz da lista não classificada restante
- acrescente-o à matriz classificada no início
- continue fazendo isso para cada elemento da matriz
- repita o processo acima n vezes

#### Complexidade de tempo

- `O(n^2)` Desempenho de pior caso
- `O(n^2)` Desempenho de melhor caso
- `O(n^2)` Desempenho médio

#### Complexidade do Espaço

`O(1)` Pior caso

#### Exemplo

```
arr[] = {80, 10, 40, 30}
Índices: 0 1 2 3

1. Índice = 0
Selecione o número mínimo da matriz (entre o índice 0-3), ou seja, 10
2. Troque 10 e 80 (arr[0])
3. A matriz agora é {10, 80, 40, 30}

4. Índice = 1
Selecione o número mínimo da matriz (entre os índices 1-3), ou seja, 30
5. Troque 30 e 80 (arr[1])
6. A matriz agora é {10, 30, 40, 80}

7. Índice = 2
Selecione o número mínimo da matriz (entre o índice 2-3), ou seja, 40
8. Troque 40 e 40 (arr[2])
9. A matriz agora é {10, 30, 40, 80}

A matriz agora está classificada.
```

#### Explicação em vídeo

[Um vídeo explicando o algoritmo de classificação por seleção](https://www.youtube.com/watch?v=f8hXR_Hvybo)

#### Explicação em formato de animação

- [Tute Board](https://boardhub.github.io/tute/?wd=selectSortAlgo2)
