#include "box.h"

Box::Box(position ps):
    m_ps(ps),
    m_owner("")
{

}

void Box::setOwner(QString owner)
{
    m_owner = owner;
}

QString Box::getOwner() const
{
    return m_owner;
}
