#pragma once
#include <ostream>
class Fixed {

	public:
		Fixed();
		Fixed(const int nbr);
		Fixed(const Fixed &cpy);
		Fixed(const float nbr);	

		Fixed &operator=(const Fixed &cpy);
		bool operator==(const Fixed &toComp) const;
		bool operator>=(const Fixed &toComp) const;
		bool operator<=(const Fixed &toComp) const;
		bool operator>(const Fixed &toComp) const;
		bool operator<(const Fixed &toComp) const;
		bool operator!=(const Fixed &toComp) const;
		float operator+(const Fixed &toAdd) const;
		float operator-(const Fixed &toAdd) const;
		float operator*(const Fixed &toAdd) const;
		float operator/(const Fixed &toAdd) const;
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		
		static Fixed max(const Fixed &a, const Fixed &b);
		static Fixed min(const Fixed &a, const Fixed &b);
		~Fixed();
		float toFloat() const;
		int toInt() const;

	private:
		int value;
		static const int raw_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed &obj);

