#include <stdio.h>
int main()
{
    // Use: লুপ বা switch থেকে তৎক্ষণাৎ বের হওয়ার জন্য ব্যবহার করা হয়।
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("%d\n", i);
    }
    printf("end");
    return 0;
}
