#include <stdio.h>
int main(void)
{
    int minute, a, num;   
    printf("초를 입력해주세요: ");
    scanf("%d", &a);
    minute = a / 60;
   num = a - (60 * minute);
    printf("%d분 %d초입니다.", minute, num);
 
    return 0;
}
