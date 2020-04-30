#include "game.h"

void Game::executeOrderForCurrentWeek()
{
}

void Game::updatePlayerInventories()
{
}

int Game::advanceWeek()
{
    this->currentWeek++;
    return this->currentWeek;
}

void Game::addOrder(Order &order)
{
}

std::vector<std::string> Game::generatePasswords()
{
}

unsigned int Game::getGId() const
{
    return gId;
}

void Game::setGId(unsigned int value)
{
    gId = value;
}

unsigned int Game::getInstrId() const
{
    return instrId;
}

void Game::setInstrId(unsigned int value)
{
    instrId = value;
}

unsigned int Game::getPFactId() const
{
    return pFactId;
}

void Game::setPFactId(unsigned int value)
{
    pFactId = value;
}

unsigned int Game::getPDistributorId() const
{
    return pDistributorId;
}

void Game::setPDistributorId(unsigned int value)
{
    pDistributorId = value;
}

unsigned int Game::getPWholesalerId() const
{
    return pWholesalerId;
}

void Game::setPWholesalerId(unsigned int value)
{
    pWholesalerId = value;
}

unsigned int Game::getRetailerId() const
{
    return pRetailerId;
}

void Game::setRetailerId(unsigned int value)
{
    pRetailerId = value;
}

std::map<int, std::vector<int>> Game::getOrdersToBeExecuted() const
{
    return ordersToBeExecuted;
}

void Game::setOrdersToBeExecuted(const std::map<int, std::vector<int>> &value)
{
    ordersToBeExecuted = value;
}

std::vector<int> Game::getDemandPerWeek() const
{
    return demandPerWeek;
}

void Game::setDemandPerWeek(const std::vector<int> &value)
{
    demandPerWeek = value;
}

int Game::getOrderTimeDelay() const
{
    return orderTimeDelay;
}

void Game::setOrderTimeDelay(int value)
{
    orderTimeDelay = value;
}

double Game::getHoldingCost() const
{
    return holdingCost;
}

void Game::setHoldingCost(double value)
{
    holdingCost = value;
}

double Game::getBackorderCost() const
{
    return backorderCost;
}

void Game::setBackorderCost(double value)
{
    backorderCost = value;
}

int Game::getStartingInventory() const
{
    return startingInventory;
}

void Game::setStartingInventory(int value)
{
    startingInventory = value;
}

int Game::getWeeksToBePlayed() const
{
    return weeksToBePlayed;
}

void Game::setWeeksToBePlayed(int value)
{
    weeksToBePlayed = value;
}

int Game::getCurrentWeek() const
{
    return currentWeek;
}

void Game::setCurrentWeek(int value)
{
    currentWeek = value;
}

int Game::getInfoCode() const
{
    return infoCode;
}

void Game::setInfoCode(int value)
{
    infoCode = value;
}

int Game::getOrderDelay() const
{
    return orderDelay;
}

void Game::setOrderDelay(int value)
{
    orderDelay = value;
}

int Game::getShipmentDelay() const
{
    return shipmentDelay;
}

void Game::setShipmentDelay(int value)
{
    shipmentDelay = value;
}
