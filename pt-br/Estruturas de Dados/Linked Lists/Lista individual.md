# Lista vinculada individualmente (Singly Linked List)

Singly Linked List é uma estrutura de dados linear e conectada feita de nós. Cada nó é composto de uma variável `dados` onde seu conteúdo é armazenado e um ponteiro para o próximo nó da lista. A Lista Vinculada tem um ponteiro para o primeiro elemento desta sequência de Nó e também pode ter outro ponteiro para o último Nó para tornar as operações na extremidade mais demoradas. Você também pode armazenar uma variável `length` para armazenar o comprimento total.

### Vantagens sobre Arrays

- O tamanho de uma lista vinculada não é fixo (tamanho dinâmico).
- Excluir e adicionar um elemento não é uma operação computacional caro em comparação com uma matriz.

### Desvantagens

- Os elementos podem ser acessados ​​sequencialmente, não aleatoriamente em comparação com uma matriz.
- Alocação de memória extra precisa ser feita para ponteiros que conectam elementos em uma lista vinculada.

### Complexidade de tempo

| Operação     | Média | Pior  |
| ------------ | ----- | ----- |
| Acesso O (n) | O (n) |       |
| Pesquisa     | O (n) | O (n) |
| Inserção     | O (1) | O (1) |
| Exclusão     | O (1) | O (1) |

## Exemplo

```.java
class LinkedList {
    Cabeça do nó; // Ponteiro para o primeiro elemento
    Cauda do nó; // Opcional. Aponta para o último elemento

    comprimento interno; // opcional

    class Node {
        dados internos; // Dados do nó. Pode ser int, string, float, templates, etc.
        Nó próximo; // Ponteiro para o próximo nó da lista
    }
}
```

## Explicação em vídeo

[Um vídeo CS50 explicando a estrutura de dados da lista vinculada](https://www.youtube.com/watch?v=5nsKtQuT6E8)
