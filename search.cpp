#include "search.h"
#include "ui_search.h"
#include "filters.h"
#include "car.h"

search::search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);

    connect(ui->pushButton_2, &QPushButton::clicked, this, &search::showfiltersscreen);
    connect(ui->pushButton, &QPushButton::clicked, this, &search::searchCars);
}

search::~search()
{
    delete ui;
}

void search::showfiltersscreen()
{
    // Create an instance of the second screen on the heap
    filters *filtersscreen = new filters;

    // Show the second screen as a non-modal dialog
    filtersscreen->show();

    connect(filtersscreen, &QObject::destroyed, filtersscreen, &QObject::deleteLater);
}

QList<Car> search::readCars()
{
    QList<Car> cars;
    QFile file("cars.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList fields = line.split(",");
            if (fields.size() == 5)
            {
                Car car;
                car.model = fields[0];
                car.brand = fields[1];
                car.year = fields[2].toInt();
                car.trunkVolume = fields[3].toDouble();
                car.numPassengers = fields[4].toInt();
                cars.append(car);
            }
        }
        file.close();
    }
    return cars;
}

void search::searchCars()
{
    QString model = ui->lineEdit->text();

    QList<Car> cars = readCars();
    QList<Car> matchingCars;

    for (const Car &car : cars)
    {
        if (car.model.contains(model, Qt::CaseInsensitive))
        {
            matchingCars.append(car);
        }
    }

    if (matchingCars.isEmpty())
    {
        QMessageBox::information(nullptr, "Pesquisa", "Nenhum carro encontrado para o modelo " + model);
    }
    else
    {
        QMessageBox::information(nullptr, "Pesquisa", "Carros encontrados: \n" + QString::fromStdString(std::to_string(matchingCars.size()) + " carro(s)"));
    }
}
