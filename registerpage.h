#ifndef REGISTERPAGE_H
#define REGISTERPAGE_H

#include <QDialog>

namespace Ui {
class registerpage;
}

class registerpage : public QDialog
{
    Q_OBJECT

public:
    explicit registerpage(QWidget *parent = nullptr);
    ~registerpage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::registerpage *ui;
};

#endif // REGISTERPAGE_H
