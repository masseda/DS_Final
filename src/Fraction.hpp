/*
 * Fraction.hpp
 *
 *  Created on: 16 mai 2014
 *      Author: masse
 */

#ifndef FRACTION_HPP_
#define FRACTION_HPP_

#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Fraction {
public:
	Fraction();
	Fraction(int n, int d);
	virtual ~Fraction();

	// setters & getters
	float getNumerateur() const;
	void setNumerateur(const float number);

	float getDenominateur() const;
	void setDenominateur(const float expenses);


	string Afficher();

	void addition(int add);
	void addition(const Fraction&);

	string toString(const int nb);
	void operator+(const Fraction& maFraction);
	void operator+(int operateur);

private :
	int _numerateur;
	int _denominateur;
};

#endif /* FRACTION_HPP_ */
