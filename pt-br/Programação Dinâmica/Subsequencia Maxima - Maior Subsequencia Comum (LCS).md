# Subsequência Maxima / Maior Subsequência Comum

#### Declaração do problema

Dadas duas strings/palavras, `S` e `T`, encontre o comprimento da maior subsequência comum.

#### Abordagem

Considere uma array/matriz `dp[i][j]` que representa o comprimento da maior subsequência comum com os prefixos `S[1..i]` e `T[1..j]`. Nossa resposta pode ser representada por `dp[|S|][|T|]`, visto que o prefixo de comprimento da string/palavra, é a própria string.

Os valores de `dp[0][i]` e `dp[i][0]` são `0` para qualquer valor de `i`, visto que possui um prefixo vazio (de valor `0` e resultado nulo).

Agora vamos calcular o `dp[i][j]` para qualquer valor de `i` e `j`. Para representar isso vamos dizer que `S[1..i] = *A` e `T[1..j] = *B`, onde `*` representa uma sequencia de letras qualquer (podem ter diferenças entre `S` e `T`), onde o valor `A` representa uma letra qualquer e `B` para qualquer letra DIFERENTE de `A`.
Como `A != B`, nosso comprimento da maior subsequência comum não inclui o valor de `A` ou `B` como ultimo caractere. Portanto é possivel utilizar estes caracteres para simplificar.
Se utilizarmos o valor de `A`, o tamanho da nossa subsequência será `dp[i - 1][j]` (visto que nossos prefixos serão `S[1..i - 1]` and `T[1..j]`). Agora, utilizando o valor de `B`, teremos os prefixos `S[1..i]` e `T[1..j - 1]`, então o tamanho desta subsequência será `dp[i][j - 1]`.
Entendendo que estamos procurando pelo comprimento da <b>MAIOR</b> subsequência comum, escolheremos o <b>VALOR MÁXIMO</b> de `dp[i][j - 1]` e `dp[i - 1][j]`.

Mas e se `S[1..i] = *A` e `T[1..j] = *A`? Podemos dizer que o comprimento da nossa subsequência é igual ao comprimento da subsequência com os prefixos iguais a `S[1..i - 1]` e `T[1..j - 1]`, <b>SOMADOS</b> a letra `A`. Então, é possivel dizer que `dp[i][j] = dp[i - 1][j - 1] + 1` se `S[i] = T[j]`.

Com esta lógica, podemos ver que é possivel preencher a tabela `dp` linha por linha e coluna por coluna. Portanto é possivel resumir o algoritmo nestes seguintes passos:

- Supondo que possuimos as strings `S` de comprimento N, e `T` de comprimento M (numeradas a partir de 1 a X). Vamos criar a tabela `dp`, de tamanho `(N + 1) x (M + 1)` a partir de 0.
- Agora vamos preencher a 0° linha e a 0° coluna de `dp` com o valor 0.
- Então podemos seguir o seguinte algoritmo:
    ```
        for i in range(1..N):
            for j in range(1..M):
                if(S[i] == T[j])
                    dp[i][j] = dp[i - 1][j - 1] + 1
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
    ```

#### Complexidade de tempo

`O(N * M)` em qualquer caso.

#### Complexidade de espaço

`O(N * M)` - implementação simples.
`O(min {N, M})` - para a implementação de duas camadas (`dp[i][j]` depende apenas das camadas `i` e `j`, resultando no armazenamento maximo de duas camadas). 

#### Exemplo

Deduzindo que as duas strings/palavras sejam `ABCB` e `BBCB`, montaremos a seguinte tabela:

```
# # A B C B
# 0 0 0 0 0
B 0 ? ? ? ?
B 0 ? ? ? ?
C 0 ? ? ? ?
B 0 ? ? ? ?
```

Agora, iniciaremos o preenchimento da tabela a partir da 1° linha.
Como `S[1] = A` e `T[1] = B`, o `dp[1][1]` será o valor máximo de `dp[0][1] = 0` e `dp[1][0] = 0`. Desta forma, `dp[1][1] = 0`.
Mas agora, se considerarmos `S[2] = B = T[1]`, então `dp[1][2] = dp[0][1] + 1 = 1`. O `dp[1][3]` será igual a `1`, visto que `A != C`, onde escolheremos `max{dp[1][2], dp[0][3]}` e `dp[1][4] = dp[0][3] + 1 = 1`.

```
# # A B C B
# 0 0 0 0 0
B 0 0 1 1 1
B 0 ? ? ? ?
C 0 ? ? ? ?
B 0 ? ? ? ?
```

Agora, basta preencher a outra parte da tabela:

```
# # A B C B
# 0 0 0 0 0
B 0 0 1 1 1
B 0 0 1 1 2
C 0 0 1 2 2
B 0 0 1 2 3
```

Sendo o comprimento da maior subsequência comum igual a: `dp[4][4] = 3`.

#### Explicação em vídeo

- [Vídeo do canal OnlineBioinfo Bioinformática explicando sobre o algoritmo LCS](https://youtu.be/cX_hFqA8wDI)
