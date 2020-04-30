/**
 * \file instructor.h
 */

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <string>
#include <vector>
#include "game.h"

/**
 * \brief The Instructor class
 */
class Instructor 
{

private:

    /** \brief The instructor id */
    unsigned int instrId;

    /** \brief The Instructor's Email */
    std::string instrEmail;

    /** \brief The Instructor's Password */
    std::string instrPassword;

    /** \brief Creating object of game class */
    Game * game;

    /** \brief Creating vector to store games */
    std::vector<Game> Games;


public:

    /**
     * \brief  Getter Method for instructor id
     * \return The instructor id
     */
    unsigned int getInstrId() const;
    
    /**
     * \brief  Setter Method for instructor id
     * \param value The instructor id
     * \return void
     */
    void setInstrId(unsigned int value);

    /**
     * \brief  Getter Method for the instructor email
     * \return The instructor email
     */
    std::string getInstrEmail() const;

    /**
     * \brief  Setter Method for  instructor email
     * \param value The instructor email
     * \return void
     */
    void setInstrEmail(const std::string &value);

    /**
     * \brief  Getter Method for instructor password
     * \return The instructor password
     */
    std::string getInstrPassword() const;
    
    /**
     * \brief  Setter Method for  instructor password
     * \param value The  instructor password
     * \return void
     */
    void setInstrPassword(const std::string &value);

    /**
     * \brief Method for  showing status of game
     * \return void
     */
    void showGamesStatus();

    /**
     * \brief  Method for  creating game
     * \return int
     */
    int createGame();

    /**
     * \brief  Method for  Creating games
     * \param value The  number of games
     * \return vector of games ids
     */
    std::vector<int> createGames(int numOfGames);

    /**
     * \brief  Getter Method for games
     * \return vector of games
     */
    std::vector<Game> getGames();

    /**
     * \brief  Setter Method for  games
     * \param value The  game object
     * \return void
     */
    void setGames(const std::vector<Game> &value);


};

#endif // INSTRUCTOR_H
