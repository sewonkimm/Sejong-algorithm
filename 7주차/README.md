# 7주차 - 동적 계획법

## 수업 내용

1. 동적 계획법 소개
2. 문제 풀이
   - combination 문제
   - [다리 놓기](https://www.acmicpc.net/problem/1010)
   - 숙직 선생님
   - 증가하는 수

---

### 동적 계획법⭐⭐⭐

- 실제 테스트에서 가장 많이 활용하는 유형
- 동적표를 사용해서 패턴을 찾아낸다.
- 하향식 설계(메모이제이션)으로 불필요한 호출을 줄인다.
- 상향식 설계는 재귀함수를 이용하지 않는 방법 > 메모리도 조금 쓰고, 빠르다

### combination 실습

점화식 D[i][j] = i개중 j개를 고르는 경우의 수
