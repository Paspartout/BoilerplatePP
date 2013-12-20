#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "Calculator.hpp"

using namespace {{ cookiecutter.repo_name }};

SCENARIO( "Calculators can calculate", "[calculator]" ) {

    GIVEN( "A brand new calculator" ) {
        Calculator calc;

        WHEN( "adding two numbers" ) {
            THEN( "the result should be the sum of both numbers" ) {
                REQUIRE( calc.add(1,1) == 2 );
                REQUIRE( calc.add(123,321) == 444 );
            }
        }
        WHEN( "substracting two numbers" ) {
            THEN( "the result should be the difference between both numbers" ) {
                REQUIRE( calc.substract(1,1) == 0 );
                REQUIRE( calc.substract(321,123) == 198 );
            }
        }
        WHEN( "multiplying two numbers" ) {
            THEN( "the result should be the product of both numbers" ) {
                REQUIRE( calc.multiply(1,1) == 1 );
                REQUIRE( calc.multiply(3,123) == 369 );
            }
        }
        WHEN( "dividing two numbers" ) {
            THEN( "the result should be the fraction of both numbers" ) {
                REQUIRE( calc.divide(1,1) == 1 );
                REQUIRE( calc.divide(369,3) == 123 );
            }
        }
    }
}