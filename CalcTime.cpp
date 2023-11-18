#include <stdio.h>

int main()
{
    int hour1, minute1;
    int hour2, minute2;
    int hour3, minute3;
    int hour4, minute4;
// 输入第1个时间段
    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int t1 = hour1 * 60 + minute1;
    int t2 = hour2 * 60 + minute2;
    int t_1 = t2 - t1;

    if (t_1 > 0) {
        printf("时间差是%d时%d分\n", t_1 / 60, t_1 % 60);
    } else {
        t_1 = -t_1;
        printf("时间差是%d时%d分\n", t_1 / 60, t_1 % 60);
    }

// 输入第2个时间段
    scanf("%d %d", &hour3, &minute3);
    scanf("%d %d", &hour4, &minute4);

    int t3 = hour3 * 60 + minute3;
    int t4 = hour4 * 60 + minute4;
    int t_2 = t4 - t3;

    if (t_2 > 0) {
        printf("时间差是%d时%d分\n", t_2 / 60, t_2 % 60);
    } else {
        t_2 = -t_2;
        printf("时间差是%d时%d分\n", t_2 / 60, t_2 % 60);
    }

// 打印总时长
    t_2 = t_1 + t_2;
    printf("今日工作时长：\n%d时%d分\n加油！\n", t_2 / 60, t_2 % 60);
    return 0;
}
