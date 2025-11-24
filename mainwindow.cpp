#include "mainwindow.h"

#include <QLabel>
#include <QFont>
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    auto *central = new QWidget(this);
    auto *layout = new QVBoxLayout(central);

    auto *label = new QLabel("Hello, World!", central);
    QFont labelFont = label->font();
    labelFont.setPointSize(18);
    labelFont.setBold(true);
    label->setFont(labelFont);
    label->setAlignment(Qt::AlignCenter);

    layout->addWidget(label);
    layout->setContentsMargins(24, 24, 24, 24);

    setCentralWidget(central);
    setWindowTitle("Hello World App");
    resize(400, 300);
}

MainWindow::~MainWindow()
{
}
