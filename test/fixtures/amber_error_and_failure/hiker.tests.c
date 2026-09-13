#include "hiker.h"
#include <assert.h>
#include <stdio.h>

/* One test crashes and one has an assertion that is false. Whichever runs
   first ends the test program, so the crash is the only thing reported and
   the false assertion is never reached. */

static void the_checksum_of_the_answer(void)
{
    assert(checksum() == 0);
}

static void life_the_universe_and_everything(void)
{
    assert(answer() == 42);
}

int main(void)
{
    the_checksum_of_the_answer();
    life_the_universe_and_everything();
    puts("All tests passed");
}
