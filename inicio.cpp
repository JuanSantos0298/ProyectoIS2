#include "inicio.h"
#include "ui_inicio.h"

Inicio::Inicio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inicio)
{
    ui->setupUi(this);
    conexion = QSqlDatabase::addDatabase("QODBC");
    conexion.setUserName("root");
    conexion.setDatabaseName("ParkingALot");
}

Inicio::~Inicio()
{
    delete ui;
}

void Inicio::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Inicio::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Inicio::on_btnRegistarr_clicked()
{
    QString nombre = ui->txtNombre->text(), apePat = ui->txtApPat->text(), apeMat = ui->txtApMat->text(), dir = ui->txtDir->text(), tel = ui->txtTel->text(), dob = ui->dteFechaNac->date().toString();
    QSqlQuery registro;
    QSqlQuery registroC;
    conexion.open();
    registro.exec("INSERT INTO Usuario(Nombre, ApellidoP, ApellidoM, FechaN, Telefono, Direccion) VALUES("+nombre+","+apePat+","+apeMat+","+dob+","+tel+","+dir+");");
    registroC.exec("INSERT INTO Cliente SET NoCliente = 10001, Mensual = 0, Usuario_IdUsuario = (SELECT IdUsuario FROM Usuario WHERE IdUsuario = 2;)");
    conexion.close();
}
