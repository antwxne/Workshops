#include <criterion/criterion.h>

Test(test, test1)
{
    cr_expect(1);
}
Test(test, test2)
{
    cr_expect(1);
}
Test(test, test3)
{
    cr_expect(1);
}
Test(test, test4)
{
    cr_expect(1);
}
Test(test, test5)
{
    cr_assert(0);
}
Test(test, test6)
{
    cr_expect(1);
}