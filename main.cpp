#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "game.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "tictactoe_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    Game g;
    MainWindow w(&g);
    w.show();
    return a.exec();
}
