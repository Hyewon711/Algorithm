//비트 연산을 통해 짝수, 홀수 판별하기

#include
int main(void) {
  int i;
  for (i = 0; i <= 100; i++) {
    while ((i & 1)==0) {// 받아온 숫자와 1을 비교하는 부분.
      printf("%d \n", i);
      break;
    } 
  }
}