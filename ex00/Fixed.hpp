#pragma once
class Fixed {

	public:
		Fixed();
		Fixed(const Fixed &cpy);

		Fixed &operator=(const Fixed &cpy);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);
	private:
		int value;
		static const int raw_bits = 8;
};
