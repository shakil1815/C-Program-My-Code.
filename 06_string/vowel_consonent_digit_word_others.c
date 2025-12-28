#include <stdio.h>
int main()
{
    char str[100];
    printf("enter a string:");
    scanf("%[^\n]s", str);
    int vowel, consonent, digit, word, other;
    vowel = consonent = digit = word = other=0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            consonent++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else if (str[i] == ' ')
        {
            word++;
        }
        else
        {
            other++;
        }
    }
    printf("entered vowel:%d\n", vowel);
    printf("entered consonent:%d\n", consonent);
    printf("entered digit:%d\n", digit);
    printf("entered word:%d\n", word);
    printf("entered other:%d\n", other);
    return 0;
}
