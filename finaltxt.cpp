#include "finaltxt.h"
#include <QFont>

finaltxt::finaltxt(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    setPlainText(QString("GAME OVER"));
    setDefaultTextColor(Qt::red);
    setFont(QFont("arial",70));
}
