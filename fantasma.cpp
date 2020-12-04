#include "fantasma.h"


//fantasma::fantasma(int r_, int x, int y)
//{
//    r = r_;
//    posx = x;
//    posy = y;
//    setPos(posx,posy);
//}

fantasma::fantasma(QObject *parent) : QObject(parent)
{
    timer =new QTimer();
    filas =0;
    columnas =1;

    pixmap = new QPixmap(":/images/MapleStory.png");

    //dimensiones imagen
    ancho = 60;
    alto = 83;

    timer->start(100);
    connect(timer,&QTimer::timeout, this,&fantasma::Actualizacion);
    setPos(300,270);
}

void fantasma::Actualizacion()
{
    columnas += 60;
        if(columnas >=600){
            columnas =1;
        }
    this->update(-ancho/2,-alto/2,ancho,alto);
}

QRectF fantasma::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void fantasma::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2, -alto/2,*pixmap,columnas,0,ancho,alto);
    setScale(0.4);

}

float fantasma::getR() const
{
    return r;
}

void fantasma::setR(int value)
{
    r = value;
}

float fantasma::getPosx() const
{
    return posx;
}

void fantasma::setPosx(int value)
{
    posx = value;
}

float fantasma::getPosy() const
{
    return posy;
}

void fantasma::setPosy(int value)
{
    posy = value;
}

void fantasma::up()
{
    posy -= 1*velocidad;

    setPos(posx, posy);

}

void fantasma::down()
{
    posy += 1*velocidad;

    setPos(posx, posy);
}

void fantasma::left()
{
    posx -= 1*velocidad;

    setPos(posx, posy);
}

void fantasma::right()
{
    posx += 1*velocidad;

    setPos(posx, posy);
}

void fantasma::up2()
{
    posy -= 1*velocidad2;

    setPos(posx, posy);

}

void fantasma::down2()
{
    posy += 1*velocidad2;

    setPos(posx, posy);
}

void fantasma::left2()
{
    posx -= 1*velocidad2;

    setPos(posx, posy);
}

void fantasma::right2()
{
    posx += 1*velocidad2;

    setPos(posx, posy);
}

void fantasma::up3()
{
    posy -= 1*velocidad3;

    setPos(posx, posy);

}

void fantasma::down3()
{
    posy += 1*velocidad3;

    setPos(posx, posy);
}

void fantasma::left3()
{
    posx -= 1*velocidad3;

    setPos(posx, posy);
}

void fantasma::right3()
{
    posx += 1*velocidad3;

    setPos(posx, posy);
}

void fantasma::stop()
{
    velocidad =0;
    velocidad2=0;
    velocidad3=0;
}

