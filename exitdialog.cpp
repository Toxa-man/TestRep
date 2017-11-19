#include "exitdialog.h"
#include "ui_exitdialog.h"

ExitDialog::ExitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExitDialog)
{
    ui->setupUi(this);
    connect(ui->AcceptBtn, &QPushButton::clicked, this, &ExitDialog::accept);
    connect(ui->RejectBtn, &QPushButton::clicked, this, &ExitDialog::reject);

}

ExitDialog::~ExitDialog()
{
    delete ui;
}
