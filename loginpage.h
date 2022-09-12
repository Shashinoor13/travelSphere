#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class loginpage; }
QT_END_NAMESPACE

class loginpage : public QDialog
{
    Q_OBJECT

public:
    loginpage(QWidget *parent = nullptr);
    ~loginpage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::loginpage *ui;
};
#endif // LOGINPAGE_H
