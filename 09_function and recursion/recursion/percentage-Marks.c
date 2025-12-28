#include <stdio.h>
int result_percentage(int science, int math, int phy);
int main()
{
    printf("The Student Percentage:%d%%\n", result_percentage(55, 75, 80));
    return 0;
}
int result_percentage(int science, int math, int phy)
{
    int totalmarks = math + science + phy;
    int percentage = totalmarks / 3;
    return percentage;
}
