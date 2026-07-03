#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "PlayingPiece/PlayingPiece.h"

class Player
{
private:
    std::string name;
    PlayingPiece* playingPiece;

public:
    Player(std::string name, PlayingPiece* playingPiece);

    std::string getName() const;

    PlayingPiece* getPlayingPiece() const;
};

#endif