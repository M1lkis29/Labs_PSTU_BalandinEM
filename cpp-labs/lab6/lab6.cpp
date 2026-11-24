#include <iostream>
#include <string.h>
using namespace std;

char* Gets(char s[])
{
    cin.getline(s, 256);
    return s;
}

int main()
{
    char s[256];
    char word[256];
    int n;
    int start;
    int length;
    int digits;

    cout << "Введите строку (не более 255 символов):" << endl;
    Gets(s);

    n = strlen(s);
    start = 0;

    cout << "Слова с одной цифрой:" << endl;

    for (int i = 0; i <= n; i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            length = i - start;
            digits = 0;

            for (int j = start; j < i; j++)
            {
                if (s[j] >= '0' && s[j] <= '9')
                {
                    digits++;
                }
            }

            if (length > 0 && digits == 1)
            {
                strncpy(word, s + start, length);
                word[length] = '\0';
                cout << word << endl;
            }

            start = i + 1;
        }
    }

    return 0;
}