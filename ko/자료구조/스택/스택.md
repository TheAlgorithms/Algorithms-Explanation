# 스택

스택은 객체에 접근하는 순서가 정해진 기본적인 선형 데이터 구조이다. 이 순서는 LIFO (Last In First Out) 또는 FILO (First in Last Out)라고 불린다. 대표적인 스택 예시로는 식당의 접시, 쌓인 책 더미, 프링글스 상자 등이 있다. 
스택은 파서 및 식 평가, 백트래킹 알고리즘 등을 구현하는 데 사용된다. 기본 작업은 스택에 요소를 넣는 것(push)과 스택에서 요소를 빼는 것(pop)이다. 
연결 리스트 또는 리스트 배열을 사용하여 구현할 수 있다. 스택은 가장 위에 있는 요소를 가리키는 "top 포인터" 하나만 가진다. 삽입과 삭제는 스택의 한쪽 끝에서만 발생한다.

# 표준 스택 연산자 

1) push(): 스택의 맨 위에 요소 삽입
2) pop(): 스택의 맨 위에 있는 요소 삭제
3) isEmpty(): 스택이 비어 있는지 여부 확인
4) isFull(): 스택이 가득 찼는지 여부 확인
5) peek(): 맨 위에 있는 요소의 값을 가져옴(제거X)

# 스택으로 작업하기 

스택에서는 TOP이라는 포인터를 사용하여 스택의 맨 위에 있는 요소를 추적한다. 스택을 초기화할 때, TOP의 값을 -1로 설정하여 TOP == -1인 경우 스택이 비어 있는지 확인할 수 있다. 요소를 push할 때마다, TOP의 값을 증가시키고, TOP이 가리키는 위치에 새로운 요소를 넣는다. 요소를 pop할 때, TOP이 가리키는 값을 반환하고, TOP의 값을 감소시킨다. push하기 전에 스택이 가득 차 있는지 확인하고, pop하기 전에 스택이 이미 비어 있는지 확인한다.

# 소스

1) [Stack Data Structure - GeeksForGeeks](https://www.geeksforgeeks.org/stack-data-structure/) 
2) [DS-Stack JavaPoint](https://www.javatpoint.com/data-structure-stack)
3) [Stack Data Structure](https://www.programiz.com/dsa/stack)

# 영상 URL

- [Stack Data Structure](https://youtu.be/F1F2imiOJfk)
