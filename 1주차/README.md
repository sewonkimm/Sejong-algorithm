# 1주차 내용

> [개발환경](https://www.onlinegdb.com)

### 1. 1~N 합 구하기

- main 안에 코드를 전부 넣는 것은 좋지 않다. 함수로 빼서 보기 좋게 만들어야한다.

### 2. 두 수의 합 구하기

- main 함수 인자 전달 `int argc, char *argv[]` 의미 알기
- online GDB 아래 Command line arguments에 인자 전달

### 3. 입력(표준 입출력 활용)

- `fgets(char* str, int num, FILE* stream)`: stream에서 num-1개(NULL문자 포함)의 문자열을 입력받는 것

### 4. 문자열 변환(표준 입출력 활용)

- `fgets`: 표준 입출력
- `strlen`: 문자열 길이 구하기

---

## C++에 익숙해지기

1. `#include <stdio.h>` ➡ `#include <iostream>`
2. `printf` ➡ `cout <<`
3. `scanf` ➡ `cin >>`  
   cin을 사용하면 서식 문자가 필요 없다.

---

## STL을 활용한 스택 구현

FILO : First In Last Out

### #include<stack>

- `stack<int> st`
- `st.push()`
- `st.pop()`
- `st.size()`
- `st.top()`
- `st.empty()`

## STL을 활용한 큐 구현

FIFO : First In First Out

### #include<queue>

- `queue<int> q`
- `q.push()`
- `q.pop()`
- `q.size()`
- `q.front()`
- `q.back()`
- `q.empty()`

## 그외

### 자료구조 vector

- `#include<vector>`

### sort()

- `#include<algorithm>`
