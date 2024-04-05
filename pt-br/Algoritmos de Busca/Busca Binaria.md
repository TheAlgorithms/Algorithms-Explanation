# Busca Binária (algoritmo de divisão e conquista)

#### Declaração do problema

Dada uma matriz classificada de n elementos, escreva uma função para pesquisar o índice de um determinado elemento (destino)

#### Abordagem

- Pesquise a matriz dividindo-a ao meio repetidamente.
- Considere inicialmente a matriz real e escolha o elemento no índice do meio
- Mantenha um índice mais baixo, ou seja, 0, e um índice mais alto, ou seja, tamanho da matriz
- Se for igual ao elemento de destino, retorne o índice
- Caso contrário, se for maior do que o elemento de destino, considere apenas a metade esquerda da matriz. (índice inferior = 0, superior = médio - 1)
- Caso contrário, se for menor que o elemento de destino, considere apenas a metade direita da matriz. (índice inferior = meio + 1, superior = comprimento da matriz)
- Retorne -1 se o elemento de destino não for encontrado na matriz (Caso Base: Se o índice inferior for maior ou igual ao índice superior)

#### Complexidade de tempo

`O(log n)` Pior Caso
`O(1)` Melhor Caso (se o elemento do meio da matriz inicial for o elemento de destino)

#### Complexidade de espaço

`O(1)` Para abordagem iterativa
`O(log n)` Para abordagem recursiva devido à pilha de chamadas de recursão

#### Exemplo

```python
arr = [1, 2, 3, 4, 5, 6, 7]

# alvo = 2
# Inicialmente, o elemento no índice do meio é 4, que é maior do que 2.
# Portanto, procuramos a metade esquerda do
# matriz, ou seja, [1,2,3].
# Aqui encontramos o elemento do meio igual ao elemento de destino,
# portanto, retornamos seu índice, ou seja, 1.

alvo = 9
# A pesquisa binária deve retornar -1, pois 9 não está presente na matriz
```

#### Explicação em vídeo

[Um vídeo CS50 explicando o algoritmo de pesquisa binária](https://www.youtube.com/watch?v=5xlIPT1FRcA)

#### Explicação em formato de animação

- [Tute Board](https://boardhub.github.io/tute/?wd=binarySearchAlgo2)
