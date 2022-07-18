#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"
#include "breach.h"

TEST_CASE(" Case 1: infers the breach according to limits") {
  Breach obj;
  REQUIRE(obj.inferBreach(12, 20, 30) == TOO_LOW);
}
TEST_CASE("Case 2: infers the breach according to limits") {
  Breach obj1;
  REQUIRE(obj1.inferBreach(32, 30, 40) == NORMAL);
}
TEST_CASE("Case 3: infers the breach according to limits") {
  Breach obj2;
  REQUIRE(obj2.inferBreach(42, 30, 35) == TOO_HIGH);
}

