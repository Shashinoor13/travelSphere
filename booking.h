#ifndef BOOKING_H
#define BOOKING_H

#include <QMainWindow>

namespace Ui {
class Booking;
}

class Booking : public QMainWindow
{
    Q_OBJECT

public:
    explicit Booking(QWidget *parent = nullptr);
    ~Booking();

private slots:
    void on_Profile_clicked();

private:
    Ui::Booking *ui;
};

#endif // BOOKING_H
