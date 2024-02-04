#ifndef CADASTRAR_H
#define CADASTRAR_H

#include <QWidget>
#include "car.h"
#include <QFile>

namespace Ui {
class cadastrar;
}

class cadastrar : public QWidget
{
    Q_OBJECT

public:
    explicit cadastrar(QWidget *parent = nullptr);
    ~cadastrar();
    void saveCar();

private:
    Ui::cadastrar *ui;
};

#endif // CADASTRAR_H
