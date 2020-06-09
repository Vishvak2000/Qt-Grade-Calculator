#include "gradecalculator.h"
#include "ui_gradecalculator.h"

GradeCalculator::GradeCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GradeCalculator)
{
    ui->setupUi(this);
   ui->centralwidget->setStyleSheet("background-color: darkCyan;");
}

GradeCalculator::~GradeCalculator()
{
    delete ui;
}

void GradeCalculator::on_pushButton_clicked()
{
    if(ui->comboBox->currentIndex()==0){ //Pic 10c is chosen

        if(ui->radioButton->isChecked()){ //schema 1
            const int N_HWK = 8;
            const double P_HWK = 0.25;
            const double P_MT = 0.20;
            const double P_F = 0.35;

            double hwtotal =
                    ((ui->spinBox->value()+
                    ui->spinBox_2->value()+
                    ui->spinBox_3->value()+
                     ui->spinBox_4->value()+
                     ui->spinBox_5->value()+
                     ui->spinBox_6->value()+
                     ui->spinBox_7->value()+
                     ui->spinBox_8->value())*P_HWK/N_HWK);
            //Acquire exam scores
            double m1 = ui->spinBox_9->value()*P_MT;
            double m2 = ui->spinBox_10->value()*P_MT;
            double f = ui->spinBox_11->value()*P_F;


            //Display calculated grade
            ui->Score->setText(QString::number(hwtotal+m1+m2+f));

        } else if (ui->radioButton_2->isChecked()) {

            const int N_HWK = 8;
            const double P_HWK = 0.25;
            const double P_MT = 0.30;
            const double P_F = 0.44;

            double hwtotal =
                    ((ui->spinBox->value()+
                    ui->spinBox_2->value()+
                    ui->spinBox_3->value()+
                     ui->spinBox_4->value()+
                     ui->spinBox_5->value()+
                     ui->spinBox_6->value()+
                     ui->spinBox_7->value()+
                     ui->spinBox_8->value())*P_HWK/N_HWK);
            //Acquire exam scores
            double m1 = ui->spinBox_9->value()*P_MT;
            double m2 = ui->spinBox_10->value()*P_MT;
            double m;
            if (m1>m2) {
                m = m1;
            } else {
                m = m2;
            }
            double f = ui->spinBox_11->value()*P_F;
            ui->Score->setText(QString::number(hwtotal+m+f));

        }
    }

    if(ui->comboBox->currentIndex()==1){ //Pic 10B is chosen

        if(ui->radioButton->isChecked()){ //schema 1
            const int N_HWK = 8;
            const double P_HWK = 0.55;
            const double P_MT = 0.15;
            const double P_F = 0.15;

            double hwtotal =
                    ((ui->spinBox->value()+
                    ui->spinBox_2->value()+
                    ui->spinBox_3->value()+
                     ui->spinBox_4->value()+
                     ui->spinBox_5->value()+
                     ui->spinBox_6->value()+
                     ui->spinBox_7->value()+
                     ui->spinBox_8->value())*P_HWK/N_HWK);
            //Acquire exam scores
            double m1 = ui->spinBox_9->value()*P_MT;
            double m2 = ui->spinBox_10->value()*P_MT;
            double f = ui->spinBox_11->value()*P_F;


            //Display calculated grade
            ui->Score->setText(QString::number(hwtotal+m1+m2+f));

        } else if (ui->radioButton_2->isChecked()) {
//schema 2
            const int N_HWK = 8;
            const double P_HWK = 0.55;
            const double P_MT = 0.30;
            const double P_F = 0.15;

            double hwtotal =
                    ((ui->spinBox->value()+
                    ui->spinBox_2->value()+
                    ui->spinBox_3->value()+
                     ui->spinBox_4->value()+
                     ui->spinBox_5->value()+
                     ui->spinBox_6->value()+
                     ui->spinBox_7->value()+
                     ui->spinBox_8->value())*P_HWK/N_HWK);
            //Acquire exam scores
            double m1 = ui->spinBox_9->value()*P_MT;
            double m2 = ui->spinBox_10->value()*P_MT;
            double m;
            if (m1>m2) {
                m = m1;
            } else {
                m = m2;
            }
            double f = ui->spinBox_11->value()*P_F;
            ui->Score->setText(QString::number(hwtotal+m+f));

        }
    }
}
