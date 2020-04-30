/**
 * \file game.h
 */

#ifndef GAME_H
#define GAME_H

#include <string>
#include <unordered_map>
#include <vector>
#include "PlayerEvent.h"
#include "player.h"

/**
 * \brief The Game class
 */
class Game 
{

private:
    /** \brief The Players */
    Player players[4];
    
    /** \brief The number of players */
    unsigned int numberOfPlayers;

    /** \brief The factory delay */
    unsigned int factoryDelay;

    /** \brief The game shipments to be executed */
    std::unordered_map< int, std::vector<Shipment> > shipmentsToBeExecuted;\

    /** \brief The game orders to be executed */
    std::unordered_map< int, std::vector<Order> > ordersToBeExecuted;

    //startgame()
    //executeShipmentForCurrentWeek()
    //getConsumerDemandForWeek(week:int)
    //addorder(role,numberofBeers) creates an order and puts it into orderstobeexecuted
    //addshipment(role,numberofbeers) creates a shipment and puts it into shipmentstobexecuted
    //Order: Receiver
    
    /** \brief The game id */
    unsigned int gId;

    /** \brief The game's intructor's id */
    unsigned int instrId;

    /** \brief The game's factory player id*/
    unsigned int pFactId;

    /** \brief The game's distributor player id*/
    unsigned int pDistributorId;

    /** \brief The game's wholesaler player id*/
    unsigned int pWholesalerId;

    /** \brief The game's retailer player id*/
    unsigned int pRetailerId;

    /** \brief The game's retailer player */

    /** \brief The game's demand per week*/
    std::vector<int> consumerDemandPerWeek;

    /** \brief The game's holding cost of beer */
    double holdingCost = 0.5;

    /** \brief The game's back order cost of beer */
    double backorderCost = 1;

    /** \brief The game's initial starting inventory*/
    int startingInventory = 12;

    /** \brief The game's total weeks to be played */
    int weeksToBePlayed = 26;

    /** \brief The game's current progressing week*/
    int currentWeek = 0 ;

    /** \brief The game's info code*/
    int infoCode = 0;

    /** \brief The game's order delay */
    int orderDelay;

    /** \brief The game's shipment delay */
    int shipmentDelay;

public:
    
    /**
     * \brief  Setter Method for number of players
     * \param value  The number of players
     * \return void
     */
    void setNumberOfPlayers(unsigned int nr);

    /**
     * \brief  Getter Method for number of players
     * \return Number of players
     */
    unsigned int getNumberOfPlayers();

    /**
     * \brief  Setter Method for factory delay
     * \param value  The delay
     * \return void
     */
    void setFactoryDelay(unsigned int nr);

    /**
     * \brief  Getter Method for Factory delay
     * \return The delay
     */
    unsigned int getFactoryDelay();

    /**
     * \brief  Method for Starting game 
     * \return void
     */

    void startgame();

    /**
     * \brief  Method for adding players
     * \param value  Player object
     * \return void
     */
    void addPlayer(Player p);

    /**
     * \brief  Getter Method for Upstream
     * \param value  The role
     * \return The player
     */
    Player* getUpstream(int role);

    /**
     * \brief  Getter Method for Downstream
     * \param value  The role 
     * \return The player
     */
    Player* getDownstream(int role);
    
    /**
     * \brief  Method for executing orders for current week
     * \return void
     */
    void executeOrdersForCurrentWeek();

    /**
     * \brief  Method for executing shipment for current week
     * \return void
     */
    void executeShipmentsForCurrentWeek();

    /**
     * \brief  Method for
     * \param value  
     * \param value  
     * \return
     */
    void updatePlayerInventories();

    /**
     * \brief  Method for
     * \param value  
     * \param value  
     * \return
     */
    int advanceWeek();

    /**
     * \brief  Method for
     * \param value  
     * \param value  
     * \return
     */
    void addOrder(int role,int numberofBeers);

    /**
     * \brief  Method for
     * \param value  
     * \param value  
     * \return
     */
    
    void addShipment(int role,int numberofBeers);
    /**
     * \brief  Method for
     * \param value  
     * \param value  
     * \return
     */
    std::vector<std::string > generatePasswords();

    /**
      * \brief Implementation of getters and setter for this class
      */

    /**
     * \brief  Getter Method for gid
     * \return gid
     */
    unsigned int getGId() const;

    /**
     * \brief  Setter Method for gid
     * \param value The value for gid
     * \return void
     */
    void setGId(unsigned int value);

