#include <cstring>
#include "golf.h"

int main()
{
    const int ARR_SIZE = 4;

    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    golf player[ARR_SIZE];
    int i = 0;
    for (; i < ARR_SIZE; ++i)
        if (setgolf(player[i]) == 0)
            break;

    for (int j = 0; j < i; ++j)
        showgolf(player[j]);

    return 0;
}