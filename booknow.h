#ifndef BOOKNOW_H
#define BOOKNOW_H

#include <QDialog>

namespace Ui {
class BookNow;
}

class BookNow : public QDialog
{
    Q_OBJECT

public:
    explicit BookNow(QWidget *parent = nullptr);
    ~BookNow();

private:
    Ui::BookNow *ui;
};

#endif // BOOKNOW_H
