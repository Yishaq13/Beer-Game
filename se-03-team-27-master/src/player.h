/**
 * \file player.h
 */

#include <string>

#ifndef PLAYER_H
#define PLAYER_H

/**
 * \brief The Player class
 */

class Player 
{

public:

private:

    /** \brief The player id */
    unsigned int pId;

    /** \brief The player's role */
    unsigned int role;

    /** \brief Amount of beers in demand */
    unsigned int demand;

    /** \brief Amount of beers orderd */
    unsigned int incomingOrder;

    /** \brief Amount of beers incoming */
    unsigned int incomingShipment;

    /** \brief Amount of beers outgoing */
    unsigned int outgoingShipment;

    /** \brief Amount of beers in current inventory */
    unsigned int inventory;

    /** \brief Amount of beers in current inventory */
    unsigned int backorder;

    /** \brief Cost of the beers */
    double cost;

    /** \brief Total cost of beers */
    double totalCost;

    /** \brief beers received */
    bool orderReceived;

    /** \brief shipment received */
    bool shipmentReceived;

    /** \brief shipment placed */
    bool shipmentPlaced;

    /** \brief beers in odered */
    bool orderPlaced;

public:

    /**
     * \brief  Method for
     * \param
     * \param
     * \return
     */
    void placeOrder(int numberOfBeers);

    /**
     * \brief  Method for
     * \param
     * \param
     * \return
     */
    void placeShipment(int numberOfBeers);

    /**
     * \brief  Method for
     * \param
     * \param
     * \return
     */
    int decreaseInventory(int numberOfBeers);

    /**
     * \brief  Method for
     * \param
     * \param
     * \return
     */
    int increaseInventory(int numberOfBeers);

    /**
     * \brief  Method for
     * \param
     * \param
     * \return
     */
    void receiveShipment(int numberOfBeers);

    /**
     * \brief  Method for
     * \param
     * \param
     * \return
     */
    void receiveOrder(int numberOfBeers);

    /**
      * \brief Implementation of getters and setter for this class
      */

    /**
     * \brief  Getter Method for The player id
     * \return The player id
     */
    unsigned int getPId() const;

    /**
     * \brief  Setter Method for The player id
     * \param  value The player id
     * \return void 
     */
    void setPId(unsigned int value);

    /**
     * \brief  Getter Method for The player role
     * \return The player role
     */
    unsigned int getRole() const;

    /**
     * \brief  Setter Method for The player role
     * \param  value The player role
     * \return void 
     */
    void setRole(unsigned int value);

    /**
     * \brief  Getter Method for Amount of beers in demand
     * \return Amount of beers in demand
     */
    unsigned int getDemand() const;

    /**
     * \brief  Setter Method for Amount of beers in demand
     * \param  value Amount of beers in demand
     * \return void 
     */
    void setDemand(unsigned int value);

    /**
     * \brief  Getter Method for Amount of beers ordered
     * \return Amount of beers ordered
     */
    bool getOrderPlaced() const;

    /**
     * \brief  Setter Method for Amount of beers ordered
     * \param value Amount of beers ordered
     * \return void 
     */
    void setOrderPlaced(bool value);

    /**
     * \brief  Getter Method for Amount of beers in inventory
     * \return Amount of beers in inventory
     */
    unsigned int getInventory() const;

    /**
     * \brief  Setter Method for Amount of beers in inventory
     * \param value Amount of beers in inventory
     * \return void 
     */
    void setInventory(unsigned int value);

    /**
     * \brief  Getter Method for Amount of beers in back order
     * \return Amount of beers in back order
     */
    unsigned int getBackorder() const;

    /**
     * \brief  Setter Method for Amount of beers in back order
     * \param value Amount of beers in back order
     * \return void 
     */
    void setBackorder(unsigned int value);

    /**
     * \brief  Getter Method for Beer cost
     * \return Beer cost
     */
    double getCost() const;

    /**
     * \brief  Setter Method for Beer cost
     * \param  value Beer cost
     * \return void 
     */
    void setCost(double value);

    /**
     * \brief  Getter Method for Total Beer cost
     * \return Total Beer cost
     */
    double getTotalCost() const;

    /**
     * \brief  Setter Method for Total Beer cost
     * \param  value Total Beer cost
     * \return void
     */
    void setTotalCost(double value);

    /**
     * \brief  Getter Method for Amount of beers in incoming order
     * \return Amount of beers in incoming order
     */
    unsigned int getIncomingOrder() const;

    /**
     * \brief  Setter Method for Amount of beers in incomingorder
     * \param value Amount of beers in incoming order
     * \return void
     */
    void setIncomingOrder(unsigned int value);

    /**
     * \brief  Getter Method for Amount of beers in incoming shipment
     * \return Amount of beers in incoming shipment
     */
    unsigned int getIncomingShipment() const;

    /**
     * \brief  Setter Method for Amount of beers in incomingshipment
     * \param value Amount of beers in incoming shipment
     * \return void
     */
    void setIncomingShipment(unsigned int value);

    /**
     * \brief  Getter Method for Amount of beers in outgoing shipment
     * \return Amount of beers in outgoing shipment
     */
    unsigned int getOutgoingShipment() const;

    /**
     * \brief  Setter Method for Amount of beers in outgoingshipment
     * \param value Amount of beers in outgoing shipment
     * \return void
     */
    void setOutgoingShipment(unsigned int value);

    /**
     * \brief  Getter Method for Amount of beers received
     * \return Amount of beers received
     */
    bool getOrderReceived() const;

    /**
     * \brief  Setter Method for Amount of beers received
     * \param value Amount of beers received
     * \return void
     */
    void setOrderReceived(bool value);

    /**
     * \brief  Getter Method for Amount of shipment of beers received
     * \return Amount of shipment of beers received
     */
    bool getShipmentReceived() const;

    /**
     * \brief  Setter Method for Amount of shipment of beers received
     * \param value Amount of shipment of beers received
     * \return void
     */
    void setShipmentReceived(bool value);

    /**
     * \brief  Getter Method for Amount of shipment of beers placed
     * \return Amount of shipment of beers placed
     */
    bool getShipmentPlaced() const;

    /**
     * \brief  Setter Method for Amount of shipment of beers placed
     * \param value Amount of shipment of beers placed
     * \return void
     */
    void setShipmentPlaced(bool value);

    /**
     * \brief  Getter Method for Amount avalible shipment of beers
     * \param  Amount of avalible shipment of beers placed
     * \return void
     */

    int getAvailableShipment(int demand);
};


#endif // PLAYER_H
