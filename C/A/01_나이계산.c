/*
 [A01] 나이 계산
 
태어난 년도를 입력받은 후, 이 값을 이용하여 나이를 계산하고 출력하라.
단, 나이 = 올해년도 – 태어난 년도 + 1 로 계산한다.

변수는 다음과 같이 사용하라.
int birth_year; // 태어난 년도 
int age; // 나이 
*/

#include <stdio.h>

int main(void) {
  int age;
  int b_y = 0;
  printf("Birth year?");
  scanf("%d",&b_y);
  age = 2020 - b_y + 1;
  printf("%d", age);
  return 0;
}
