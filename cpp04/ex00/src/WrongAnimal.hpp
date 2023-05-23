#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

typedef std::string	str;

class WrongAnimal
{
	protected:
		str	type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal &operator=(const WrongAnimal &copy);
		virtual ~WrongAnimal();

		str	getType(void)const;
		void	setType(str type);
		virtual void	makeSound() const;
};

#endif