    /**
     * \brief  Getter Method for the Instructor Id
     * \return The value of Instructor Id
     */
    unsigned int getInstrId() const;

    /**
     * \brief  Setter Method for the value of Instructor Id
     * \param value The value for Instructor Id
     * \return void
     */
    void setInstrId(unsigned int value);

    /**
     * \brief  Getter Method for factory player id
     * \return Factory player id
     */
    unsigned int getPFactId() const;

    /**
     * \brief  Setter Method for Factory player id
     * \param value  Factory player id
     * \return void
     */
    void setPFactId(unsigned int value);

    /**
     * \brief  Getter Method for distributor player id
     * \return  Distributor player id
     */
    unsigned int getPDistributorId() const;

    /**
     * \brief  Setter Method for Distributor player id
     * \param value Distributor player id
     * \return void
     */
    void setPDistributorId(unsigned int value);

    /**
     * \brief  Getter Method for wholesaler player id
     * \return 
     */
    unsigned int getPWholesalerId() const;

    /**
     * \brief  Setter Method for 
     * \param value   
     * \return void
     */
    void setPWholesalerId(unsigned int value);

    /**
     * \brief  Getter Method for retailer player id
     * \return Retailer player id
     */
    unsigned int getRetailerId() const;

    /**
     * \brief  Setter Method for retailer player id 
     * \param value Retailer player id
     * \return void
     */
    void setRetailerId(unsigned int value);

    /**
     * \brief  Getter Method for the orders to be executed
     * \return The map of orders to be executed
     */
    std::unordered_map<int, std::vector<Order>> getOrdersToBeExecuted() ;

    /**
     * \brief  Setter Method for for the orders to be executed
     * \param value  Map of the orders to be executed
     * \return void
     */
    void setOrdersToBeExecuted(const std::unordered_map<int, std::vector<int>> &value);

    /**
     * \brief  Getter Method for demand per week
     * \return The vector of demand per week
     */
    int getConsumerDemandForWeek(int week) ;

    /**
     * \brief  Setter Method for demand per week
     * \param value  Vector of demand per week
     * \return void
     */
    void setConsumerDemandForWeek(int week,int demand);

    /**
     * \brief  Getter Method for Order time delay
     * \return Order time delay
     */

    double getHoldingCost() const;

    /**
     * \brief  Setter Method for Holding Cost of a beer
     * \param value   Holding Cost of a beer
     * \return void
     */
    void setHoldingCost(double value);

    /**
     * \brief  Getter Method for Backorder Cost of a beer
     * \return Backorder Cost of a beer
     */
    double getBackorderCost() const;

    /**
     * \brief  Setter Method for Backorder Cost of a beer
     * \param value Backorder Cost of a beer
     * \return void
     */
    void setBackorderCost(double value);

    /**
     * \brief  Getter Method for StartingInventory
     * \return The initial Starting Inventory
     */
    int getStartingInventory() const;

    /**
     * \brief  Setter Method for Starting Inventory
     * \param value Starting Inventory
     * \return void
     */
    void setStartingInventory(int value);

    /**
     * \brief  Getter Method for Weeks To Be Played
     * \return Weeks To Be Played
     */
    int getWeeksToBePlayed() const;

    /**
     * \brief  Setter Method for Weeks To Be Played
     * \param value Weeks To Be Played
     * \return void
     */
    void setWeeksToBePlayed(int value);

    /**
     * \brief  Getter Method for the current week
     * \return The games current week
     */
    int getCurrentWeek() const;

    /**
     * \brief  Setter Method for the current week
     * \param value  the current week
     * \return void
     */
    void setCurrentWeek(int value);

    /**
     * \brief  Getter Method for info code
     * \return info code
     */
    int getInfoCode() const;

    /**
     * \brief  Setter Method for info code
     * \param value Info code
     * \return void
     */
    void setInfoCode(int value);

    /**
     * \brief  Getter Method for Order Delay of the game
     * \return Order Delay of the game
     */
    int getOrderDelay() const;

    /**
     * \brief  Setter Method for Order Delay of the game
     * \param value Order Delay of the game
     * \return void
     */
    void setOrderDelay(int value);

    /**
     * \brief  Getter Method for Shipment Delay of the game
     * \return Shipment Delay of the game
     */
    int getShipmentDelay() const;

    /**
     * \brief  Setter Method for Shipment Delay of the game
     * \param value Shipment Delay of the game
     * \return void
     */
    void setShipmentDelay(int value);
};
#endif // GAME_H
