#include "mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QLabel *label = new QLabel("Hello World!", this);
    label->setAlignment(Qt::AlignCenter);
    setCentralWidget(label);
    setWindowTitle("Hello World App");
    resize(400, 300);
}

MainWindow::~MainWindow()
{
}
