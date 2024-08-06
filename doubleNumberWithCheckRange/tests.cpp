#include <gtest/gtest.h>

#include "mul.hpp"


namespace {


TEST(mul, smok) {
  ASSERT_NO_THROW(multiplyNumber(1, 2));
}


}// namespace
