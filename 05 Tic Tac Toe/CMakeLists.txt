project(TicTacToe)

add_executable(
    TicTacToe

    main.cpp

    models/PlayingPiece/PlayingPiece.cpp
    models/PlayingPiece/PlayingPieceX.cpp
    models/PlayingPiece/PlayingPieceO.cpp
    models/Player.cpp
    models/Board.cpp

    game/TicTacToeGame.cpp
)