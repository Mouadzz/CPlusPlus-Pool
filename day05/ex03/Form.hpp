/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 10:46:40 by mouadlas          #+#    #+#             */
/*   Updated: 2021/05/23 17:59:40 by mouadlas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>

class Bureaucrat;
class Form
{
private:
    std::string const _name;
    bool _isSigned;
    int const _signGrade;
    int const _executeGrade;

public:
    Form(std::string const &name, int const &signGrade, int const &executeGrade);
    virtual ~Form();
    Form(Form &copy);
    Form &operator=(const Form &copy);
    std::string const &getName() const;
    int const &getSignGrade() const;
    int const &getExecuteGrade() const;
    bool isSigned() const;

    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };

    class NotExecutedException : public std::exception
    {
        const char *what() const throw();
    };

    void beSigned(Bureaucrat const &bureau);
    virtual void  execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, Form &c);

#endif