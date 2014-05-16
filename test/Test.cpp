/*
 * Test.cpp
 *
 *  Created on: 16 mai 2014
 *      Author: masse
 */

//#include "A.hpp"
//#include "B.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <gtest/gtest.h>

using namespace std;
/*TEST(Class, type_id){
	A a;
	B b;
	EXPECT_EQ("1B", string(typeid(b)), name());
}
*/

TEST(DS, opPlusMoins)
{

	string firstlevel ("com");
	string secondlevel ("cplusplus");
	string scheme ("http://");
	string hostname;


	hostname = "www." + secondlevel + '.' + firstlevel;


	EXPECT_EQ("www.cplusplus.com", hostname);
}

TEST(DS, opInf){
	string a = "expenses";
	string b = "money";
	EXPECT_EQ(a < b,1);
}

/*
TEST(DS, polymorphisme){
	A *a = new A;
	A *b = new B;
	EXPECT_EQ("?", a->Says());
	EXPECT_EQ("Woof", b->Says());
	}
	*/
