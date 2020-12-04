#include "health.h"
#include <QFont>

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    health = 5;
    setPlainText(QString("Lives: ")+ QString::number(health));
    setDefaultTextColor(Qt::white);
    setFont(QFont("arial",16));
}

void Health::decrease()
{
    health--;
    setPlainText(QString("Vidas: ")+ QString::number(health));
}

int Health::getHealth()
{
    return health;
}
