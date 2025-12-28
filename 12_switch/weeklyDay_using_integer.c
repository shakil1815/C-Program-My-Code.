int main()
{
    int day;
    printf("enter the day number:");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("satarday");
        break;
    case 2:
        printf("sunday");
        break;
    case 3:
        printf("monday");
        break;
    case 4:
        printf("tuesday");
        break;
    case 5:
        printf("wednesday");
        break;
    case 6:
        printf("thusday");
        break;
    case 7:
        printf("friday");
        break;
    }
    return 0;
}