#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed {
    private:
		int					fpNumber;
		static const int	raw = 8;

	public:
		Fixed();
		Fixed(const Fixed &f);
		~Fixed();
		Fixed   &operator=(const Fixed &f);
		int	    getRawBits(void)const;
		void    setRawBits(const int raw);
        void    copyFixed(const Fixed &f);
};

#endif