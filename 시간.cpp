#include <stdio.h>
int main(void)
{
    int minute, a, num;   
    printf("초를 입력해주세요: ");
    scanf("%d", &a); //스캐너로 통해 값을 입력 받는다
    minute = a / 60; //a값을 60으로 나누어 분을 계산한다
   num = a - (60 * minute); // 60  x minute - a 를 하여 초의 시간을 구한다.
    printf("%d분 %d초입니다.", minute, num); //출력
 
    return 0;
}
