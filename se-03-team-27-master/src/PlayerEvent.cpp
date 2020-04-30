#include "PlayerEvent.h"

void PlayerEvent::executeOrder()
{

}

unsigned int PlayerEvent::getOrderId() const
{
    return orderId;
}

void PlayerEvent::setOrderId(unsigned int value)
{
    orderId = value;
}

unsigned int PlayerEvent::getGId() const
{
    return gid;
}

void PlayerEvent::setGId(unsigned int value)
{
    gid = value;
}

unsigned int PlayerEvent::getFromPlayerId() const
{
    return fromPlayerid;
}

void PlayerEvent::setFromPlayerId(unsigned int value)
{
    fromPlayerid = value;
}

unsigned int PlayerEvent::getToPlayerId() const
{
    return toPlayerid;
}

void PlayerEvent::setToPlayerId(unsigned int value)
{
    toPlayerid = value;
}

unsigned int PlayerEvent::getOrderedInWeek() const
{
    return orderedInWeek;
}

void PlayerEvent::setOrderedInWeek(unsigned int value)
{
    orderedInWeek = value;
}

unsigned int PlayerEvent::getShippedInWeek() const
{
    return shippedInWeek;
}

void PlayerEvent::setShippedInWeek(unsigned int value)
{
    shippedInWeek = value;
}

unsigned int PlayerEvent::getNumberOfBeers() const
{
    return numberOfBeers;
}

void PlayerEvent::setNumberOfBeers(unsigned int value)
{
    numberOfBeers = value;
}
