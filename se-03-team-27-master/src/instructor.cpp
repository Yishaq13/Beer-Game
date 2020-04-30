#include "instructor.h"

unsigned int Instructor::getInstrId() const
{
    return instrId;
}

void Instructor::setInstrId(unsigned int value)
{
    instrId = value;
}

std::string Instructor::getInstrEmail() const
{
    return instrEmail;
}

void Instructor::setInstrEmail(const std::string &value)
{
    instrEmail = value;
}

std::string Instructor::getInstrPassword() const
{
    return instrPassword;
}

void Instructor::setInstrPassword(const std::string &value)
{
    instrPassword = value;
}

std::vector<int> Instructor::createGames(int numOfGames)
{
    std::vector<int> temp;

    for(int i=0; i<numOfGames; i++)
    {
        temp.push_back(this->createGame());
    }

    return temp;
}

void Instructor::showGamesStatus()
{

}

int Instructor::createGame()
{
    game = new Game;
    return game->getGId();
}

std::vector<Game> Instructor::getGames()
{
    return this->Games;
}

void Instructor::setGames(const std::vector<Game> &games)
{
    Games = games;
}
