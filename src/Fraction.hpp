/*
 * Fraction.hpp
 *
 *  Created on: 16 mai 2014
 *      Author: masse
 */

#ifndef FRACTION_HPP_
#define FRACTION_HPP_

class Fraction {
public:
	Fraction();
	Fraction(int n, int d);
	virtual ~Fraction();

	float getNumerateur() const;
	void setNumerateur(const float number);

	float getDenominateur() const;
	void setDenominateur(const float expenses);


private :
	int _numerateur;
	int _denominateur;
};

#endif /* FRACTION_HPP_ */
