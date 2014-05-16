/*
 * Test.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: masse
 */

#include <iostream>
#include <string>
#include <vector>





#include <fstream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <gtest/gtest.h>
#include "../src/Fraction.hpp"

using namespace std;



TEST(stringAfficher, testLineContent) {
Fraction *fraction = new Fraction(3,2);
EXPECT_EQ("3/2",fraction->Afficher());

}


TEST(stringAfficher, addition) {
	Fraction *fraction = new Fraction(1,2);
	fraction->addition(1);
	EXPECT_EQ("3/2",fraction->Afficher());
}

TEST(stringAfficher, additionfraction) {
	Fraction *fraction = new Fraction(1,2);
	Fraction *fraction1 = new Fraction(4,2);
	fraction->addition(*fraction1);
	EXPECT_EQ("10/4",fraction->Afficher());
}

TEST(stringAfficher, operateur)
{
	Fraction *fraction = new Fraction(1,2);
	fraction->operator +(1);
	EXPECT_EQ("3/2",fraction->Afficher());
}

TEST(stringAfficher, operateurfraction)
{
	Fraction *fraction = new Fraction(1,2);
	Fraction *fraction1 = new Fraction(4,2);
	fraction->operator +(*fraction1);
	EXPECT_EQ("10/4",fraction->Afficher());
}
