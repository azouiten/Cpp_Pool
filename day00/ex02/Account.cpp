/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:17:53 by azouiten          #+#    #+#             */
/*   Updated: 2021/09/17 12:05:05 by azouiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

void    timestamp(void)
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::cout << "[";
    std::cout << std::setfill('0') << std::setw(4) << 1900 + ltm->tm_year;
    std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << 5+ltm->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << 30+ltm->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_sec;
    std::cout << "] ";
}

Account::Account(int initial_deposit)
{
    timestamp();
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts += 1;
    this->_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_amount = initial_deposit;
    this->_nbWithdrawals = 0;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
    return;
}

Account::Account(void)
{
    timestamp();
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts += 1;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout << "index:" << this->_accountIndex << ";amount:0;created" << std::endl;
}

Account::~Account(void)
{
    timestamp();
    this->_nbAccounts -= 1;
    this->_totalAmount -= this->_amount;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

void    Account::displayAccountsInfos(void)
{
    timestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void    Account::makeDeposit(int deposit)
{
    timestamp();
    this->_amount += deposit;
    this->_nbDeposits += 1;
    _totalNbDeposits += 1;
    std::cout << "index:" << this->_accountIndex << ";p_amount" << this->_amount << ";deposit:" << deposit;
    _totalAmount += deposit;
    std::cout  << ";amount" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal)
{
    timestamp();
    if (withdrawal > this->_amount)
    {
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawals:refused" << std::endl;
        return (false);
    }
    this->_nbWithdrawals += 1;
    this->_totalNbWithdrawals += 1;
    std::cout << "index:" << this->_accountIndex << ";p_amount" << this->_amount << ";withdrawal:" << withdrawal;
    this->_amount -= withdrawal;
    std::cout  << ";amount" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    _totalAmount -= withdrawal;
    return (true);
}

int     Account::checkAmount(void) const
{
    return (this->_amount);
}

void    Account::displayStatus(void) const
{
    timestamp();
    std::cout << "index:" << this->_accountIndex << ";amount" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}