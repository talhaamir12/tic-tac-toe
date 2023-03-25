#include "game.h"

Game::Game():
    QObject(),
    m_player1("Player 1", "X"),
    m_player2("Player 2", "O"),
    m_TL(Box::TL),
    m_TM(Box::TM),
    m_TR(Box::TR),
    m_ML(Box::ML),
    m_MM(Box::MM),
    m_MR(Box::MR),
    m_BL(Box::BL),
    m_BM(Box::BM),
    m_BR(Box::BR),
    m_currentPlayer(&m_player1),
    m_nextPlayer(&m_player2),
    m_gameOver(false),
    m_winner("")
{

}

bool Game::isGameOver() const
{
    return m_gameOver;
}

QString Game::getWinner() const
{
    return m_winner;
}

bool Game::makeMove(Box::position pos, QString symbol)
{
    if (m_gameOver) {
        return false;
    }
    Box* box = nullptr;
    switch(pos) {
    case Box::TL:
        box = &m_TL;
        break;
    case Box::TM:
        box = &m_TM;
        break;
    case Box::TR:
        box = &m_TR;
        break;
    case Box::ML:
        box = &m_ML;
        break;
    case Box::MM:
        box = &m_MM;
        break;
    case Box::MR:
        box = &m_MR;
        break;
    case Box::BL:
        box = &m_BL;
        break;
    case Box::BM:
        box = &m_BM;
        break;
    case Box::BR:
        box = &m_BR;
        break;
    }
    if (box->getOwner() == "") {
        box->setOwner(symbol);
        emit boxClicked(pos, symbol);
        if (checkWin()) {
            m_gameOver = true;
            m_winner = getPlayerName(symbol);
            return true;
        }
        switchPlayers();
        return true;
    }
    return false;
}
