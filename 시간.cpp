#include <stdio.h>
int main(void)
{
    int minute, a, num;   
    printf("�ʸ� �Է����ּ���: ");
    scanf("%d", &a);
    minute = a / 60;
   num = a - (60 * minute);
    printf("%d�� %d���Դϴ�.", minute, num);
 
    return 0;
}
