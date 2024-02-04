#ifndef SEARCH_H
#define SEARCH_H

#include "car.h"
#include <QWidget>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class search;
}

class search : public QWidget
{
    Q_OBJECT

public:
    explicit search(QWidget *parent = nullptr);
    ~search();
    void showfiltersscreen();
    static QList<Car> readCars();
    void searchCars();

private:
    Ui::search *ui;
};

#endif // SEARCH_H
