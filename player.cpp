#include "player.h"

Player::Player(QString name, QString symbol):
    m_name(name),
    m_symbol(symbol)
{

}

QString Player::getName() const
{
    return m_name;
}

QString Player::getSymbol() const
{
    return m_symbol;
}
