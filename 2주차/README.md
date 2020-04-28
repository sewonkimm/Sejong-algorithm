# 2주차 내용

- 자주쓰는 라이브러리 익숙해지도록 연습하기
- 숙제 : 문제 풀이 4번
- 문제 5, 6번 미리 풀어보기

| 문제 |                                    링크                                     |
| :--: | :-------------------------------------------------------------------------: |
|  1   |    [비밀지도](https://programmers.co.kr/learn/courses/30/lessons/17681)     |
|  2   |              [수강신청](https://www.acmicpc.net/problem/13414)              |
|  3   |              [단어 정렬](https://www.acmicpc.net/problem/1181)              |
|  4   | [뉴스 클러스터링](https://programmers.co.kr/learn/courses/30/lessons/17677) |
|  5   |        [욱제는 도박쟁이야!!](https://www.acmicpc.net/problem/14655)         |
|  6   |      [압축](https://programmers.co.kr/learn/courses/30/lessons/17684)       |

---

### 1. vector

> [vector](https://blockdmask.tistory.com/70)

- 동적배열
- 장점: 배열 크기가 유동적. index를 알면 데이터 검색에 용이.
- 단점: 중간에 값 삽입 삭제가 느리다. 이런건 linked list가 좋다.

* `#include<vector>`
* `vector<[data type]> [변수명]`
* `v.push_back()`
* `v.pop_back()`
* `v.begin()`
* `v.end()`
* `v.size()`
* `v.front()`
* `v.back()`

- `vector<int>::iterator` 반복자 사용을 이용한 탐색도 연습하기

### 2. deque

> [deque](https://blockdmask.tistory.com/73)

- vector의 메모리 효율적 측면에서의 단점을 보완
- 앞, 뒤에서 모두 삽입, 삭제 가능

## ** vector와 deque 중 적절히 필요한 것을 골라서 사용 **

### 3. list

> [list](https://blockdmask.tistory.com/76)

- Double linked list
- 장점: 포인터로 다음 값을 찾아주는 방식으로 중간 삽입/삭제가 용이
- 단점: vector처럼 순차 접근이 불가

- `#include<list>`
- `list<[data type]> [변수명]`
- `list.assign()`
- `list.front()`
- `list.back()`
- `list.push_front()`, `list.push_back()`
- `list.pop_front()`, `list.pop_back()`
- `list.remove_if(predicate)`
- iterator 사용

### 4. set

> [set](https://blockdmask.tistory.com/79)

- 연관 컨테이너. 순차적으로 값이 들어가있는게 아님. 이진 트리 형태.
- 삽입, 삭제는 느려도 검색은 빠르다
- key와 value의 집합
- 중복값 非허용. 중복을 허용하고 싶을 때에는 multiset 사용.
- 삽입 할 때 정렬이 이루어짐

- 선언 및 초기화
- `set.begin()`, `set.end()`
- `set.insert()`, `set.erase(start, end)`
- `set.find(k)` => 반복자를 반환한다. 찾는 원소 k가 존재하지 않으면 set.end()를 반환.

### 5. map

> [map](https://blockdmask.tistory.com/87?category=249379)

- key~value 쌍으로 저장
- key로 검색하거나, key를 정렬하고 싶을 때 사용
- key 중복 허용하고 싶으면 multimap

- pair로 key와 value 값 insert
- `map.insert()`

### 6. pair

- 두 객체를 하나의 객채로 취급할 수 있게 하는 클래스

- `#include<utility>`
- `make_pair()`

---

## 유용하게 쓰이는 메소드

### sort🎀🎀🎀

- `#include<algorithm>`
- 기본 옵션은 오름차순 정렬
- 내림차순 옵션`greater<int>`
- 정렬 순서 별도로 함수로 빼서 정의 가능

### find, count, equal, search, copy, swap, remove, transform, min, max, minmax

### math 관련

- `#include<cmath>`
- abs: 절댓값
- ceil: 올림
- floor: 내림
- round: 반올림

### cctype

- `#include<cctype>`
- ::toupper, ::tolower
- isalnum, islower, isupper
