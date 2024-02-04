#include "editarremover.h"
#include "ui_editarremover.h"

editarRemover::editarRemover(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editarRemover)
{
    ui->setupUi(this);
}

editarRemover::~editarRemover()
{
    delete ui;
}
