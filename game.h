#ifndef GAME_H
#define GAME_H

#include <QObject>
#include "player.h"
#include "box.h"

class Game: public QObject
{
    Q_OBJECT
public:
    Game();
    bool isGameOver() const;
    QString getWinner() const;
    bool makeMove(Box::position pos, QString symbol);
    QString getCurrentPlayerSymbol() const;
    QString getNextPlayerSymbol() const;
    QString getPlayerName(QString symbol) const;
signals:
    void boxClicked(Box::position pos, QString symbol);
private:
    Player m_player1;
    Player m_player2;
    Box m_TL;
    Box m_TM;
    Box m_TR;
    Box m_ML;
    Box m_MM;
    Box m_MR;
    Box m_BL;
    Box m_BM;
    Box m_BR;
    Player* m_currentPlayer;
    Player* m_nextPlayer;
    bool m_gameOver;
    QString m_winner;
    void switchPlayers();
    bool checkRow(Box::position pos1, Box::position pos2, Box::position pos3) const;
    bool checkWin() const;
};

#endif // GAME_H
