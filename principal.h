#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include<QPainter>
QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();
public slots:
    //void calcular();




private slots:
    void on_cmdCacular_released();

private:
    Ui::Principal *ui;
    QPixmap lienzo;
    QPainter *mPintor;
   // QPainter *pintor;
   // void a();
    void dibujar();
};
#endif // PRINCIPAL_H
