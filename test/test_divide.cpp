#include <gtest/gtest.h>
#include "div.h"

TEST(DivTest, HandlesPositiveInput)
{
int divide = div(9, 3);

EXPECT_EQ(divide, 3);
}
