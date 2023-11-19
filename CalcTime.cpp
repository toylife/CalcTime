#include <stdio.h>


void PrintDuration(int duration) {
    printf("%d时%d分\n\n", duration / 60, duration % 60);
}
int Duration(int hour1, int minute1, int hour2, int minute2) {
    int t1 = hour1 * 60 + minute1;
    int t2 = hour2 * 60 + minute2;
    t1 = t2 - t1;

    if (t1 > 0) {
        PrintDuration(t1);
        return t1;
    } else {
        t1 = -t1;
        PrintDuration(t1);
        return t1;
    }
}

int main()
{
    int hour1, minute1;
    int hour2, minute2;
    int hour3, minute3;
    int hour4, minute4;
// 输入第1个时间段
    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);
    printf("第1次：");
    int t1 = Duration(hour1, minute1, hour2, minute2);


// 输入第2个时间段
    scanf("%d %d", &hour3, &minute3);
    scanf("%d %d", &hour4, &minute4);
    printf("第2次：");
    int t2 = Duration(hour3, minute3, hour4, minute4);


// 打印总时长
    t2 = t1 + t2;
    printf("总计：");
    PrintDuration(t2);
    return 0;
}
