# 이중 연결 리스트

단일 연결 리스트는 선형으로 연결된 데이터 구조로, 노드로 구성되어 있다. 각 노드는 내용이 저장된 `data` 변수와 다음 노드를 가리키는 `pointer`로 구성되어 있다. 연결 리스트는 이런 노드들의 첫 원소를 가리키는 포인터를 가지며, 연산에 걸리는 시간을 훨씬 절약하기 위해 마지막 노드를 가리키는 포인터를 가질 수도 있다. 전체 노드 수를 저장하는 `length` 변수를 추가할 수도 있다.

**이중 연결 리스트 (DLL)** 는 여기에 더해 이전 노드를 가리키는 `previous pointer`라는 추가적인 포인터도 가진다.

### 단일 연결 리스트보다 우수한 점

- 정방향과 역방향 순회가 가능하다.
- 제거될 노드를 가리키는 포인터가 알려져 있다면, 원소의 제거가 더 효율적이다.
- 특정 노드 앞에 새로운 노드를 빠르게 삽입할 수 있다.
- 단일 연결 리스트에서 노드를 제거하려면 이전 노드의 `pointer`를 알아야 한다. 어쩌면 이 노드를 찾기 위해 리스트를 전부 순회해야 할 수도 있다. 그러나 DLL에서는 `previous pointer`를 이용하여 이전 노드를 찾을 수 있다.

### 단점

- 포인터를 저장하기 위한 메모리가 단일 연결 리스트보다 더 많이 필요하다. 그러나 포인터 하나로 DLL을 구현할 수도 있다.
- 모든 작업에 추가적인 연산이 필요하다. 예를 들어, 삽입 시 `pointer`와 `previous pointer`를 모두 수정해야 한다.

### 시간 복잡도

| 작업 | 평균         | 최악    |
| --- | ----------- | ------ |
| 접근 | $\Theta(n)$ | $O(n)$ |
| 탐색 | $\Theta(n)$ | $O(n)$ |
| 삽입 | $\Theta(1)$ | $O(1)$ |
| 제거 | $\Theta(1)$ | $O(1)$ |

## 예시

```java
class LinkedList {
    Node head;      // 첫 원소를 가리키는 포인터
	Node tail;      // (Optional) 마지막 원소를 가리키는 포인터

	int length;     // (Optional) 전체 노드 수

    class Node {
        int data;   // 노드의 데이터
        Node next;  // 다음 노드를 가리키는 포인터
        Node prev;

        Node(int data) {
            this.data = data;
        }
    }
```

- 맨 앞에 노드 추가하기  
  ![Tracing of algorithm](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL_add_front1.png)

  ```java
      public void push(int new_data) {

          /* 1. 노드를 만든다
             2. 데이터를 입력한다다 */
          Node new_Node = new Node(new_data);

          /* 3. 새로운 노드의 next 변수를 head로, prev 변수를 NULL로 설정한다 */
          new_Node.next = head;
          new_Node.prev = null;

          /* 4. head의 prev 변수를 새로운 노드로 변경한다 */
          if (head != null)
              head.prev = new_Node;

          /* 5. head를 새로운 노드로 변경한다 */
          head = new_Node;
      }
  ```

- 주어진 노드 뒤에 노드 추가하기  
  ![Tracing of algorithm](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL_add_middle1.png)

  ```java
      public void InsertAfter(Node prev_Node, int new_data) {

          /*1. 주어진 prev_Node가 NULL인지 확인한다 */
          if (prev_Node == null) {
              System.out.println("The given previous node cannot be NULL ");
              return;
          }

          /* 2. 노드를 만든다
             3. 데이터를 입력한다 */
          Node new_Node = new Node(new_data);

          /* 4. 새로운 노드의 next 변수를 prev_Node의 next 변수값으로 설정한다 */
          new_Node.next = prev_Node.next;

          /* 5. prev_Node의 next 변수를 새로운 노드로 변경한다 */
          prev_Node.next = new_Node;

          /* 6. 새로운 노드의 prev 변수를 prev_Node로 설정한다 */
          new_Node.prev = prev_Node;

          /* 7. 새로운 노드의 다음 노드의 prev 변수를 새로운 노드로 변경한다 */
          if (new_Node.next != null)
              new_Node.next.prev = new_Node;
      }
  }
  ```

## 영상 URL

- [CS50](https://www.youtube.com/watch?v=FHMPswJDCvU)
