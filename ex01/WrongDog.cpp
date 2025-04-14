/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:29:17 by louisalah         #+#    #+#             */
/*   Updated: 2025/04/14 09:29:44 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
    std::cout << "WrongDog default constructor called" << std::endl;
    this->type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &other) : WrongAnimal(other)
{
    std::cout << "WrongDog copy constructor called" << std::endl;
    *this = other;
}

WrongDog &WrongDog::operator=(const WrongDog &other)
{
    std::cout << "WrongDog assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog destructor called" << std::endl;
}

void WrongDog::makeSound() const
{
    std::cout << "Wrong Woof Woof" << std::endl;
}
