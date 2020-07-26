#include "principal.h"
#include "ui_principal.h"
#include<QDebug>
#include<QPainter>

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);

    lienzo=QPixmap(500,500);
    lienzo.fill(Qt::white);
     mPintor=new QPainter(&lienzo);
      this->dibujar();


    ui->lblLienzo->setPixmap(lienzo);


}

Principal::~Principal()
{
    delete ui;

}


void Principal::dibujar(){


    int x=50;
    int y=50;
    int x1=x;
    int x2=y+400;
    QPen pincel;
    pincel.setWidth(5);
    pincel.setColor(Qt::blue);
    pincel.setJoinStyle(Qt::MiterJoin);
    mPintor->setPen(pincel);
    mPintor->drawLine(x,y,x,y+400);
    mPintor->drawLine(x1,x2,x1+400,x2);
    pincel.setColor(Qt::green);
    mPintor->setPen(pincel);
    int num=100;
    for(int i=y;i<450;i+=100){
        mPintor->drawLine(x-5,i,x+5,i);
       QString nume=QString::number(num);
        mPintor->drawText(x-25,i,nume);
        num-=25;

    }
    int nota=1;
    for(int i=x;i<450;i+=150){
        QString a=QString::number(nota);
        QString Nota="Nota ";
        mPintor->drawText(i+50,x+420,Nota+a);
        nota +=1;
    }
    update();


}



void Principal::on_cmdCacular_released()
{


 float nota1=  ui->inNota1->value();
 float nota2 = ui->inNota2->value();
 float nota3=  ui->inNota3->value();
 float promedio;
 promedio =(nota1+nota2+nota3)/3.00;
 QString promedioS=QString::number(promedio);
 ui->outPromedio->setText(promedioS);

}
