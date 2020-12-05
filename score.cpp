#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    score = 0;
    setPlainText(QString("Coins: ")+ QString::number(score));
    setDefaultTextColor(Qt::white);
    setFont(QFont("arial",16));
}

void Score::increase()
{
    score++;
    setPlainText(QString("Coins: ")+ QString::number(score));
}

int Score::getScore()
{
    return score;
}
