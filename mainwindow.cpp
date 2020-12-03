#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sprite.h"

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

    scene = new QGraphicsScene();//x,y,ancho,alto);
    scene->setBackgroundBrush(QPixmap(":/images/cosmos.jpg"));
    ui->graphicsView->setScene(scene);
    personaje = new sprite();
    scene->setSceneRect(0,0,540,600);
    scene->addItem(personaje);
    //personaje->setPos(200,220);
    score = new Score();
    scene->addItem(score);
    buu = new fantasma();
    scene->addItem(buu);
    buu->setPos(250,250);

//fantasmas.append(new fantasma(-35,-35,25,60));
//fantasmas.append(new fantasma(-35,-35,25,100));

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

paredes2.append(new paredes(20,220,20,20));//left up
paredes2.append(new paredes(20,240,20,-360));//left down
paredes2.append(new paredes(100,20,0,-180));  // -
paredes2.append(new paredes(20,60,-80,-200)); // |
paredes2.append(new paredes(100,20,20,-240)); // -
paredes2.append(new paredes(120,20,20,-300)); // -
paredes2.append(new paredes(20,60,-80,-320)); // |
paredes2.append(new paredes(80,20,0,-360));   // -
paredes2.append(new paredes(20,220,-540,20));//right up
paredes2.append(new paredes(20,240,-540,-360));//right down
paredes2.append(new paredes(100,20,-440,-180));  // -
paredes2.append(new paredes(20,60,-440,-200)); // |
paredes2.append(new paredes(100,20,-460,-240)); // -
paredes2.append(new paredes(120,20,-440,-300)); // -
paredes2.append(new paredes(20,60,-440,-320)); // |
paredes2.append(new paredes(80,20,-460,-360));   // -
paredes2.append(new paredes(580,20,20,20));//up
paredes2.append(new paredes(580,20,20,-600));//up
//cajas superiores
    paredes2.append(new paredes(60,40,-40,-40));//left box up
    paredes2.append(new paredes(60,20,-40,-120));//sub left
    paredes2.append(new paredes(80,40,-140,-40));//left box up_2
    paredes2.append(new paredes(80,40,-140,-40));//middle
    paredes2.append(new paredes(60,40,-440,-40));//right box up
    paredes2.append(new paredes(80,40,-320,-40));//right box up_2
    paredes2.append(new paredes(60,20,-440,-120));//sub right
    paredes2.append(new paredes(140,20,-200,-120));//up center
    paredes2.append(new paredes(20,80,-260,-120));//up center
    paredes2.append(new paredes(20,100,-260,20));//up

//T laterales up
    paredes2.append(new paredes(20,140,-140,-120));//T left vertical
    paredes2.append(new paredes(80,20,-140,-180));//T left horizontal
    paredes2.append(new paredes(20,140,-380,-120));//T right vertical
    paredes2.append(new paredes(80,20,-320,-180));//T right horizontal
//fin de la t up

//laterales tunel y T
    paredes2.append(new paredes(20,80,-140,-300));// lateral left
    paredes2.append(new paredes(20,80,-380,-300));//lateral right
    paredes2.append(new paredes(140,20,-200,-360));//middle
    paredes2.append(new paredes(20,80,-260,-360));//up center
    paredes2.append(new paredes(140,20,-200,-480));
    paredes2.append(new paredes(20,60,-260,-500));
//fin de t y lateral

//Parte Inferior izquierda
    paredes2.append(new paredes(60,20,-40,-420));
    paredes2.append(new paredes(20,60,-80,-440));
    paredes2.append(new paredes(40,20,0,-480));
    paredes2.append(new paredes(180,20,-40,-540));
    paredes2.append(new paredes(20,60,-140,-480));
    paredes2.append(new paredes(80,20,-140,-420));

//Parte inferior derecha
    paredes2.append(new paredes(60,20,-440,-420));
    paredes2.append(new paredes(20,60,-440,-440));
    paredes2.append(new paredes(40,20,-500,-480));
    paredes2.append(new paredes(180,20,-320,-540));
    paredes2.append(new paredes(20,60,-380,-480));

    paredes2.append(new paredes(80,20,-320,-420));

// Caja fantasmas
    paredes2.append(new paredes(50,20,-200,-240));
    paredes2.append(new paredes(50,20,-290,-240));
    paredes2.append(new paredes(140,20,-200,-300));
    paredes2.append(new paredes(20,80,-200,-240));
    paredes2.append(new paredes(20,80,-320,-240));

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(moveFantasma()));
    timer->start(8);

    for(auto it=paredes2.begin();it!=paredes2.end();it++)
    {
        scene->addItem(*it);
    }

    for(auto it2=monedas.begin();it2!=monedas.end();it2++){
        scene->addItem(*it2);
    }
    for(auto it2=fantasmas.begin();it2!=fantasmas.end();it2++){
        scene->addItem(*it2);
    }


}




void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    for(int i=0;i<monedas.size();i++){
        if(personaje->collidesWithItem(monedas.at(i))){
            scene->removeItem(monedas.at(i));
            score->increase();
            monedas.removeAt(i);
         }
    }



    if(evento->key() == Qt::Key_A){
        personaje->setRotation(180);
        personaje->left();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(personaje->collidesWithItem(*it)){
                personaje->right();
            }
        }
        if(personaje->x()==0 && personaje->y()==280){
            personaje->setPosx(550);
            personaje->setPosy(280);
        }
    }

    else if(evento->key() == Qt::Key_D){
        personaje->setRotation(0);
        personaje->right();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(personaje->collidesWithItem(*it)){
                personaje->left();
            }
        }
        if(personaje->x()==550 && personaje->y()==280){
            personaje->setPosx(0);
            personaje->setPosy(280);
        }
    }
    else if(evento->key() == Qt::Key_W){
        personaje->setRotation(270);
        personaje->up();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(personaje->collidesWithItem(*it)){
                personaje->down();
            }
        }
    }
    else if(evento->key() == Qt::Key_S){
        personaje->setRotation(90);
        personaje->down();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(personaje->collidesWithItem(*it)){
                personaje->up();
            }
        }
    }
}

void MainWindow::moveFantasma()
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
    }
    else if(buu->x() > personaje->x()){
        buu->left();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(buu->collidesWithItem(*it)){
                buu->right();
            }
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
    }
    else if(buu->y() > personaje->y()){
        buu->up();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(buu->collidesWithItem(*it)){
                buu->down();
            }
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

