#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRect Desktop = QApplication::desktop()->screenGeometry();
    x=Desktop.x();
    y=Desktop.y();
    ancho=Desktop.width();
    alto=Desktop.height();

    scene = new QGraphicsScene(x,y,ancho,alto);
    scene->setSceneRect(0,0,540,600);
    scene->setBackgroundBrush(QBrush(QImage(":/images/cosmos.jpg")));

    ui->graphicsView->setScene(scene);
    personaje = new sprite();
    textF= new finaltxt();
    textF->setPos(60,280);
    puntaje= new Score();
    salud = new Health();
    scene->addItem(personaje);
    personaje->setPos(20,20);
    buu = new fantasma();
    buu->setPos(300,270);
    scene->addItem(buu);
    puntaje->setPos(-140,0);
    scene->addItem(puntaje);
    salud->setPos(-140,40);
    scene->addItem(salud);
    buu2 = new fantasma();
    buu2->setPos(300,270);
    scene->addItem(buu2);
    buu3 = new fantasma();
    buu3->setPos(300,270);
    scene->addItem(buu3);


{
    paredes2.append(new paredes(20,220,20,20));
    paredes2.append(new paredes(20,240,20,-360));
    paredes2.append(new paredes(100,20,0,-180));
    paredes2.append(new paredes(20,60,-80,-200));
    paredes2.append(new paredes(100,20,20,-240));
    paredes2.append(new paredes(120,20,20,-300));
    paredes2.append(new paredes(20,60,-80,-320));
    paredes2.append(new paredes(80,20,0,-360));
    paredes2.append(new paredes(20,220,-540,20));
    paredes2.append(new paredes(20,240,-540,-360));
    paredes2.append(new paredes(100,20,-440,-180));
    paredes2.append(new paredes(20,60,-440,-200));
    paredes2.append(new paredes(100,20,-460,-240));
    paredes2.append(new paredes(120,20,-440,-300));
    paredes2.append(new paredes(20,60,-440,-320));
    paredes2.append(new paredes(80,20,-460,-360));
    paredes2.append(new paredes(580,20,20,20));
    paredes2.append(new paredes(580,20,20,-600));
    paredes2.append(new paredes(60,40,-40,-40));
    paredes2.append(new paredes(60,20,-40,-120));
    paredes2.append(new paredes(80,40,-140,-40));
    paredes2.append(new paredes(80,40,-140,-40));
    paredes2.append(new paredes(60,40,-440,-40));
    paredes2.append(new paredes(80,40,-320,-40));
    paredes2.append(new paredes(60,20,-440,-120));
    paredes2.append(new paredes(140,20,-200,-120));
    paredes2.append(new paredes(20,80,-260,-120));
    paredes2.append(new paredes(20,100,-260,20));
    paredes2.append(new paredes(20,140,-140,-120));
    paredes2.append(new paredes(80,20,-140,-180));
    paredes2.append(new paredes(20,140,-380,-120));
    paredes2.append(new paredes(80,20,-320,-180));
    paredes2.append(new paredes(20,80,-140,-300));
    paredes2.append(new paredes(20,80,-380,-300));
    paredes2.append(new paredes(140,20,-200,-360));
    paredes2.append(new paredes(20,80,-260,-360));
    paredes2.append(new paredes(140,20,-200,-480));
    paredes2.append(new paredes(20,60,-260,-500));
    paredes2.append(new paredes(60,20,-40,-420));
    paredes2.append(new paredes(20,60,-80,-440));
    paredes2.append(new paredes(40,20,0,-480));
    paredes2.append(new paredes(180,20,-40,-540));
    paredes2.append(new paredes(20,60,-140,-480));
    paredes2.append(new paredes(80,20,-140,-420));
    paredes2.append(new paredes(60,20,-440,-420));
    paredes2.append(new paredes(20,60,-440,-440));
    paredes2.append(new paredes(40,20,-500,-480));
    paredes2.append(new paredes(180,20,-320,-540));
    paredes2.append(new paredes(20,60,-380,-480));
    paredes2.append(new paredes(80,20,-320,-420));
    paredes2.append(new paredes(50,20,-200,-240));
    paredes2.append(new paredes(50,20,-290,-240));
    paredes2.append(new paredes(140,20,-200,-300));
    paredes2.append(new paredes(20,80,-200,-240));
    paredes2.append(new paredes(20,80,-320,-240));
}

