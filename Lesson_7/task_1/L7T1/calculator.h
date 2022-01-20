#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void digitClicked();

    void on_m_b_dot_clicked();
    void unaryFunctions();
    void on_m_b_clear_clicked();
    void functions();
    void on_m_b_result_clicked();

private:

    Ui::Calculator *ui;
};
#endif // CALCULATOR_H
