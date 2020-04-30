
#ifndef ORDER_H
#define ORDER_H

/**
 * \brief The PlayerEvent class
 */


class PlayerEvent
{

protected:

    /** \brief The order id */
    unsigned int orderId;

    /** \brief The gid */
    unsigned int gid;
    

    /** \brief The order from a player */
    unsigned int fromPlayerid;

    /** \brief The order to a player */
    unsigned int toPlayerid;

    /** \brief The order in week */
    unsigned int orderedInWeek;

    /** \brief The shipped in week */
    unsigned int shippedInWeek;

    /** \brief The order's number of beers*/
    unsigned int numberOfBeers;
    

public:

    /**
      * \brief Implementation of getters and setter for this class
      */
    
    /**
     * \brief  Getter Method for the order id
     * \return The order id
     */
    unsigned int getOrderId() const;
    
    /**
     * \brief  Setter Method for the order id
     * \param value The order id
     * \return void
     */
    void setOrderId(unsigned int value);

    
    /**
     * \brief  Getter Method for gid
     * \return gid
     */
    unsigned int getGId() const;
    
    /**
     * \brief  Setter Method for game id
     * \param value the game id of the order
     * \return void
     */
    void setGId(unsigned int value);

    /**
     * \brief  Setter Method for game id
     * \param value the game id of the order
     * \return void
     */
    unsigned int getFromPlayerId() const;

    /**
     * \brief  Setter Method for fromPlayerId
     * \param value the From Player id
     * \return void
     */
    void setFromPlayerId(unsigned int val);

    
    /**
     * \brief  Getter Method for  player id for the beer to get shipped to 
     * \return  player id for the beer to get shipped to 
     */
    unsigned int getToPlayerId() const;
    
    /**
     * \brief  Setter Method for setToPlayerId
     * \param value The player id for the beer to get shipped to 
     * \return void
     */
    void setToPlayerId(unsigned int value);
    /**
     * \brief  Getter Method for ordered in week
     * \return The beers ordered in week
     */
    unsigned int getOrderedInWeek() const;
    
    /**
     * \brief  Setter Method for the beers ordered in week
     * \param  value The beers ordered in week
     * \return void
     */
    void setOrderedInWeek(unsigned int value);

    
    /**
     * \brief  Getter Method for The beers shipped in week
     * \return The beers shipped in week
     */
    unsigned int getShippedInWeek() const;
    
    /**
     * \brief  Setter Method for The beers shipped in week
     * \param value The beers shipped in week
     * \return void
     */
    void setShippedInWeek(unsigned int value);

    
    /**
     * \brief  Getter Method for the numbers of beer
     * \return The numbers of beer
     */
    unsigned int getNumberOfBeers() const;
    
    /**
     * \brief  Setter Method for the numbers of beer
     * \param  value The numbers of beer
     * \return void
     */
    void setNumberOfBeers(unsigned int value);
};


/**
 * \brief The Order class
 */

class Order : public PlayerEvent{
    /**
     * \brief  Method for executing orders
     * \return void
     */
    void executeOrder();
    
};

/**
 * \brief The Shipment class
 */
class Shipment : public PlayerEvent{
    /**
     * \brief  Method for executing shipment
     * \return void
     */
    void executeShipment();
};

#endif // ORDER_H
