# Insertion Sort

#### Declaração do problema

Dado um array de n elementos, escreva uma função para classificar o array em ordem crescente.

#### Abordagem

- Defina um índice de "chave", o subarray à esquerda do qual é classificado.
- Inicie a "chave" como 1, ou seja. o segundo elemento da matriz (como há apenas um elemento à esquerda do segundo elemento, que pode ser considerado como uma matriz classificada com um elemento).
- Se o valor do elemento na posição (chave - 1) for menor que o valor do elemento na posição (chave); incremento "chave".
- Caso contrário, mova os elementos do subarray classificado que são maiores que o valor do elemento na "chave" para uma posição à frente de sua posição atual. Coloque o valor do elemento em "chave" no vazio recém-criado.

#### Complexidade de tempo

- `О(n^2)` comparações, `О(n^2)` swaps - Pior caso
- Comparações `O(n)`, swaps `O(1)` - Melhor Caso

#### Complexidade de espaço

`O(1)` - (sem espaço extra necessário, classificação feita no local)

#### Exemplo

```
12, 11, 13, 5, 6

Vamos fazer um loop de i = 1 (segundo elemento da matriz) para 4 (Tamanho da matriz de entrada)

i = 1.
Como 11 é menor que 12, mova 12 e insira 11 antes de 12
11, 12, 13, 5, 6

i = 2.
13 permanecerá em sua posição, pois todos os elementos no subarray classificado são menores do que 13
11, 12, 13, 5, 6

i = 3.
5 moverá para o início,
e todos os outros elementos de 11 a 13 se moverão uma posição à frente de sua posição atual.
5, 11, 12, 13, 6

i = 4.
6 se moverá para a posição após 5,
e os elementos de 11 a 13 se moverão uma posição à frente de sua posição atual.
5, 6, 11, 12, 13 - matriz classificada
```

#### Explicação em vídeo

[Um vídeo CS50 explicando o algoritmo de pesquisa de inserção](https://www.youtube.com/watch?v=DFG-XuyPYUQ)
