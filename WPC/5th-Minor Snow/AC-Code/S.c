#include <stdio.h>
 
struct Info {
    char name[10];
    int Chinese, Math, English; 
}stu[1000];

int main()
{
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
        scanf("%s %d %d %d", stu[i].name, &stu[i].Chinese, &stu[i].Math, &stu[i].English);
    int BestStu = 0, BestGrades = 0;
    for(int i = 0; i < num; i++)
        if(stu[i].Chinese + stu[i].Math + stu[i].English > BestGrades) {
            BestGrades = stu[i].Chinese + stu[i].Math + stu[i].English;
            BestStu = i;
        }
    printf("%s %d %d %d\n", stu[BestStu].name, stu[BestStu].Chinese, stu[BestStu].Math, stu[BestStu].English);
    return 0;
}