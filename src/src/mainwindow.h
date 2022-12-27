#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "dialogtest.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    CS_OBJECT(MainWindow)

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
      

private :
    

    CS_SLOT_1(Private, void on_actionDialog_Test_triggered())
    CS_SLOT_2(on_actionDialog_Test_triggered)
       
    CS_SLOT_1(Private, void on_actionExit_triggered())
    CS_SLOT_2(on_actionExit_triggered) 

private:
    Ui::MainWindow *ui;
  
	    
};

#endif // MAINWINDOW_H
