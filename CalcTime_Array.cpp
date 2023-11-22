#include <stdio.h>
#include <math.h>

int main()
{
    // 定义打卡时间数组
    struct Time
    {
        int hour;
        int minute;
    } times[8];

    int punch_no = 0;
    int OnlyEnter = 1;

    for (int i = 0; i < 8; i++)
    {
        printf("第%d次打卡(HH mm): ", i + 1);
        // scanf("%d", &times[i].hour);
        int input = getchar();
        // 检查是否只有回车输入
        if (input != '\n')
        {
            OnlyEnter = 0;
            times[i].hour = input - '0'; // 将字符转换为数字
            scanf(" %d", &times[i].minute);
            punch_no++;

        }
        else
        {
            printf("------\n");
            break;
        }

        // 清除输入缓冲区中的多余字符
        while (getchar() != '\n')
            continue;
    }
    if (OnlyEnter == 1)
    {
        printf("已取消");
    }
    else
    {
        // 计算工作时间总数
        int total_time = 0;

        for (int i = 1; i < punch_no; i += 2)
        {
            // 计算两次打卡之间的时间差
            int diff1 = times[i].hour * 60 + times[i].minute;
            int diff2 = times[i - 1].hour * 60 + times[i - 1].minute;
            total_time += fabs(diff2 - diff1);
        }

        // 输出工作时间总数
        printf("打卡次数：\t%d 次\n", punch_no);
        printf("工作时间：\t%d 小时 %d 分钟\n", total_time / 60, total_time % 60);
    }
    return 0;
}
