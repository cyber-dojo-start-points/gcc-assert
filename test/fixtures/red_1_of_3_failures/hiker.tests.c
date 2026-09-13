#include "hiker.h"
#include <assert.h>
#include <stdio.h>

static void the_answer_is_two_digits_long(void)
{
    assert(answer() > 9 && answer() < 100);
}

static void life_the_universe_and_everything(void)
{
    assert(answer() == 42);
}

static void the_answer_is_not_the_question(void)
{
    assert(answer() != 6 * 9);
}

int main(void)
{
    the_answer_is_two_digits_long();
    life_the_universe_and_everything();
    the_answer_is_not_the_question();
    puts("All tests passed");
}
