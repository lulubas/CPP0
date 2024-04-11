/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:18:19 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/11 03:11:23 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount( initial_deposit ) {
    
    _accountIndex = _nbAccounts;
    _totalAmount += initial_deposit;
    _nbAccounts += 1;

    _displayTimestamp();
    std::cout << "index:" << std::to_string(_accountIndex) << ";";
    std::cout << "amount:" << std::to_string(checkAmount()) << ";";
    std::cout << "created";
    std::cout << std::endl;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << "index:" << std::to_string(_accountIndex) << ";";
    std::cout << "amount:" << std::to_string(checkAmount()) << ";";
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
    std::cout << "accounts:" << std::to_string(getNbAccounts()) << ";";
    std::cout << "total:" << std::to_string(getTotalAmount()) << ";";
    std::cout << "deposits:" << std::to_string(getNbDeposits()) << ";";
    std::cout << "withdrawals:" << std::to_string(getNbWithdrawals()) << ";";
    std::cout << std::endl;
}

void    Account::makeDeposit( int deposit) {

    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += 1;
    
    _displayTimestamp();
    std::cout << "index:" << std::to_string(_accountIndex) << ";";
    std::cout << "p_amount:" << std::to_string(checkAmount() - deposit) << ";";
    std::cout << "deposit:" << std::to_string(deposit) << ";";
    std::cout << "amount:" << std::to_string(checkAmount()) << ";";
    std::cout << "nb_deposits:" << std::to_string(_nbDeposits) << ";";
    std::cout << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal) {
    
    if (withdrawal > checkAmount()) {
        _displayTimestamp();
        std::cout << "index:" << std::to_string(_accountIndex) << ";";
        std::cout << "p_amount:" << std::to_string(checkAmount()) << ";";
        std::cout << "withdrawal: refused";
        std::cout << std::endl;
        return (false);
    }
    
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals += 1;
    _totalNbWithdrawals += 1;
    
    _displayTimestamp();
    std::cout << "index:" << std::to_string(_accountIndex) << ";";
    std::cout << "p_amount:" << std::to_string(checkAmount() + withdrawal) << ";";
    std::cout << "withdrawal:" << std::to_string(withdrawal) << ";";
    std::cout << "amount:" << std::to_string(checkAmount()) << ";";
    std::cout << "nb_withdrawals:" << std::to_string(_nbWithdrawals) << ";";
    std::cout << std::endl;
    
    return (true);
}
	
int Account::checkAmount( void ) const {
    return (_amount);
}

void    Account::displayStatus( void ) const {
    
    _displayTimestamp();
    std::cout << "index:" << std::to_string(_accountIndex) << ";";
    std::cout << "amount:" << std::to_string(checkAmount()) << ";";
    std::cout << "deposits:" << std::to_string(_nbDeposits) << ";";
    std::cout << "withdrawals:" << std::to_string(_nbWithdrawals) << ";";
    std::cout << std::endl;
}

void	Account::_displayTimestamp( void ) {

    char formatted[20];
    std::time_t now;
    
    now = std::time(nullptr);
    std::strftime(formatted, sizeof(formatted), "[%Y%m%d_%H%M%S] ", std::localtime(&now));
    
    std::cout << formatted;
}