{   monedas.append(new moneda(-35,-35,525,60));
    monedas.append(new moneda(-35,-35,525,100));
    monedas.append(new moneda(-35,-35,525,140));
    monedas.append(new moneda(-35,-35,25,60));
    monedas.append(new moneda(-35,-35,25,100));
    monedas.append(new moneda(-35,-35,25,140));
    monedas.append(new moneda(-35,-35,55,160));
    monedas.append(new moneda(-35,-35,85,160));
    monedas.append(new moneda(-35,-35,55,100));
    monedas.append(new moneda(-35,-35,85,100));
    monedas.append(new moneda(-35,-35,120,60));
    monedas.append(new moneda(-35,-35,120,100));
    monedas.append(new moneda(-35,-35,120,140));
    monedas.append(new moneda(-35,-35,120,180));
    monedas.append(new moneda(-35,-35,120,220));
    monedas.append(new moneda(-35,-35,120,260));
    monedas.append(new moneda(-35,-35,120,300));
    monedas.append(new moneda(-35,-35,120,340));
    monedas.append(new moneda(-35,-35,120,380));
    monedas.append(new moneda(-35,-35,120,420));
    monedas.append(new moneda(-35,-35,120,460));
    monedas.append(new moneda(-35,-35,120,500));
    monedas.append(new moneda(-35,-35,85,520));
    monedas.append(new moneda(-35,-35,420,60));
    monedas.append(new moneda(-35,-35,420,100));
    monedas.append(new moneda(-35,-35,420,140));
    monedas.append(new moneda(-35,-35,420,180));
    monedas.append(new moneda(-35,-35,420,220));
    monedas.append(new moneda(-35,-35,420,260));
    monedas.append(new moneda(-35,-35,420,300));
    monedas.append(new moneda(-35,-35,420,340));
    monedas.append(new moneda(-35,-35,420,380));
    monedas.append(new moneda(-35,-35,420,420));
    monedas.append(new moneda(-35,-35,420,460));
    monedas.append(new moneda(-35,-35,420,500));
    monedas.append(new moneda(-35,-35,460,520));
    monedas.append(new moneda(-35,-35,25,580));
    monedas.append(new moneda(-35,-35,55,580));
    monedas.append(new moneda(-35,-35,85,580));
    monedas.append(new moneda(-35,-35,115,580));
    monedas.append(new moneda(-35,-35,145,580));
    monedas.append(new moneda(-35,-35,175,580));
    monedas.append(new moneda(-35,-35,205,580));
    monedas.append(new moneda(-35,-35,235,580));
    monedas.append(new moneda(-35,-35,265,580));
    monedas.append(new moneda(-35,-35,295,580));
    monedas.append(new moneda(-35,-35,325,580));
    monedas.append(new moneda(-35,-35,355,580));
    monedas.append(new moneda(-35,-35,385,580));
    monedas.append(new moneda(-35,-35,415,580));
    monedas.append(new moneda(-35,-35,445,580));
    monedas.append(new moneda(-35,-35,475,580));
    monedas.append(new moneda(-35,-35,505,580));
    monedas.append(new moneda(-35,-35,55,20));
    monedas.append(new moneda(-35,-35,85,20));
    monedas.append(new moneda(-35,-35,115,20));
    monedas.append(new moneda(-35,-35,145,20));
    monedas.append(new moneda(-35,-35,175,20));
    monedas.append(new moneda(-35,-35,205,20));
    monedas.append(new moneda(-35,-35,235,20));
    monedas.append(new moneda(-35,-35,295,20));
    monedas.append(new moneda(-35,-35,325,20));
    monedas.append(new moneda(-35,-35,355,20));
    monedas.append(new moneda(-35,-35,385,20));
    monedas.append(new moneda(-35,-35,415,20));
    monedas.append(new moneda(-35,-35,445,20));
    monedas.append(new moneda(-35,-35,475,20));
    monedas.append(new moneda(-35,-35,505,20));
    monedas.append(new moneda(-35,-35,495,160));
    monedas.append(new moneda(-35,-35,465,160));
    monedas.append(new moneda(-35,-35,495,100));
    monedas.append(new moneda(-35,-35,465,100));
    monedas.append(new moneda(-35,-35,145,100));
    monedas.append(new moneda(-35,-35,175,100));
    monedas.append(new moneda(-35,-35,205,100));
    monedas.append(new moneda(-35,-35,235,100));
    monedas.append(new moneda(-35,-35,265,100));
    monedas.append(new moneda(-35,-35,295,100));
    monedas.append(new moneda(-35,-35,325,100));
    monedas.append(new moneda(-35,-35,355,100));
    monedas.append(new moneda(-35,-35,385,100));
    monedas.append(new moneda(-35,-35,240,60));
    monedas.append(new moneda(-35,-35,295,60));
}

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(moveEnemy()));
    timer->start(8);

    for(auto it2=monedas.begin();it2!=monedas.end();it2++){
        scene->addItem(*it2);
    }

    for(auto it=paredes2.begin();it!=paredes2.end();it++)
    {
        scene->addItem(*it);
    }
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_A){
        personaje->left();
        personaje->setRotation(180);
        qDebug()<<personaje->x();
        if(personaje->x()==-30 && personaje->y()==280)
        {
            personaje->setPosx(560);
            personaje->setPosy(280);
        }
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(personaje->collidesWithItem(*it)){
                personaje->right();
            }
        }
        for(int i=0;i<monedas.size();i++)
        {
            if(personaje->collidesWithItem(monedas.at(i))){
                scene->removeItem(monedas.at(i));
                monedas.removeAt(i);
                puntaje->increase();
            }
        }
    }
    else if(evento->key() == Qt::Key_D){
        personaje->right();
        personaje->setRotation(0);
        qDebug()<<personaje->x();
        if(personaje->x()==570 && personaje->y()==280)
        {
            personaje->setPosx(-20);
            personaje->setPosy(280);
        }
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(personaje->collidesWithItem(*it)){
                personaje->left();
            }
        }
        for(int i=0;i<monedas.size();i++)
        {
            if(personaje->collidesWithItem(monedas.at(i))){
                scene->removeItem(monedas.at(i));
                monedas.removeAt(i);
                puntaje->increase();
            }
        }       
    }
    else if(evento->key() == Qt::Key_W)
    {
        personaje->up();
        personaje->setRotation(270);
        qDebug()<<personaje->y();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(personaje->collidesWithItem(*it)){
                personaje->down();
            }
        }
        for(int i=0;i<monedas.size();i++)
        {
            if(personaje->collidesWithItem(monedas.at(i))){
                scene->removeItem(monedas.at(i));
                monedas.removeAt(i);
                puntaje->increase();
            }
        }
    }
    else if(evento->key() == Qt::Key_S)
    {
        personaje->down();
        personaje->setRotation(90);
        qDebug()<<personaje->y();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(personaje->collidesWithItem(*it)){
                personaje->up();
            }
        }

        for(int i=0;i<monedas.size();i++)
        {
            if(personaje->collidesWithItem(monedas.at(i))){
                scene->removeItem(monedas.at(i));
                monedas.removeAt(i);
                puntaje->increase();
            }
        }
    }
}

