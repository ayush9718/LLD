#ifndef PLAYING_PIECE_H
#define PLAYING_PIECE_H

#include "../PieceType.h"

class PlayingPiece
{
protected:
    PieceType pieceType;

public:
    PlayingPiece(PieceType pieceType);

    PieceType getPieceType() const;

    virtual ~PlayingPiece() = default;
};

#endif