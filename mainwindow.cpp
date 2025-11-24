#include "mainwindow.h"

#include <QLabel>
#include <QFont>
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    auto *central = new QWidget(this);
    auto *layout = new QVBoxLayout();

    auto *label = new QLabel(tr("Hello, World!"), central);
    QFont labelFont = label->font();
    labelFont.setPointSize(22);
    labelFont.setBold(true);
    label->setFont(labelFont);
    label->setAlignment(Qt::AlignCenter);

    layout->addStretch();
    layout->addWidget(label, 0, Qt::AlignCenter);
    layout->addStretch();
    layout->setContentsMargins(32, 32, 32, 32);
    layout->setSpacing(16);

    central->setLayout(layout);

    setCentralWidget(central);
    setMinimumSize(360, 240);
    setWindowTitle(tr("Hello World App"));
}

MainWindow::~MainWindow()
{
}
