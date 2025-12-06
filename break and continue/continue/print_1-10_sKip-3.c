#include <stdio.h>
         int main()
{
    // Use : লুপের বাকি অংশ এড়িয়ে পরবর্তী iteration এ যাওয়ার জন্য ব্যবহার করা হয়

    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i <= 3)
        {
            continue;
        }
        printf("%d\n", i);
    }
    printf("end");
    return 0;
}
