#include "player.h"

Order Player::placeOrder(int numberOfBeers)
{
    Order o;
    o.setNumberOfBeers(numberOfBeers);
    return o;
}

Shipment Player::placeShipment(int numberOfBeers)
{
    Shipment s;
    s.setNumberOfBeers(numberOfBeers);
    return s;
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
    PlayerEvent p;
    p.setNumberOfBeers(numberOfBeers);
    setShipmentReceived(1);
}

void Player::receiveOrder(int numberOfBeers)
{
    PlayerEvent p;
    p.setNumberOfBeers(numberOfBeers);
    setOrderReceived(1);
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

unsigned int Player::getOutgoingShipment() const
{
    return outgoingShipment;
}

void Player::setOutgoingShipment(unsigned int value)
{
    outgoingShipment = value;
}

bool Player::isOrderReceived() const
{
    return orderReceived;
}

void Player::setOrderReceived(bool value)
{
    orderReceived = value;
}

bool Player::isShipmentReceived() const
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

int Player::getAvailableShipment(unsigned int demand)
{
    if(demand <= inventory)
    {
        return demand;
    }else{
        return inventory;
    }
}
