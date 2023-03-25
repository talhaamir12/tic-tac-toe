#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Game* g, QWidget *parent)
    : QMainWindow(parent)
    , m_game(g)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_topleft_clicked(bool checked)
{
    qDebug() << checked;
}


void MainWindow::on_topmiddle_clicked(bool checked)
{
    qDebug() << checked;
}


void MainWindow::on_topright_clicked(bool checked)
{
    qDebug() << checked;
}


void MainWindow::on_middleleft_clicked(bool checked)
{
    qDebug() << checked;
}


void MainWindow::on_middle_clicked(bool checked)
{
    qDebug() << checked;
}


void MainWindow::on_middleright_clicked(bool checked)
{
    qDebug() << checked;
}


void MainWindow::on_bottomleft_clicked(bool checked)
{
    qDebug() << checked;
}


void MainWindow::on_bottommiddle_clicked(bool checked)
{
    qDebug() << checked;
}


void MainWindow::on_bottomright_clicked(bool checked)
{
    qDebug() << checked;
}

