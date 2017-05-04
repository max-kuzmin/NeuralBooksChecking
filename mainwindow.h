#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <books_checker.h>
#include <logger.h>

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow* ui;
    BooksChecker checker;
    Logger *logger;


protected:
    void showEvent(QShowEvent *ev);
private slots:
    void on_pushButtonLearnPages_clicked();
    void on_pushButtonAddGood_clicked();
    void on_pushButtonClearGood_clicked();
};

#endif // MAINWINDOW_H
