#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("CopperSpice Dialog Example");
    QMainWindow::centralWidget()->layout()->setContentsMargins(5, 1, 5, 1);
    QMainWindow::resize(400,200);
    QFont appfont = QApplication::font();
    appfont.setPixelSize(20); //DPI
    QApplication::setFont(appfont);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionDialog_Test_triggered()
{

    qDebug()<<"MainWindow: Dialog triggered\n";
    DialogTest *dialogTest = new DialogTest(this);
    dialogTest->setModal(true);

    if (dialogTest->exec() == QDialog::Accepted) {
        qDebug()<<"MainWindow: Dialog accepted\n";
    }
}





