#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QRect Desktop = QApplication::desktop()->screenGeometry();
//    x=Desktop.x();
//    y=Desktop.y();
//    ancho=Desktop.width();
//    alto=Desktop.height();

    scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    personaje = new sprite();
    scene->setSceneRect(0,0,540,600);
    scene->addItem(personaje);
    personaje->setPos(25,20);


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


    for(auto it=paredes2.begin();it!=paredes2.end();it++)
    {
        scene->addItem(*it);
    }
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_A){
        personaje->left();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(personaje->collidesWithItem(*it)){
                personaje->right();
            }
        }
    }
    else if(evento->key() == Qt::Key_D){
        personaje->right();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(personaje->collidesWithItem(*it)){
                personaje->left();
            }
        }
    }
    else if(evento->key() == Qt::Key_W){
        personaje->up();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(personaje->collidesWithItem(*it)){
                personaje->down();
            }
        }
    }
    else if(evento->key() == Qt::Key_S){
        personaje->down();
        for(auto it=paredes2.begin();it!=paredes2.end();it++)
        {
            if(personaje->collidesWithItem(*it)){
                personaje->up();
            }
        }
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}

