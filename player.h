#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player: public QObject
{
    Q_OBJECT
public:
    Player(QString name, QString symbol);
    QString getName() const;
    QString getSymbol() const;
private:
    QString m_name;
    QString m_symbol;
};

#endif // PLAYER_H
