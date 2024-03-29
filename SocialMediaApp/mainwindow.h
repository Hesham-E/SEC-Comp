#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void signInClicked();
    void signUpClicked();
    void logInClicked();
    void registerClicked();
    void homeClicked();
    void myProfileClicked();
    void friendsListClicked();
    void friendSearchClicked();
    void editProfileButtonClicked();
    void mainMenuClicked();
    void friendProfileClicked();
    //void addFriend();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
