#ifndef CLIENTE_H
#define CLIENTE_H

#include <QDialog>

namespace Ui {
class Cliente;
}

class Cliente : public QDialog
{
    Q_OBJECT

public:
    explicit Cliente(QWidget *parent = nullptr);
    ~Cliente();

private:
    Ui::Cliente *ui;
};

#endif // CLIENTE_H
