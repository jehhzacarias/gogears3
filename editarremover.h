#ifndef EDITARREMOVER_H
#define EDITARREMOVER_H

#include <QWidget>

namespace Ui {
class editarRemover;
}

class editarRemover : public QWidget
{
    Q_OBJECT

public:
    explicit editarRemover(QWidget *parent = nullptr);
    ~editarRemover();

private:
    Ui::editarRemover *ui;
};

#endif // EDITARREMOVER_H
