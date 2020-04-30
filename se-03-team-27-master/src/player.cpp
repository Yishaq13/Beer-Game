#include "player.h"

void Player::placeOrder(int numberOfBeers)
{

}

void Player::placeShipment(int numberOfBeers)
{

}

int Player::decreaseInventory(int numberOfBeers)
{
    this->inventory -= numberOfBeers;
    return this->inventory;

}

int Player::increaseInventory(int numberOfBeers)
{
    this->inventory += numberOfBeers;
    return this->inventory;

}

void Player::receiveShipment(int numberOfBeers)
{

}

void Player::receiveOrder(int numberOfBeers)
{

}

unsigned int Player::getPId() const
{
    return pId;
}

void Player::setPId(unsigned int value)
{
    pId = value;
}

unsigned int Player::getRole() const
{
    return role;
}

void Player::setRole(unsigned int value)
{
    role = value;
}

unsigned int Player::getDemand() const
{
    return demand;
}

void Player::setDemand(unsigned int value)
{
    demand = value;
}

bool Player::getOrderPlaced() const
{
    return orderPlaced;
}

void Player::setOrderPlaced(bool value)
{
    orderPlaced = value;
}

unsigned int Player::getInventory() const
{
    return inventory;
}

void Player::setInventory(unsigned int value)
{
    inventory = value;
}

unsigned int Player::getBackorder() const
{
    return backorder;
}

void Player::setBackorder(unsigned int value)
{
    backorder = value;
}

double Player::getCost() const
{
    return cost;
}

void Player::setCost(double value)
{
    cost = value;
}

double Player::getTotalCost() const
{
    return totalCost;
}

void Player::setTotalCost(double value)
{
    totalCost = value;
}

unsigned int Player::getIncomingOrder() const
{
    return incomingOrder;
}

void Player::setIncomingOrder(unsigned int value)
{
    incomingOrder = value;
}

unsigned int Player::getIncomingShipment() const
{
    return incomingShipment;
}

void Player::setIncomingShipment(unsigned int value)
{
    incomingShipment = value;
}

unsigned int Player::getOutgoingShipment() const
{
    return outgoingShipment;
}

void Player::setOutgoingShipment(unsigned int value)
{
    outgoingShipment = value;
}

bool Player::getOrderReceived() const
{
    return orderReceived;
}

void Player::setOrderReceived(bool value)
{
    orderReceived = value;
}

bool Player::getShipmentReceived() const
{
    return shipmentReceived;
}

void Player::setShipmentReceived(bool value)
{
    shipmentReceived = value;
}

bool Player::getShipmentPlaced() const
{
    return shipmentPlaced;
}

void Player::setShipmentPlaced(bool value)
{
    shipmentPlaced = value;
}

int Player::getAvailableShipment(int demand)
{
    if(this->inventory <= demand)
    {
        return this->inventory;
    }else{
        return demand;
    }
}
