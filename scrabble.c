#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int get_score(string w);

int main(void)
{
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");
    int p1s = get_score(p1);
    int p2s = get_score(p2);
    if (p1s > p2s)
    {
        printf("Player 1 wins!");
    }
    if (p1s < p2s)
    {
        printf("Player 2 wins!");
    }
    if (p1s == p2s)
    {
        printf("Tie!");
    }
}
int get_score(string w)
{
    int scores[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int pts = 0;
    int length = strlen(w);
    for (int i = 0; i < length; i++)
    {
        if (islower(w[i]))
        {
            pts += scores[w[i] - 'a'];
        }
        else if (isupper(w[i]))
        {
            pts += scores[w[i] - 'A'];
        }
    }

    return pts;
}
