#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPushButton>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pButton_W1_clicked(bool checked);

    void on_pButton_W2_clicked(bool checked);

    void on_pButton_Pf_clicked(bool checked);

    void on_pButton_Md_clicked(bool checked);

    void on_pButton_Xd_clicked(bool checked);

    void on_pButton_Gd_clicked(bool checked);

    void on_pButton_Cf1_clicked(bool checked);

    void on_pButton_Cf2_clicked(bool checked);

    void on_pButton_Yt_clicked(bool checked);

    void on_pButton_Ftqg_clicked();

    void on_pButton_Ftqk_clicked(bool checked);

    void on_pButton_Ft5_clicked(bool checked);

    void on_pButton_Ft4_clicked(bool checked);

    void on_pButton_Ft3_clicked(bool checked);

    void on_pButton_Ft2_clicked(bool checked);

    void on_pButton_Ft1_clicked(bool checked);

    void on_pButton_Xf1_clicked(bool checked);

    void on_pButton_Xf2_clicked(bool checked);

    void on_pButton_Df1_clicked(bool checked);

    void on_pButton_Df2_clicked(bool checked);

    void on_pButton_Kt1_clicked(bool checked);

    void on_pButton_Kt2_clicked(bool checked);

    void on_pButton_Ktc_clicked(bool checked);

    void on_pButton_Ctc_clicked(bool checked);

    void on_pButton_Rsq_clicked(bool checked);

    void on_pButton_Rsqsz_clicked();

    void on_pButton_Af_clicked(bool checked);

    void on_pButton_Afsz_clicked();

    void on_pButton_Wd_clicked();

    void on_pButton_Sd_clicked();

    void on_pButton_Dqg_clicked();

    void on_pButton_Dqk_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