void MainWindow::moveEnemy()
{
    if(buu->x() < personaje->x())
    {
        buu->right();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(buu->collidesWithItem(*it)){
                buu->left();
            }
        }

        if(salud->getHealth()>0)
        {
            if(buu->collidesWithItem(personaje))
            {
                personaje->setPos(20,20);
                personaje->setPosx(20);
                personaje->setPosy(20);
                salud->decrease();
                buu3->setPos(280,280);
                buu3->setPosx(280);
                buu3->setPosy(280);
                buu2->setPos(280,280);
                buu2->setPosx(280);
                buu2->setPosy(280);
                buu->setPos(280,280);
                buu->setPosx(280);
                buu->setPosy(280);
            }
        }
        else
        {   buu->stop();
            buu2->stop();
            buu3->stop();
            scene->addItem(textF);
            personaje->setPos(-100,-100);
            personaje->setPosx(-100);
            personaje->setPosy(-100);
        }
    }
    else if(buu->x() > personaje->x()){
        buu->left();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(buu->collidesWithItem(*it)){
                buu->right();
            }
        }
        if(salud->getHealth()>0)
        {
            if(buu->collidesWithItem(personaje))
            {
                personaje->setPos(20,20);
                personaje->setPosx(20);
                personaje->setPosy(20);
                salud->decrease();
                buu3->setPos(280,280);
                buu3->setPosx(280);
                buu3->setPosy(280);
                buu2->setPos(280,280);
                buu2->setPosx(280);
                buu2->setPosy(280);
                buu->setPos(280,280);
                buu->setPosx(280);
                buu->setPosy(280);
            }
        }
        else
        {   buu->stop();
            buu2->stop();
            buu3->stop();
            scene->addItem(textF);
            personaje->setPos(-100,-100);
            personaje->setPosx(-100);
            personaje->setPosy(-100);
        }
    }

    if(buu->y() < personaje->y()){
        buu->down();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(buu->collidesWithItem(*it)){
                buu->up();
            }
        }

        if(salud->getHealth()>0)
        {
            if(buu->collidesWithItem(personaje))
            {
                personaje->setPos(20,20);
                personaje->setPosx(20);
                personaje->setPosy(20);
                salud->decrease();
                buu3->setPos(280,280);
                buu3->setPosx(280);
                buu3->setPosy(280);
                buu2->setPos(280,280);
                buu2->setPosx(280);
                buu2->setPosy(280);
                buu->setPos(280,280);
                buu->setPosx(280);
                buu->setPosy(280);
            }
        }
        else
        {   buu->stop();
            buu2->stop();
            buu3->stop();
            scene->addItem(textF);
            personaje->setPos(-100,-100);
            personaje->setPosx(-100);
            personaje->setPosy(-100);
        }

    }
    else if(buu->y() > personaje->y()){
        buu->up();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(buu->collidesWithItem(*it)){
                buu->down();
            }
        }
        if(salud->getHealth()>0)
        {
            if(buu->collidesWithItem(personaje))
            {
                personaje->setPos(20,20);
                personaje->setPosx(20);
                personaje->setPosy(20);
                salud->decrease();
                buu3->setPos(280,280);
                buu3->setPosx(280);
                buu3->setPosy(280);
                buu2->setPos(280,280);
                buu2->setPosx(280);
                buu2->setPosy(280);
                buu->setPos(280,280);
                buu->setPosx(280);
                buu->setPosy(280);
            }
        }
        else
        {   buu->stop();
            buu2->stop();
            buu3->stop();
            scene->addItem(textF);
            buu->stop();
            personaje->setPos(-100,-100);
            personaje->setPosx(-100);
            personaje->setPosy(-100);
        }
    }
