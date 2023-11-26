#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // 定义打卡时间数组
    struct Time
    {
        int hour;
        int minute;
    } times[8];

    char temp[4];
    int total_time = 0;
    int punch_no = 0;

    // 输入打卡时间
    for (int i = 0; i < 8; ++i)
    {
        printf("第%d次打卡(HH mm): ", i + 1);
        scanf("%4s", temp);
        if (temp[0] == '0')
        {
            times[i].hour = (temp[1] - '0');
            times[i].minute = (temp[2] - '0') * 10 + (temp[3] - '0');
            punch_no++;
        }
        else if (temp[0] == '1' || temp[0] == '2')
        {
            times[i].hour = (temp[0] - '0') * 10 + (temp[1] - '0');
            times[i].minute = (temp[2] - '0') * 10 + (temp[3] - '0');
            punch_no++;
        }
        else
        {
            printf("OK.\n---------\n");
            break;
        }
    }
    // 计算工作时间总数

    for (int i = 1; i < punch_no; i += 2)
    {
        // 计算两次打卡之间的时间差
        int diff1 = times[i].hour * 60 + times[i].minute;
        int diff2 = times[i - 1].hour * 60 + times[i - 1].minute;
        total_time += fabs(diff2 - diff1);
    }

    // 输出工作时间总数
    printf("打卡次数：\t%d 次\n", punch_no);
    printf("工作时间：\t%d 时 %d 分\n", total_time / 60, total_time % 60);

    return 0;
}
