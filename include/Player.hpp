#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML\Graphics.hpp>

#include "Dot.hpp"
#include "Enemy.hpp"

#define STARTING_SIZE 10
#define SIZE_STEP 2

class Player : public Dot
{
public:
    Player();
    Player(sf::Vector2u l_winSize);
    ~Player();

    void Move(const sf::RenderWindow &l_window);
    void Eat();

    void SetAlive(bool l_alive);
    int GetScore();
    int IsAlive();

private:
    int m_score;
    bool m_alive;
};

#endif