//**************************************************************************

    if(buu2->x() < personaje->x())
        {
            buu2->right2();
            for(auto it=paredes2.begin();it!=paredes2.end();it++)
            {
                if(buu2->collidesWithItem(*it)){
                    buu2->left2();
                }
            }

            if(salud->getHealth()>0)
            {
                if(buu2->collidesWithItem(personaje))
                {
                    personaje->setPos(20,20);
                    personaje->setPosx(20);
                    personaje->setPosy(20);
                    salud->decrease();
                    buu3->setPos(280,280);
                    buu3->setPosx(280);
                    buu3->setPosy(280);
                    buu2->setPos(280,280);
                    buu2->setPosx(280);
                    buu2->setPosy(280);
                    buu->setPos(280,280);
                    buu->setPosx(280);
                    buu->setPosy(280);
                }
            }
            else
            {   buu->stop();
                buu2->stop();
                buu3->stop();
                scene->addItem(textF);
                personaje->setPos(-100,-100);
                personaje->setPosx(-100);
                personaje->setPosy(-100);
            }
        }
        else if(buu2->x() > personaje->x()){
            buu2->left2();
            for(auto it=paredes2.begin();it!=paredes2.end();it++)
            {
                if(buu2->collidesWithItem(*it)){
                    buu2->right2();
                }
            }
            if(salud->getHealth()>0)
            {
                if(buu2->collidesWithItem(personaje))
                {
                    personaje->setPos(20,20);
                    personaje->setPosx(20);
                    personaje->setPosy(20);
                    salud->decrease();
                    buu3->setPos(280,280);
                    buu3->setPosx(280);
                    buu3->setPosy(280);
                    buu2->setPos(280,280);
                    buu2->setPosx(280);
                    buu2->setPosy(280);
                    buu->setPos(280,280);
                    buu->setPosx(280);
                    buu->setPosy(280);
                }
            }
            else
            {   buu->stop();
                buu2->stop();
                buu3->stop();
                scene->addItem(textF);
                personaje->setPos(-100,-100);
                personaje->setPosx(-100);
                personaje->setPosy(-100);
            }
        }

        if(buu2->y() < personaje->y()){
            buu2->down2();
            for(auto it=paredes2.begin();it!=paredes2.end();it++)
            {
                if(buu2->collidesWithItem(*it)){
                    buu2->up2();
                }
            }

            if(salud->getHealth()>0)
            {
                if(buu2->collidesWithItem(personaje))
                {
                    personaje->setPos(20,20);
                    personaje->setPosx(20);
                    personaje->setPosy(20);
                    salud->decrease();
                    buu3->setPos(280,280);
                    buu3->setPosx(280);
                    buu3->setPosy(280);
                    buu2->setPos(280,280);
                    buu2->setPosx(280);
                    buu2->setPosy(280);
                    buu->setPos(280,280);
                    buu->setPosx(280);
                    buu->setPosy(280);
                }
            }
            else
            {   buu->stop();
                buu2->stop();
                buu3->stop();
                scene->addItem(textF);
                personaje->setPos(-100,-100);
                personaje->setPosx(-100);
                personaje->setPosy(-100);
            }

        }
        else if(buu2->y() > personaje->y()){
            buu2->up2();
            for(auto it=paredes2.begin();it!=paredes2.end();it++)
            {
                if(buu2->collidesWithItem(*it)){
                    buu2->down2();
                }
            }
            if(salud->getHealth()>0)
            {
                if(buu2->collidesWithItem(personaje))
                {
                    personaje->setPos(20,20);
                    personaje->setPosx(20);
                    personaje->setPosy(20);
                    salud->decrease();
                    buu3->setPos(280,280);
                    buu3->setPosx(280);
                    buu3->setPosy(280);
                    buu2->setPos(280,280);
                    buu2->setPosx(280);
                    buu2->setPosy(280);
                    buu->setPos(280,280);
                    buu->setPosx(280);
                    buu->setPosy(280);
                }
            }
            else
            {   buu->stop();
                buu2->stop();
                buu3->stop();
                scene->addItem(textF);
                personaje->setPos(-100,-100);
                personaje->setPosx(-100);
                personaje->setPosy(-100);
            }
        }
 //*************************************************************
        if(buu3->x() < personaje->x())
            {
                buu3->right3();
                for(auto it=paredes2.begin();it!=paredes2.end();it++)
                {
                    if(buu3->collidesWithItem(*it)){
                        buu3->left3();
                    }
                }

                if(salud->getHealth()>0)
                {
                    if(buu3->collidesWithItem(personaje))
                    {
                        personaje->setPos(20,20);
                        personaje->setPosx(20);
                        personaje->setPosy(20);
                        salud->decrease();
                        buu3->setPos(280,280);
                        buu3->setPosx(280);
                        buu3->setPosy(280);
                        buu2->setPos(280,280);
                        buu2->setPosx(280);
                        buu2->setPosy(280);
                        buu->setPos(280,280);
                        buu->setPosx(280);
                        buu->setPosy(280);
                    }
                }
                else
                {   buu->stop();
                    buu2->stop();
                    buu3->stop();
                    scene->addItem(textF);
                    personaje->setPos(-100,-100);
                    personaje->setPosx(-100);
                    personaje->setPosy(-100);
                }
            }
            else if(buu3->x() > personaje->x()){
                buu3->left3();
                for(auto it=paredes2.begin();it!=paredes2.end();it++)
                {
                    if(buu3->collidesWithItem(*it)){
                        buu3->right3();
                    }
                }
                if(salud->getHealth()>0)
                {
                    if(buu3->collidesWithItem(personaje))
                    {
                        personaje->setPos(20,20);
                        personaje->setPosx(20);
                        personaje->setPosy(20);
                        salud->decrease();
                        buu3->setPos(280,280);
                        buu3->setPosx(280);
                        buu3->setPosy(280);
                        buu2->setPos(280,280);
                        buu2->setPosx(280);
                        buu2->setPosy(280);
                        buu->setPos(280,280);
                        buu->setPosx(280);
                        buu->setPosy(280);
                    }
                }
                else
                {   buu->stop();
                    buu2->stop();
                    buu3->stop();
                    scene->addItem(textF);
                    personaje->setPos(-100,-100);
                    personaje->setPosx(-100);
                    personaje->setPosy(-100);
                }
            }

            if(buu3->y() < personaje->y()){
                buu3->down3();
                for(auto it=paredes2.begin();it!=paredes2.end();it++)
                {
                    if(buu3->collidesWithItem(*it)){
                        buu3->up3();
                    }
                }

                if(salud->getHealth()>0)
                {
                    if(buu3->collidesWithItem(personaje))
                    {
                        personaje->setPos(20,20);
                        personaje->setPosx(20);
                        personaje->setPosy(20);
                        salud->decrease();
                        buu3->setPos(280,280);
                        buu3->setPosx(280);
                        buu3->setPosy(280);
                        buu2->setPos(280,280);
                        buu2->setPosx(280);
                        buu2->setPosy(280);
                        buu->setPos(280,280);
                        buu->setPosx(280);
                        buu->setPosy(280);
                    }
                }
                else
                {   buu->stop();
                    buu2->stop();
                    buu3->stop();
                    scene->addItem(textF);
                    personaje->setPos(-100,-100);
                    personaje->setPosx(-100);
                    personaje->setPosy(-100);
                }

            }
            else if(buu3->y() > personaje->y()){
                buu3->up3();
                for(auto it=paredes2.begin();it!=paredes2.end();it++)
                {
                    if(buu3->collidesWithItem(*it)){
                        buu3->down3();
                    }
                }
                if(salud->getHealth()>0)
                {
                    if(buu3->collidesWithItem(personaje))
                    {
                        personaje->setPos(20,20);
                        personaje->setPosx(20);
                        personaje->setPosy(20);
                        salud->decrease();
                        buu3->setPos(280,280);
                        buu3->setPosx(280);
                        buu3->setPosy(280);
                        buu2->setPos(280,280);
                        buu2->setPosx(280);
                        buu2->setPosy(280);
                        buu->setPos(280,280);
                        buu->setPosx(280);
                        buu->setPosy(280);
                    }
                }
                else
                {   buu->stop();
                    buu2->stop();
                    buu3->stop();
                    scene->addItem(textF);
                    personaje->setPos(-100,-100);
                    personaje->setPosx(-100);
                    personaje->setPosy(-100);
                }
            }

}

MainWindow::~MainWindow()
{
    delete ui;
}

