#ifndef FILTERS_H
#define FILTERS_H

//#include <QWidget>
#include <QDialog>

namespace Ui {
class filters;
}

class filters : public QWidget
{
    Q_OBJECT

public:
    explicit filters(QWidget *parent = nullptr);
    ~filters();

private:
    Ui::filters *ui;
};

#endif // FILTERS_H
