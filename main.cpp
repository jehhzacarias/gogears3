#include "mainwindow.h"
#include "search.h"
#include "cadastrar.h"
#include "editarremover.h"
#include "filters.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    search s;
    s.show();
    cadastrar c;
    c.show();
    editarRemover e;
    e.show();
    //filters f;
    //f.show();

    return a.exec();
}
