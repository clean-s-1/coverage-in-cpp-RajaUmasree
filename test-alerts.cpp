#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"

TEST_CASE("infers the breach according to limits") {
  REQUIRE(inferBreach(12, 20, 30) == TOO_LOW);
}

TEST_CASE("classify temperature breach based on cooling Type") {
  REQUIRE(classifyTemperatureBreach(PASSIVE_COOLING, 36.9) == TOO_HIGH);
}
