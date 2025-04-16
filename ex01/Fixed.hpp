#pragma once
#include <ostream>
class Fixed {

	public:
		Fixed();
		Fixed(const int nbr);
		Fixed(const Fixed &cpy);
		Fixed(const float nbr);	

		Fixed &operator=(const Fixed &cpy);
		~Fixed();
		float toFloat() const;
		int toInt() const;
	private:
		int value;
		static const int raw_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed &obj);
