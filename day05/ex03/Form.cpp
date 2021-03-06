/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 10:46:38 by mouadlas          #+#    #+#             */
/*   Updated: 2021/06/06 20:27:03 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const &name, int const &signGrade, int const &executeGrade) : _name(name), _signGrade(signGrade), _executeGrade(executeGrade)
{
    if (signGrade < 1 || executeGrade < 1)
    {
        throw Form::GradeTooHighException();
    }
    if (signGrade > 150 || executeGrade > 150)
    {
        throw Form::GradeTooLowException();
    }
    this->_isSigned = false;
}

Form::~Form() {}

Form::Form(Form &copy) : _name(copy._name), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade)
{
    *this = copy;
}

void Form::operator=(const Form &copy)
{
    this->_isSigned = copy._isSigned;
}

std::string const &Form::getName() const { return this->_name; }

int const &Form::getSignGrade() const { return this->_signGrade; }

int const &Form::getExecuteGrade() const { return this->_executeGrade; }

bool Form::isSigned() const { return this->_isSigned; }

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High!";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low!";
}

const char *Form::NotExecutedException::what() const throw()
{
    return "Can't Be Executed!";
}

void Form::beSigned(Bureaucrat const &bureau)
{
    if (bureau.getGrade() <= this->_signGrade)
    {
        this->_isSigned = true;
    }
    else
    {
        this->_isSigned = false;
        throw Form::GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &out, Form &c)
{
    out << c.getName() << "| Sign Grade: " << c.getSignGrade() << " | Execute Grade: " << c.getExecuteGrade() << " | State: " << ((c.isSigned() == true) ? "Signed." : "Unsigned.") << std::endl;
    return out;
}