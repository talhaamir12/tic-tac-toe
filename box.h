#ifndef BOX_H
#define BOX_H

#include <QObject>

class Box: public QObject
{
    Q_OBJECT
public:
    enum position {
        TL,
        TM,
        TR,
        ML,
        MM,
        MR,
        BL,
        BM,
        BR
    };
    Box(position ps);
    void setOwner(QString owner);
    QString getOwner() const;
private:
    position m_ps;
    QString m_owner;
};

#endif // BOX_H
