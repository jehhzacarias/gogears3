#include "filters.h"
#include "ui_filters.h"

filters::filters(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::filters)
{
    ui->setupUi(this);
}

filters::~filters()
{
    delete ui;
}
