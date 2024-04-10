# 원형 연결 리스트

원형 연결 리스트는 노드로 이루어진 최종 연결 데이터 구조이다. 단일 및 이중 연결 리스트와 마찬가지로, 각 노드는 그 내용이 저장되는 변수 `data`와 목록의 다음 노드에 대한 `pointer`로 구성된다.
연결 리스트는 인접한 요소에 대해 `pointer`를 가지고 있지만 마지막 노드는 헤드 노드, 즉 첫 번째 노드 자체를 향해 연결되어 원형 모양을 형성한다.

### 배열 & 단일 연결 리스트 & 이중 연결 리스트보다 우수한 점

- 모든 노드가 시작점이 될 수 있다.
- 큐 구현에 유용하다.
- 원형 연결 리스트는 응용프로그램에서 목록을 반복적으로 순환하는 데 유용하다.
- 원형 이중 연결 리스트는 `Fibonacci Heap`과 같은 고급 자료구조의 구현을 위해 사용된다.
- 연결 리스트의 크기가 고정되어 있지 않다(가변 크기).
- 배열에 비해 `element`삭제, 추가비용이 적다.

### 단점

- 원형 연결 리스트는 단일 연결 리스트에 비해 복잡하다.
- 원형 연결 리스트의 `reversing`이 단일 연결 리스트나 이중 연결 리스트에 비해 복잡하다.
- 주의하지 않으면 무한 루프에 빠질 수 있다.
- `element`는 배열과 비교하여 직접 접근할 수 없고 순차적으로 접근해야 한다.
- 연결된 리스트의 `element`를 연결하는 `pointer`에 대한 추가 메모리 할당을 필요하다.

### 시간 복잡도

| Operation | Average | Worst |
|-----------|---------|-------|
| Initialize|   O(1)  |    -  |
| Access    |   O(n)  |  O(n) |
| Search    |   O(n)  |  O(n) |
| Insertion |   O(1)  |  O(n) |
| Deletion  |   O(1)  |  O(n) |

### 실제 적용 사례

- CPU 자원 할당
- 멀티플레이어 보드 게임

### SLL v.s. CLL

![영상](https://tutorialhorizon.com/static/media/algorithms/2016/03/Circular-Linked-List.png)

### 예시

<u>Insertion</u>
```java
public void insertHead(int data)
{
	Node temp = new Node(data);
	Node cur = head;
	while(cur.getNext() != head)
		cur = cur.getNext();
	if(head == null)
	{
		head = temp;
		head.setNext(head);
	}
	else
	{
		temp.setNext(head);
		head = temp;
		cur.setNext(temp);
	}
	size++;
}
 ```

## 영상 URL

[유투브 영상](https://youtu.be/HMkdlu5sP4A)
