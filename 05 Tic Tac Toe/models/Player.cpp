#include "Player.h"

Player::Player(std::string name, PlayingPiece* playingPiece)
{
    this->name = name;
    this->playingPiece = playingPiece;
}

std::string Player::getName() const
{
    return name;
}

PlayingPiece* Player::getPlayingPiece() const
{
    return playingPiece;
}   