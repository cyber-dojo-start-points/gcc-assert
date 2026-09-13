#include "hiker.h"
#include <stddef.h>

int answer(void)
{
    return 6 * 9;
}

int checksum(void)
{
    /* The learner has not filled the table in yet, so it is still NULL and
       reading from it crashes the test program. */
    int *checksums = NULL;
    return checksums[0];
}
