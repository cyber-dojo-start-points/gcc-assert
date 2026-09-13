#include "hiker.h"
#include <assert.h>
#include <stdio.h>

/* All three of these assertions are false. A failing assert() calls abort(),
   which ends the whole test program, so the first one is the only one
   reported and the other two never run. */

static void life_the_universe_and_everything(void)
{
    assert(answer() == 42);
}

static void the_answer_is_three_digits_long(void)
{
    assert(answer() > 99);
}

static void the_answer_is_the_question(void)
{
    assert(answer() == 6 * 9 * 2);
}

int main(void)
{
    life_the_universe_and_everything();
    the_answer_is_three_digits_long();
    the_answer_is_the_question();
    puts("All tests passed");
}
