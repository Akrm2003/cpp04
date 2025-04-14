/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:22:00 by louisalah         #+#    #+#             */
/*   Updated: 2025/04/14 15:46:55 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = other.type;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called" << std::endl;

    if (this != &other)
    {
        Animal::operator=(other); // if needed
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*other.brain);
        this->type = other.type;
    }
    return *this;
}

Cat::~Cat()
{
    if (this->brain)
        delete this->brain;
    this->brain = NULL;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < BRAIN_SIZE)
        this->brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    if (index >= 0 && index < BRAIN_SIZE)
        return this->brain->getIdea(index);
    return "";
}