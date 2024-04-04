# Bubble Sort

#### Declaração do problema

Dada uma matriz não classificada de n elementos, escreva uma função para classificar a matriz

#### Abordagem

- selecione o primeiro elemento da matriz
- compare-o com seu próximo elemento
- se for maior do que o próximo elemento, troque-os
- mais não faça nada
- continue fazendo isso para cada índice da matriz
- repita o processo acima n vezes.

#### Complexidade de tempo

`O(n^2)` Desempenho de pior caso

`O(n)` Melhor caso de desempenho

`O(n^2)` Desempenho médio

#### Complexidade do Espaço

`O(1)` Pior caso

#### Nome do fundador

- O termo “Bubble Sort” foi a primeira vez usado por Iverson, K em 1962.

#### Exemplo

```
arr[] = {10, 80, 40, 30}
Índices: 0 1 2 3

1. Índice = 0, Número = 10
2. 10 <80, não faça nada e continue

3. Índice = 1, Número = 80
4. 80> 40, troque 80 e 40
5. A matriz agora é {10, 40, 80, 30}

6. Índice = 2, Número = 80
7. 80> 30, troque 80 e 30
8. A matriz agora é {10, 40, 30, 80}

Repita as etapas acima novamente

arr[] = {10, 40, 30, 80}
Índices: 0 1 2 3

1. Índice = 0, Número = 10
2. 10 <40, não faça nada e continue

3. Índice = 1, Número = 40
4. 40> 30, troque 40 e 30
5. A matriz agora é {10, 30, 40, 80}

6. Índice = 2, Número = 40
7. 40 <80, não faça nada
8. A matriz agora é {10, 30, 40, 80}

Repita as etapas acima novamente

arr[] = {10, 30, 40, 80}
Índices: 0 1 2 3

1. Índice = 0, Número = 10
2. 10 <30, não faça nada e continue

3. Índice = 1, Número = 30
4. 30 <40, não faça nada e continue

5. Índice = 2, Número = 40
6. 40 <80, não faça nada

Como não há trocas nas etapas acima, isso significa que a matriz está classificada e podemos parar por aqui.
```

#### Explicação em vídeo

[Um vídeo explicando o algoritmo de classificação por bolha](https://www.youtube.com/watch?v=Jdtq5uKz-w4)

#### Outras

A classificação por bolha também é conhecida como classificação por afundamento.

#### Explicação em formato de animação

- [Tute Board](https://boardhub.github.io/tute/?wd=bubbleSortAlgo2)
