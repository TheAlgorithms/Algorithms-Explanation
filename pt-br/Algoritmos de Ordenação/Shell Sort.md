# Shell Sort

#### Declaração do problema

Dada uma matriz não classificada de n elementos, escreva uma função para classificar a matriz

#### Abordagem

- comece com a lacuna inicial, g
- percorrer os primeiros (n - g) elementos na matriz
- compare o elemento com o próximo elemento que está a g distância
- troque os dois elementos se o primeiro elemento for maior
- diminua o intervalo e repita até o intervalo = 1

#### Complexidade de tempo
A complexidade do tempo depende das sequências de lacunas.
As complexidades de tempo abaixo são baseadas nas sequências de lacunas de n / 2 ^ k.

- `O(n^2)` Desempenho de pior caso
- `O(n)` Melhor caso de desempenho
- `O(n^2)` Desempenho médio

#### Complexidade do Espaço

`O(1)` Pior caso

#### Nome do fundador

Donald Shell

#### Exemplo

```
arr[] = {61, 109, 149, 111, 34, 2, 24, 119}
Lacuna inicial: 4

1. Índice = 0, Índice do próximo elemento = 4
2. 61> 34, troque 61 e 34
3. A matriz agora é {34, 109, 149, 111, 61, 2, 24, 119}

4. Índice = 1, índice do próximo elemento = 5
5. 109> 2, troque 109 e 2
6. A matriz agora é {34, 2, 149, 111, 61, 109, 24, 119}

7. Índice = 2, Índice do próximo elemento = 6
8. 149> 24, troca 149 e 24
9. A matriz agora é {34, 2, 24, 111, 61, 109, 149, 119}

10. Índice = 3, Índice do próximo elemento = 7
11. 111 <119, não faça nada e continue

12. Divida a lacuna por 2 e repita até lacuna = 1
```

#### Explicação em vídeo

[Um vídeo explicando o algoritmo de classificação Shell](https://www.youtube.com/watch?v=H8NiFkGu2PY)

#### Outras

A classificação de shell também é conhecida como classificação de incremento decrescente.
