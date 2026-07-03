#include "PlayingPiece.h"

PlayingPiece::PlayingPiece(PieceType pieceType)
{
    this->pieceType = pieceType;
}

PieceType PlayingPiece::getPieceType() const
{
    return pieceType;
}