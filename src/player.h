/**
 * \file player.h
 */



#ifndef PLAYER_H
#define PLAYER_H
#include "PlayerEvent.h"


/**
 * \brief The Player class
 */

class Player 
{

private:

    /** \brief Amount of beers orderd */
    Order incomingOrder;

    /** \brief Amount of beers incoming */
    Shipment incomingShipment;

    /** \brief The player id */
    unsigned int pId;

    /** \brief The player's role */
    unsigned int role;

    /** \brief Amount of beers in demand */
    unsigned int demand;

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

    /** \brief Shipment received */
    bool shipmentReceived;

    /** \brief Shipment placed */
    bool shipmentPlaced;

    /** \brief beers orders */
    bool orderPlaced;

public:

    /**
     * \brief  Method for placing order of beers
     * \param Amount of beers orderd
     * \return Order
     */
    Order placeOrder(int numberOfBeers);

    /**
     * \brief  Method for shipment of beers placed
     * \param Amount of beers avaliblr for shipment
     * \return void
     */
    Shipment placeShipment(int numberOfBeers);

    /**
     * \brief  Method for decreasing inventory
     * \param Amount of beers removed from inventory
     * \return Amount of beers in inventory
     */
    int decreaseInventory(int numberOfBeers);

    /**
     * \brief  Method for Increasing Inventory
     * \param Amount of beers added to inventory
     * \return Amount of beers in inventory
     */
    int increaseInventory(int numberOfBeers);

    /**
     * \brief  Method for Receiving shipment
     * \param Amount of beers received by shipment
     * \return void
     */
    void receiveShipment(int numberOfBeers);

    /**
     * \brief  Method for Reseiving order
     * \param Amount of beers received
     * \return void
     */
    void receiveOrder(int numberOfBeers);

    
    /**
     * \brief  Getter Method for Amount avalible shipment of beers
     * \param  Amount of beers demanded for shipment
     * \return Amount of beers avalible for shipment
     */

    int getAvailableShipment(unsigned int demand);

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
     * \brief  Getter Method to check if orderd placed or not
     * \return True or False
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
     * \brief  Getter Method to check if order received or not
     * \return True or False
     */
    bool isOrderReceived() const;

    /**
     * \brief  Setter Method to set order received to True or False
     * \param True or False
     * \return void
     */
    void setOrderReceived(bool value);

    /**
     * \brief  Getter Method to check if shipment received or not
     * \return Trur or False
     */
    bool isShipmentReceived() const;

    /**
     * \brief  Setter Method for Amount of shipment of beers received
     * \param True or False
     * \return void
     */
    void setShipmentReceived(bool value);

    /**
     * \brief  Getter Method to check if shipment placed or not
     * \return True or False
     */
    bool getShipmentPlaced() const;

    /**
     * \brief  Setter Method to set shipment places to True or False
     * \param True or False
     * \return void
     */
    void setShipmentPlaced(bool value);

};


#endif // PLAYER_H
