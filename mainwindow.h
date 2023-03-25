#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Game* g, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
//    void on_pushButton_clicked(bool checked);

//    void on_pushButton_4_clicked(bool checked);

//    void on_pushButton_2_clicked(bool checked);

//    void on_topleft_clicked(bool checked);

//    void on_topmiddle_clicked(bool checked);

//    void on_topright_clicked(bool checked);

//    void on_middleleft_clicked(bool checked);

//    void on_middle_clicked(bool checked);

//    void on_middleright_clicked(bool checked);

//    void on_bottomleft_clicked(bool checked);

//    void on_bottommiddle_clicked(bool checked);

//    void on_bottomright_clicked(bool checked);


    void on_topleft_clicked(bool checked);

    void on_topmiddle_clicked(bool checked);

    void on_topright_clicked(bool checked);

    void on_middleleft_clicked(bool checked);

    void on_middle_clicked(bool checked);

    void on_middleright_clicked(bool checked);

    void on_bottomleft_clicked(bool checked);

    void on_bottommiddle_clicked(bool checked);

    void on_bottomright_clicked(bool checked);

private:
    Game* m_game;
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
