#ifndef FANTASMA_H
#define FANTASMA_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>
#include <QGraphicsScene>

class fantasma:  public QObject, public QGraphicsItem
{

    Q_OBJECT
    int r;
    float posx=250, posy=280;
    float velocidad = 0.9, velocidad2 = 0.6, velocidad3= 0.3;

public:
    explicit fantasma(QObject *parent = nullptr);
    //fantasma(int r_, int x, int y);//

    QTimer * timer;
    QPixmap *pixmap;
    float getR() const;
    void setR(int radio);
    float getPosx() const;
    void setPosx(int px);
    float getPosy() const;
    void setPosy(int py);

    float filas, columnas, ancho, alto;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void up();
    void down();
    void left();
    void right();
    void move();
    void up2();
    void down2();
    void left2();
    void right2();
    void move2();
    void up3();
    void down3();
    void left3();
    void right3();
    void move3();
    void stop();


signals:

public slots:
    void Actualizacion();
};


#endif // FANTASMA_H
