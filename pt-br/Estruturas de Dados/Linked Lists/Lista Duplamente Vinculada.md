# Lista duplamente vinculada (Doubly Linked List)

Singly Linked List é uma estrutura de dados linear e conectada feita de nós. Cada nó é composto de uma variável `data` onde seu conteúdo é armazenado e um ponteiro para o próximo nó na lista. A Lista Vinculada tem um ponteiro para o primeiro elemento desta sequência de Nó e também pode ter outro ponteiro para o último Nó para tornar as operações na extremidade mais demoradas. Você também pode armazenar uma variável `length` para armazenar o comprimento total.

Uma ** Lista duplamente vinculada (DLL) ** contém um ponteiro extra, normalmente chamado de ponteiro anterior, junto com o próximo ponteiro e os dados que estão lá na lista vinculada individualmente.

### Vantagens em relação à lista vinculada isoladamente

- Uma DLL pode ser percorrida tanto para frente quanto para trás.
- A operação de exclusão na DLL é mais eficiente se o ponteiro para o nó a ser excluído for fornecido.
- Podemos inserir rapidamente um novo nó antes de um determinado nó.
Na lista vinculada individualmente, para excluir um nó, é necessário um ponteiro para o nó anterior. Para obter esse nó anterior, às vezes a lista é percorrida. Na DLL, podemos obter o nó anterior usando o ponteiro anterior.

### Desvantagens em relação à lista vinculada isoladamente

- Cada nó de DLL requer espaço extra para um ponteiro anterior. É possível implementar DLL com um único ponteiro embora (veja isto e isto).
- Todas as operações requerem um ponteiro extra anterior para ser mantido. Por exemplo, na inserção, precisamos modificar os ponteiros anteriores junto com os próximos ponteiros. Por exemplo, nas seguintes funções para inserções em posições diferentes, precisamos de 1 ou 2 etapas extras para definir o ponteiro anterior.

### Complexidade de tempo

| Operação | Média | Pior |
| --------- | ------- | ----- |
| Acesso Θ (n) | O (n) |
| Pesquisa | Θ (n) | O (n) |
| Inserção | Θ (1) | O (1) |
| Exclusão | Θ (1) | O (1) |

## Exemplo

```java
class LinkedList {

Cabeça do nó; // Ponteiro para o primeiro elemento
Cauda do nó; // Opcional. Aponta para o último elemento

comprimento interno; // opcional

    class Node {
        dados internos; // Dados do nó. Pode ser int, string, float, templates, etc.
        Nó próximo; // Ponteiro para o próximo nó da lista
        Node prev;

        Nó (dados internos) {
            this.data = data;
        }
    }


    // Adicionando um nó na frente da lista
    public void push (int new_data) {

        // 1. alocar nó
        // 2. inserir os dados
        Nó new_Node = novo Nó (new_data);

        // 3. Faça o próximo do novo nó como principal e o anterior como NULL * /
        new_Node.next = head;
        new_Node.prev = null;

        // 4. alterar anterior do nó principal para o novo nó * /
        if (head! = null)
            head.prev = new_Node;

        // 5. mova a cabeça para apontar para o novo nó * /
        head = new_Node;
    }

    // Dado um nó como prev_node, insira um novo nó após o nó fornecido * /
    public void InsertAfter (Node prev_Node, int new_data) {

        // 1. verifique se o prev_node fornecido é NULL * /
        if (prev_Node == null) {
            System.out.println ("O nó anterior fornecido não pode ser NULL");
            Retorna;
        }

        // 2. alocar nó
        // 3. coloque os dados * /
        Nó new_node = new Node (new_data);

        // 4. Faça o próximo do novo nó como próximo do prev_node
        new_node.next = prev_Node.next;

        // 5. Faça o próximo de prev_node como new_node
        prev_Node.next = new_node;

        // 6. Faça prev_node como anterior de new_node
        new_node.prev = prev_Node;

        // 7. Alterar anterior do próximo nó de new_node
        if (new_node.next! = null)
            new_node.next.prev = new_node;
    }
}
```

### Adicionando nó na frente

! [Rastreamento de algoritmo](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL_add_front1.png)

### Adicionar um nó após um determinado nó

! [Rastreamento de algoritmo](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL_add_middle1.png)

## Explicação em vídeo

[Um vídeo CS50 explicando a estrutura de dados da lista duplamente vinculada](https://www.youtube.com/watch?v=FHMPswJDCvU)
