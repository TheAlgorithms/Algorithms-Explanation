# Busca Linear

#### Declaração do problema

Dada uma matriz de `n` elementos, escreva uma função para pesquisar o índice de um determinado elemento (destino).

#### Abordagem

- Comece a iterar com o primeiro elemento da matriz.
- Compare-o com o elemento de destino.
- Se for igual ao elemento de destino, retorne o índice.
- Caso contrário, continue iterando.
- Retorne -1 se o elemento de destino não for encontrado na matriz.

#### Complexidade de tempo

- `O(n)` pior caso
- `O(1)` Melhor Caso (Se o primeiro elemento da matriz for o elemento de destino)

#### Complexidade de espaço

`O(1)`

#### Exemplo

```python
arr = [1, 3, 9, 5, 0, 2]

alvo = 5
# A pesquisa linear deve retornar o índice 3, pois 5 está no índice 3

alvo = 6
# A pesquisa linear deve retornar -1, pois 6 não está presente na matriz
```

#### Explicação em vídeo

[Um vídeo CS50 explicando o algoritmo de pesquisa linear](https://www.youtube.com/watch?v=CX2CYIJLwfg)

#### Explicação em formato de animação

- [Tute Board](https://boardhub.github.io/tute/?wd=linearSearchAlgo)
