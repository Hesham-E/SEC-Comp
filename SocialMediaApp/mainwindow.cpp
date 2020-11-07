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
    connect(ui->registerButton, SIGNAL(clicked()), this, SLOT(registerClicked()));
    connect(ui->homeButton, SIGNAL(clicked()), this, SLOT(homeClicked()));
    connect(ui->homeButton_2, SIGNAL(clicked()), this, SLOT(homeClicked()));
    connect(ui->logOutButton, SIGNAL(clicked()), this, SLOT(homeClicked()));
    connect(ui->myProfileButton, SIGNAL(clicked()), this, SLOT(myProfileClicked()));
    connect(ui->friendsListButton, SIGNAL(clicked()), this, SLOT(friendsListClicked()));
    connect(ui->friendSearchButton, SIGNAL(clicked()), this, SLOT(friendSearchClicked()));
    connect(ui->editProfileButton, SIGNAL(clicked()), this, SLOT(editProfileButtonClicked()));
    connect(ui->doneEditButton, SIGNAL(clicked()), this, SLOT(myProfileClicked()));
    connect(ui->mainMenuButton, SIGNAL(clicked()), this, SLOT(mainMenuClicked()));
    connect(ui->mainMenuButton_2, SIGNAL(clicked()), this, SLOT(mainMenuClicked()));
    connect(ui->friendProfileButton, SIGNAL(clicked()), this, SLOT(friendProfileClicked()));
    //connect(ui->addFriendButton, SIGNAL(clicked()), this, SLOT(addFriendClicked()));
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

void MainWindow::mainMenuClicked()
{
     ui->pageSwitcher->setCurrentIndex(3);
}

void MainWindow::homeClicked()
{
    ui->pageSwitcher->setCurrentIndex(0);
}

void MainWindow::myProfileClicked()
{
    ui->pageSwitcher->setCurrentIndex(4);
}

void MainWindow::friendsListClicked()
{
    ui->pageSwitcher->setCurrentIndex(7);
}

void MainWindow::friendSearchClicked()
{
    ui->pageSwitcher->setCurrentIndex(6);
}

/*void MainWindow::addFriendClicked()
{
    ui->pageSwitcher->setCurrentIndex(6);
}*/

void MainWindow::editProfileButtonClicked()
{
    ui->pageSwitcher->setCurrentIndex(5);
}

void MainWindow::friendProfileClicked()
{
    ui->pageSwitcher->setCurrentIndex(6);
}
