#include "fantasma.h"

fantasma::fantasma(int r_, int x, int y)
{
    r = r_;
        posx = x;
        posy = y;
        setPos(posx,posy);
}

fantasma::fantasma(QObject *parent) : QObject(parent)
{
    timer =new QTimer();
    filas =0;
    columnas =237;

    pixmap2 = new QPixmap(":/images/Mario Custom.png");

    //dimensiones imagen
    ancho = 247;
    alto = 305;

    timer->start(100);
    connect(timer,&QTimer::timeout, this,&fantasma::Actualizacion);
    setPos(250,200);
}

QRectF fantasma::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void fantasma::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2, -alto/2,*pixmap2,columnas,0,ancho,alto);
    setScale(0.15);

}


void fantasma::Actualizacion()
{
    columnas += 237;
    if(columnas >=948){
        columnas =237;
    }
    filas += 100;
    if(filas >=400){
        filas =0;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);
}

int fantasma::getR() const
{
    return r;
}

void fantasma::setR(int value)
{
    r = value;
}

int fantasma::getPosx() const
{
    return posx;
}

void fantasma::setPosx(int value)
{
    posx = value;
}

int fantasma::getPosy() const
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
