#include <stdio.h>
#include <string.h>

int main()
{
    char st[10000001];
    scanf("%s",st);
    int freq[26] = {0};
    for (int i = 0; i < strlen(st); i++)
    {
        int idx = st[i] - 97;
        freq[idx]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", i + 97, freq[i]);
        }
    }
    return 0;
}