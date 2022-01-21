#include "calculator.h"
#include "ui_calculator.h"
#include <QDebug>

double firstNum;
Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    connect(ui->m_b_1, &QPushButton::clicked, this, &Calculator::digitClicked);
    connect(ui->m_b_2, &QPushButton::clicked, this, &Calculator::digitClicked);
    connect(ui->m_b_3, &QPushButton::clicked, this, &Calculator::digitClicked);
    connect(ui->m_b_4, &QPushButton::clicked, this, &Calculator::digitClicked);
    connect(ui->m_b_5, &QPushButton::clicked, this, &Calculator::digitClicked);
    connect(ui->m_b_6, &QPushButton::clicked, this, &Calculator::digitClicked);
    connect(ui->m_b_7, &QPushButton::clicked, this, &Calculator::digitClicked);
    connect(ui->m_b_8, &QPushButton::clicked, this, &Calculator::digitClicked);
    connect(ui->m_b_9, &QPushButton::clicked, this, &Calculator::digitClicked);
    connect(ui->m_b_0, &QPushButton::clicked, this, &Calculator::digitClicked);
    connect(ui->m_b_changeSign, &QPushButton::clicked, this, &Calculator::unaryFunctions);
    connect(ui->m_b_persent, &QPushButton::clicked, this, &Calculator::unaryFunctions);
    connect(ui->m_b_plus, &QPushButton::clicked, this, &Calculator::functions);
    connect(ui->m_b_minus, &QPushButton::clicked, this, &Calculator::functions);
    connect(ui->m_b_multiply, &QPushButton::clicked, this, &Calculator::functions);
    connect(ui->m_b_divide, &QPushButton::clicked, this, &Calculator::functions);


    ui->m_b_plus->setCheckable(true);
    ui->m_b_minus->setCheckable(true);
    ui->m_b_divide->setCheckable(true);
    ui->m_b_multiply->setCheckable(true);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::digitClicked()
{
    QPushButton *button = (QPushButton*)sender();
    double allDigits;
    QString setDigit;
    allDigits = (ui->m_e_result->text() + button->text()).toDouble();
    setDigit = QString::number(allDigits);
    ui->m_e_result->setText(setDigit);
}



void Calculator::on_m_b_dot_clicked()
{

    if(ui->m_e_result->text().contains('.'))
    {

    }
    else
        ui->m_e_result->setText(ui->m_e_result->text() + ".");
}


void Calculator::unaryFunctions()
{
    QPushButton *button = (QPushButton*)sender();
    double allDigits;
    QString setDigit;


    if(button->text() == "+/-")
    {
        allDigits = (ui->m_e_result->text()).toDouble();
        allDigits *= -1;
        setDigit = QString::number(allDigits);
        ui->m_e_result->setText(setDigit);
    }
    if(button->text() == "%")
    {
        allDigits = (ui->m_e_result->text()).toDouble();
        allDigits *= 0.01;
        setDigit = QString::number(allDigits);
        ui->m_e_result->setText(setDigit);
    }

}

void Calculator::on_m_b_clear_clicked()
{
    ui->m_e_result->setText("0");
    ui->m_e_top->setText("");
}



void Calculator::functions()
{
    QPushButton *button = (QPushButton*)sender();

    ui->m_e_top->setText((ui->m_e_result->text()));
    firstNum = ui->m_e_top->text().toDouble();
    ui->m_e_result->setText("");
    button->setChecked(true);
}

void Calculator::on_m_b_result_clicked()
{

    double secondNum, resultNumber;
    QString newLabel;
    secondNum = (ui->m_e_result->text()).toDouble();

    if(ui->m_b_plus->isChecked())
    {
        resultNumber = firstNum + secondNum;
        newLabel = QString::number(resultNumber);
        ui->m_e_result->setText(newLabel);
        ui->m_b_plus->setChecked(false);
    }
    if(ui->m_b_minus->isChecked())
    {

        resultNumber = firstNum - secondNum;
        newLabel = QString::number(resultNumber);
        ui->m_e_result->setText(newLabel);
        ui->m_b_minus->setChecked(false);
    }
    if(ui->m_b_divide->isChecked())
    {

        resultNumber = firstNum / secondNum;
        newLabel = QString::number(resultNumber);
        ui->m_e_result->setText(newLabel);

        ui->m_b_divide->setChecked(false);
    }
    if(ui->m_b_multiply->isChecked())
    {

        resultNumber = firstNum * secondNum;
        newLabel = QString::number(resultNumber);
        ui->m_e_result->setText(newLabel);

        ui->m_b_multiply->setChecked(false);
    }
    ui->m_e_top->setText("");
}

void Calculator::on_m_b_plus_clicked()
{
    ui->m_b_plus->setChecked(true);
    ui->m_b_minus->setChecked(false);
    ui->m_b_divide->setChecked(false);
    ui->m_b_multiply->setChecked(false);
}





void Calculator::on_m_b_minus_clicked()
{
    ui->m_b_minus->setChecked(true);
    ui->m_b_divide->setChecked(false);
    ui->m_b_multiply->setChecked(false);
    ui->m_b_plus->setChecked(false);
}


void Calculator::on_m_b_multiply_clicked()
{
    ui->m_b_multiply->setChecked(true);
    ui->m_b_plus->setChecked(false);
    ui->m_b_minus->setChecked(false);
    ui->m_b_divide->setChecked(false);
}


void Calculator::on_m_b_divide_clicked()
{
    ui->m_b_divide->setChecked(true);
    ui->m_b_minus->setChecked(false);
    ui->m_b_divide->setChecked(false);
    ui->m_b_multiply->setChecked(false);
}

