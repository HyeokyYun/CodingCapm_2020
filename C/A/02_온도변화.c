/*
섭씨 온도를 입력받아 이 값을 화씨온도로 변환하여 출력하라. 
단, 화씨 온도 = 섭씨 온도 * 1.8 + 32 로 계산한다. 
변수는 다음과 같이 사용하라.
 float c_degree; // 섭씨 온도 
float f_degree; // 화씨 온도 
*/

#include <stdio.h>

int main(void) {
  float c;
  float f = 0;
  printf("섭씨 온도를 입력하시오. ");
  scanf("%f", &c);
  f = c * 1.8 + 32;
  printf("화씨 온도는 %.1f 도 입니다.", f);
  return 0;
}
