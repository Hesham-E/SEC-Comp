#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pageSwitcher->setCurrentIndex(0);
    connect(ui->logInButton, SIGNAL(clicked()), this, SLOT(logInClicked()));
    connect(ui->signInButton, SIGNAL(clicked()), this, SLOT(signInClicked()));
    connect(ui->signUpButton, SIGNAL(clicked()), this, SLOT(signUpClicked()));
    connect(ui->registerButton, SIGNAL(clicked()), this, SLOT(signUpClicked()));
    connect(ui->homeButton, SIGNAL(clicked()), this, SLOT(homeClicked()));
    connect(ui->homeButton_2, SIGNAL(clicked()), this, SLOT(homeClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::logInClicked()
{
    ui->pageSwitcher->setCurrentIndex(3);
}

void MainWindow::signInClicked()
{
    ui->pageSwitcher->setCurrentIndex(1);
}

void MainWindow::signUpClicked()
{
    ui->pageSwitcher->setCurrentIndex(2);
}

void MainWindow::registerClicked()
{
    ui->pageSwitcher->setCurrentIndex(3);
}

void MainWindow::homeClicked()
{
    ui->pageSwitcher->setCurrentIndex(0);
}
