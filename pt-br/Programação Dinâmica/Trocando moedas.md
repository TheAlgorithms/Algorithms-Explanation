# Trocando moedas

#### Declaração do problema

Dado um valor `N`, se quisermos fazer a mudança para` N` centavos, e temos um suprimento infinito de cada uma das moedas com valor de `S = {S1, S2, .., Sm}`, de quantas maneiras podemos fazer o troco? A ordem das moedas não importa.

#### Abordagem

Seja `dp[i]` o comprimento da moeda de troca do prefixo `N[1..i]`. Nossa resposta é `dp[N]`. Preenchemos `dp[0]` como 1 porque só existe uma maneira de obter 0 moedas (não escolhemos moedas).

Agora vamos tentar calcular `dp[i]` para qualquer `i`. `dp[0..i]` armazenará cada subproblema de `0` a` N`. É por isso que a resposta será `dp[N]`. Primeiro, precisamos iterar cada tipo de moeda para escolhê-los um por um. Em seguida, iteramos os subproblemas da moeda atual que escolhemos antes para `N` centavos. É por isso que devemos fazer a tabela dp com colunas `N`.

Estes são os códigos para o algoritmo de troca de moeda:

```
para coin_val em S:
  para i no intervalo (coin_val, n + 1):
    dp[i] + = dp[i - coin_val]
```

Na segunda iteração, para cada centavo que pode ser trocado, nós o pegamos subtraindo a i-ésima coluna pelo valor da moeda que pegamos e adicionando-o à coluna atual. Portanto, `dp[i]` armazenará o subproblema atual.

#### Complexidade de tempo
`O(n * s)` em qualquer caso

#### Complexidade do Espaço
`O(n)` - implementação simples. Precisamos apenas do array 1D para armazenar a resposta.

#### Exemplo
Digamos que temos 3 tipos de moeda `[1,2,3]` e queremos mudar para `7` centavos. Portanto, definiremos nossa tabela assim.

```
[1, 0, 0, 0, 0, 0, 0, 0]
```

0ª coluna armazenará 1, pois só há uma maneira de obter 0 centavos.

* Para a primeira iteração, pegamos uma moeda que tem o valor 1. Então, para todos os subproblemas, há apenas uma maneira de fazer alterações. Por 7 centavos, a única maneira é `{1,1,1,1,1,1,1}`. Na iteração final, nossa tabela fica como:

```
[1, 1, 1, 1, 1, 1, 1, 1]
```

* Para a segunda iteração, pegamos uma moeda com o valor 2. A partir daqui, todos os subproblemas que podem ser divididos por 2 armazenarão outra nova maneira de fazer alterações. Então, quando a iteração parou na 2ª coluna, será como `dp[2] + = dp[0]`. Sabemos que `dp[0]` armazenou um valor de 1. Portanto, dp[2] armazenará o valor de `1 + 1 = 2`. A partir daqui sabemos que por 2 centavos, existem 2 maneiras `{1,1}` e `{2}`. E essa operação vai continuar. Agora nossa mesa é como:

```
[1, 1, 2, 2, 3, 3, 4, 4]
```

4 maneiras de ganhar 7 centavos usando o valor de 1 e 2. `{{1,1,1,1,1,1,1}, {1,1,1,1,1,2}, {1,1, 1,2,2}, {1,2,2,2}}`

* Para a iteração final (3ª iteração), pegamos uma moeda que tem o valor 3. Como antes, agora todas as colunas que podem ser divididas por 3 serão armazenadas de outra maneira. E o resultado final será assim:

```
[1, 1, 2, 3, 4, 5, 7, 8]
```

Portanto, a resposta final é **8**. 8 maneiras de fazer troco de 7 centavos usando todos os tipos de moedas. `{{1,1,1,1,1,1,1}, {1,1,1,1,1,2}, {1,1,1,2,2}, {1,2,2,2}, {1,1,1,1,3}, {1,3,3}, {2,2,3}, {1,1,2,3}}`

#### Explicação em vídeo

[Total de maneiras exclusivas de fazer a mudança em back to back SWE](https://www.youtube.com/watch?v=DJ4a7cmjZY0)
