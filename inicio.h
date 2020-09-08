#ifndef INICIO_H
#define INICIO_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class Inicio;
}

class Inicio : public QDialog
{
    Q_OBJECT

public:
    explicit Inicio(QWidget *parent = nullptr);
    ~Inicio();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_btnRegistarr_clicked();

private:
    Ui::Inicio *ui;
    QSqlDatabase conexion;
};

#endif // INICIO_H
