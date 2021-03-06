#ifndef GRADECALCULATOR_H
#define GRADECALCULATOR_H

#include <QMainWindow>


namespace Ui { class GradeCalculator; }


class GradeCalculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit GradeCalculator(QWidget *parent = nullptr);
    ~GradeCalculator();

private slots:

    void on_pushButton_clicked();

private:
    Ui::GradeCalculator *ui;

};
#endif // GRADECALCULATOR_H
