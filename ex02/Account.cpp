/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:18:19 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/22 12:30:35 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <sstream>
#include <iostream>
#include <iomanip>

std::string iToString(const int i) {
    std::ostringstream oss;
    oss << i;
    return oss.str();
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount( initial_deposit ) {
    
    _accountIndex = _nbAccounts;
    _totalAmount += initial_deposit;
    _nbAccounts += 1;

    _displayTimestamp();
    std::cout << "index:" << iToString(_accountIndex) << ";";
    std::cout << "amount:" << iToString(checkAmount()) << ";";
    std::cout << "created";
    std::cout << std::endl;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << "index:" << iToString(_accountIndex) << ";";
    std::cout << "amount:" << iToString(checkAmount()) << ";";
    std::cout << "closed";
    std::cout << std::endl;
}

int Account::getNbAccounts( void ) {
    return (_nbAccounts);
}

int Account::getTotalAmount( void ) {
    return (_totalAmount);
}

int Account::getNbDeposits( void ) {
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {
    return (_totalNbWithdrawals);
}

void    Account::displayAccountsInfos( void ) {

    _displayTimestamp();
    std::cout << "accounts:" << iToString(getNbAccounts()) << ";";
    std::cout << "total:" << iToString(getTotalAmount()) << ";";
    std::cout << "deposits:" << iToString(getNbDeposits()) << ";";
    std::cout << "withdrawals:" << iToString(getNbWithdrawals());
    std::cout << std::endl;
}

void    Account::makeDeposit( int deposit) {

    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += 1;
    
    _displayTimestamp();
    std::cout << "index:" << iToString(_accountIndex) << ";";
    std::cout << "p_amount:" << iToString(checkAmount() - deposit) << ";";
    std::cout << "deposit:" << iToString(deposit) << ";";
    std::cout << "amount:" << iToString(checkAmount()) << ";";
    std::cout << "nb_deposits:" << iToString(_nbDeposits);
    std::cout << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal) {
    
    if (withdrawal > checkAmount()) {
        _displayTimestamp();
        std::cout << "index:" << iToString(_accountIndex) << ";";
        std::cout << "p_amount:" << iToString(checkAmount()) << ";";
        std::cout << "withdrawal:refused";
        std::cout << std::endl;
        return (false);
    }
    
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals += 1;
    _totalNbWithdrawals += 1;
    
    _displayTimestamp();
    std::cout << "index:" << iToString(_accountIndex) << ";";
    std::cout << "p_amount:" << iToString(checkAmount() + withdrawal) << ";";
    std::cout << "withdrawal:" << iToString(withdrawal) << ";";
    std::cout << "amount:" << iToString(checkAmount()) << ";";
    std::cout << "nb_withdrawals:" << iToString(_nbWithdrawals);
    std::cout << std::endl;
    
    return (true);
}
	
int Account::checkAmount( void ) const {
    return (_amount);
}

void    Account::displayStatus( void ) const {
    
    _displayTimestamp();
    std::cout << "index:" << iToString(_accountIndex) << ";";
    std::cout << "amount:" << iToString(checkAmount()) << ";";
    std::cout << "deposits:" << iToString(_nbDeposits) << ";";
    std::cout << "withdrawals:" << iToString(_nbWithdrawals);
    std::cout << std::endl;
}

void	Account::_displayTimestamp( void ) {

    char formatted[20];
    std::time_t now;
    
    now = std::time(NULL);
    std::strftime(formatted, sizeof(formatted), "[%Y%m%d_%H%M%S] ", std::localtime(&now));
    
    std::cout << formatted;
}
