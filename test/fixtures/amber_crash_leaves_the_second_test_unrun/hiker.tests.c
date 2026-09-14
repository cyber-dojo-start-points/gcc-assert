#include "hiker.h"
#include <assert.h>
#include <stdio.h>

/* Both of these tests crash. A crash ends the whole test program, so the
   first one is the only one reached and the second never runs. */

static void life_the_universe_and_everything(void)
{
    assert(answer() == 42);
}

static void the_checksum_of_the_answer(void)
{
    assert(checksum() == 0);
}

int main(void)
{
    life_the_universe_and_everything();
    the_checksum_of_the_answer();
    puts("All tests passed");
}
