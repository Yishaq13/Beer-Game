#include "game.h"
#include "PlayerEvent.h"
#include "player.h"
#include <vector>
#include <iostream>
using namespace std;


void Game::startgame(){
    setNumberOfPlayers(4);
    bool isempty[4];
    int rl,nw;
    for(int i=0;i<4;i++){
        isempty[i] = true;
    }
    int k = getNumberOfPlayers();
    cout<<"Enter number of weeks to be played\n";
    cin>>nw;
    setWeeksToBePlayed(nw);
    
    for(int i=0;i<k;i++){
        Player p;
    start:
        cout<<"Enter a role 1-Factory 2-Distributor 3-Wholesaler 4-Retailer\n";
        cin>>rl;
        if(isempty[rl] == true){
            p.setRole(rl);
            addPlayer(p);
        }
        else{
            cout<<"Sorry that role is already taken Choose another one\n";
            goto start;
        }
    }
    
    while(currentWeek!=weeksToBePlayed){
        executeOrdersForCurrentWeek();
        executeShipmentsForCurrentWeek();
        
    }
    
    
}

Player* Game::getUpstream(int role){
    if(role==1){
        std::cout<<"No upstream for the factory!\n";
        return NULL;
    }
    else{
        return &players[role-2];
    }
}

Player* Game::getDownstream(int role){
    if(role==4){
        std::cout<<"No downstream for the retailer!\n";
        return NULL;
    }
    else{
        return &players[role];
    }
}


void Game::setFactoryDelay(unsigned int fd){
    factoryDelay = fd;
}
unsigned int Game::getFactoryDelay(){
    return factoryDelay;
}


void Game::setNumberOfPlayers(unsigned int nr){
    numberOfPlayers = nr;
}
unsigned int Game::getNumberOfPlayers(){
    return numberOfPlayers;
}

void print(int i){
    if(i==0){
        cout<<"Factory\n";
    }
    else if(i==1){
        cout<<"Distributor\n";
    }
    else if(i==2){
        cout<<"Wholesaler\n";
    }
    else if(1==3){
        cout<<"Retailer\n";
    }
    else{
        cout<<"Error\n";
    }
}


void Game::executeOrdersForCurrentWeek()
{
    int n;
    for(int i=0;i<4;i++){
        print(i);
        cout<<"Place Order\n";
        cin>>n;
        addOrder(i+1,n);
    }
}

void Game::executeShipmentsForCurrentWeek()
{
    int arr[4];
    if(currentWeek<2){
        for(int i=0;i<4;i++){
            arr[i] = 0;
        }
    }
    else{
        for(int i=0;i<4;i++){
            arr[i] = (ordersToBeExecuted.at(currentWeek-2))[i].getNumberOfBeers();
        }
    }
    for(int i=0;i<4;i++){
        int n = players[i].getAvailableShipment(arr[i]);
        addShipment(i+1,n);
    }
}



//void Game::updatePlayerInventories()
//{
//}

int Game::advanceWeek()
{
    this->currentWeek++;
    return this->currentWeek;
}

void Game::addOrder(int role,int NumberOfBeers)
{
    if(role==1){
        std::cout<<"Factory cannot order\n";
    }
    else{
        Order o;
        o.setNumberOfBeers(NumberOfBeers);
        ((ordersToBeExecuted.at(currentWeek))[role-1]) = o;
    }
}

void Game::addShipment(int role,int NumberOfBeers)
{
    if(role==4){
        std::cout<<"Retailer cannot ship\n";
    }
    else{
        Shipment s;
        s.setNumberOfBeers(NumberOfBeers);
        ((shipmentsToBeExecuted.at(currentWeek))[role-1])=s;
    }
}

//std::vector<std::string> Game::generatePasswords()
//{
//}

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

void Game::addPlayer(Player p){
    players[p.getRole()-1] = p;
}




std::unordered_map<int, std::vector<Order>> Game::getOrdersToBeExecuted()
{
    return ordersToBeExecuted;
}

//void Game::setOrdersToBeExecuted(const std::unordered_map<int, std::vector<int>> &value)
//{
//    ordersToBeExecuted = value;
//}

int Game::getConsumerDemandForWeek(int week)
{
//    std::vector<int> output;
//    std::unordered_map< int , std::vector<Order> >::const_iterator it = ordersToBeExecuted.find(week);
//
//    if(it!=ordersToBeExecuted.end()){
//        std::cout<<"Invalid week\n";
//    }
//
//    //i<4 because there are 4 players
//    for(int i=0;i<4;i++){
//        output.push_back(  ((it->second)[i]).getNumberOfBeers() );
//    }
    
    return consumerDemandPerWeek[week];
}

void Game::setConsumerDemandForWeek(int week,int demand)
{
    consumerDemandPerWeek[week] = demand;
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
