#include "widget.h"
#include"sdialog.h"
#include"wdialog.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SDialog sdi;
    if(sdi.exec() == QDialog::Accepted){
        Widget w;
        w.show();

        return a.exec();
    }

    return 0;
}
