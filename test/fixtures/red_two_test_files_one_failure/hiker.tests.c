#include "hiker.h"
#include "answer_size.tests.h"
#include <assert.h>
#include <stdio.h>

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
    life_the_universe_and_everything();
    the_answer_is_not_the_question();
    the_answer_is_two_digits_long();
    the_answer_is_three_digits_long();
    puts("All tests passed");
}
