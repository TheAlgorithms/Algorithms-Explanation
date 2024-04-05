# 벨먼-포드 알고리즘

## 문제

방향 가중치 그래프 $G(V, E)$와 시작점 $s \in V$가 주어졌을 때, 각 점 $v \in V$에 대하여 $s$와 $v$를 잇는 가장 짧은 경로를 구하라. ($V$는 꼭짓점의 집합, $E$는 간선의 집합)

## 절차

1. 시작점에서 모든 꼭짓점까지의 거리를 무한대로 초기화한다.
2. 시작점으로의 거리를 0으로 초기화한다.
3. `dist[s]`를 제외한 모든 값을 무한대로 하는 크기가 $|V|$인 `dist`라는 배열을 만든다.
4. 다음을 $|V|-1$회 반복한다.
5. $E$에 속한 모든 간선 `(u,v)`에 대해 다음을 반복한다:

   ```
   dist[v] = minimum(dist[v], dist[u] + weight of edge)
   ```

6. 마지막으로 모든 간선에 대해 음의 사이클(negative cycle)이 없는지 확인한다.

## 시간 복잡도

$O(VE)$

## 공간 복잡도

$O(V^2)$

## 만든 사람

- [리처드 벨먼](https://ko.wikipedia.org/wiki/%EB%A6%AC%EC%B2%98%EB%93%9C_%EB%B2%A8%EB%A8%BC)
- [래스터 포드 주니어](https://en.wikipedia.org/wiki/L._R._Ford_Jr.)

## 예시

```
    꼭짓점: [A, B, C, D, E]

    간선:  [A->B, A->C, B->C, B->D, B->E, D->C, D->B, E->D]
    가중치: [ -1,    4,    3,    2,    2,    5,    1,   -4 ]
    시작점: [  A,    A,    B,    B,    B,    D,    D,    E ]


    꼭짓점 개수 = 5
    간선 개수 = 8

    // A->B
    graph->edge[0].src = A
    graph->edge[0].dest = B
    graph->edge[0].weight = -1

    // A->C
    graph->edge[1].src = A
    graph->edge[1].dest = C
    graph->edge[1].weight = 4

    // B->C
    graph->edge[2].src = B
    graph->edge[2].dest = C
    graph->edge[2].weight = 3

    // B->D
    graph->edge[3].src = B
    graph->edge[3].dest = D
    graph->edge[3].weight = 2

    // B->E
    graph->edge[4].src = B
    graph->edge[4].dest = E
    graph->edge[4].weight = 2

    // D->C
    graph->edge[5].src = D
    graph->edge[5].dest = C
    graph->edge[5].weight = 5

    // D->B
    graph->edge[6].src = D
    graph->edge[6].dest = B
    graph->edge[6].weight = 1

    // E->D
    graph->edge[7].src = E
    graph->edge[7].dest = D
    graph->edge[7].weight = -3

    for source = A

    꼭짓점   시작점으로부터의 거리
	A        0                      (A->A)
	B        -1                     (A->B)
	C        2                      (A->B->C = -1 + 3)
	D        -2                     (A->B->E->D = -1 + 2 + -3)
	E        1                      (A->B->E = -1 + 2)
```

## 영상 URL

- [Yusuf Shakeel (C)](https://www.youtube.com/watch?v=hxMWBBCpR6A)

## 출처

- [GeeksforGeeks](https://www.geeksforgeeks.org/bellman-ford-algorithm-dp-23/)
- [위키피디아 "벨먼-포드 알고리즘" 항목](https://ko.wikipedia.org/wiki/%EB%B2%A8%EB%A8%BC-%ED%8F%AC%EB%93%9C_%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98)
