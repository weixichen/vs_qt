#include <mainwindow.h>
#include <ui_mainwindow.h>
#include <QDebug>

//#include "QWidget"
MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pButton_W1_clicked(bool checked)
{
if(checked){
    qDebug()<<checked;
  //  ui->pButton_W1->setText(tr("卫生间灯1关"));
    ui->pButton_W1->setText(tr("wsjd1off"));






}else{
    qDebug()<<checked;

  // ui->pButton_W1->setText("卫生间灯1开");
   ui->pButton_W1->setText("wsjd1on");
}

}

void MainWindow::on_pButton_W2_clicked(bool checked)
{
if(checked){
    ui->pButton_W2->setText(tr("卫生间灯2关"));
}else{
    ui->pButton_W2->setText(tr("卫生间灯2开"));
}
}

void MainWindow::on_pButton_Pf_clicked(bool checked)
{
if(checked){
    ui->pButton_Pf->setText("排风扇关");
}else{
    ui->pButton_Pf->setText("排风扇开");
}

}

void MainWindow::on_pButton_Md_clicked(bool checked)
{
if(checked){
    ui->pButton_Md->setText("门灯关");
}else{
    ui->pButton_Md->setText("门灯开");
}
}

void MainWindow::on_pButton_Xd_clicked(bool checked)
{
if(checked){
    ui->pButton_Xd->setText("鞋柜灯关");
}else{
    ui->pButton_Xd->setText("鞋柜灯开");
}
}

void MainWindow::on_pButton_Gd_clicked(bool checked)
{
if(checked){
    ui->pButton_Gd->setText("过道灯关");
}else{
    ui->pButton_Gd->setText("过道灯开");
}
}

void MainWindow::on_pButton_Cf1_clicked(bool checked)
{
if(checked){
    ui->pButton_Cf1->setText("厨房灯1关");
}else{
    ui->pButton_Cf1->setText("厨房灯1开");
}
}

void MainWindow::on_pButton_Cf2_clicked(bool checked)
{
if(checked){
    ui->pButton_Cf2->setText("厨房灯2关");
}else{
    ui->pButton_Cf2->setText("厨房灯2开");
}
}

void MainWindow::on_pButton_Yt_clicked(bool checked)
{
if(checked){
    ui->pButton_Yt->setText("阳台灯关");
}else{
    ui->pButton_Yt->setText("阳台灯开");
}
}

void MainWindow::on_pButton_Ftqg_clicked()
{

    ui->pButton_Ftqg->setText("温湿度设置");



}

void MainWindow::on_pButton_Ftqk_clicked(bool checked)
{
if(checked){
    ui->pButton_Ftqk->setText("餐厅灯全开");
}else{
    ui->pButton_Ftqk->setText("餐厅灯全关");
}
}

void MainWindow::on_pButton_Ft5_clicked(bool checked)
{
if(checked){
    ui->pButton_Ft5->setText("餐厅灯5关");
}else{
    ui->pButton_Ft5->setText("餐厅灯5开");
}
}

void MainWindow::on_pButton_Ft4_clicked(bool checked)
{
    if(checked){


ui->pButton_Ft4->setText("餐厅灯4关");
    }else{
ui->pButton_Ft4->setText("餐厅灯4开");
}
}
void MainWindow::on_pButton_Ft3_clicked(bool checked)
{
if(checked){
    ui->pButton_Ft3->setText("餐厅灯3关");

}else{
ui->pButton_Ft3->setText("餐厅灯3开");
}
}
void MainWindow::on_pButton_Ft2_clicked(bool checked)
{
if(checked){

    ui->pButton_Ft2->setText("餐厅灯2关");
}else{
    ui->pButton_Ft2->setText("餐厅灯2开");
}
}
void MainWindow::on_pButton_Ft1_clicked(bool checked)
{
    if(checked){
ui->pButton_Ft1->setText("餐厅灯1关");
    }else{
ui->pButton_Ft1->setText("餐厅灯1开");
}
}
void MainWindow::on_pButton_Xf1_clicked(bool checked)
{
    if(checked){
ui->pButton_Xf1->setText("小房灯1关");
    }else{
ui->pButton_Xf1->setText("小房灯1开");
}
}

void MainWindow::on_pButton_Xf2_clicked(bool checked)
{
    if(checked){


ui->pButton_Xf2->setText("小房灯2关");
    }else{
ui->pButton_Xf2->setText("小房灯2开");
}
}

void MainWindow::on_pButton_Df1_clicked(bool checked)
{

    if(checked){
        ui->pButton_Df1->setText("大房灯1关");
    }else{
ui->pButton_Df1->setText("大房灯1开");
}
}

void MainWindow::on_pButton_Df2_clicked(bool checked)
{
if(checked){
    ui->pButton_Df2->setText("大房灯2关");
}else{
ui->pButton_Df2->setText("大房灯2开");
}
}

void MainWindow::on_pButton_Kt1_clicked(bool checked)
{
if(checked){
    ui->pButton_Kt1->setText("客厅灯1关");
}else{
ui->pButton_Kt1->setText("客厅灯1开");
}
}
void MainWindow::on_pButton_Kt2_clicked(bool checked)
{
if(checked){
    ui->pButton_Kt2->setText("客厅灯2关");
}else{
ui->pButton_Kt2->setText("客厅灯2开");
}
}

void MainWindow::on_pButton_Ktc_clicked(bool checked)
{
if(checked){
    ui->pButton_Ktc->setText("客厅彩灯关");
}else{
ui->pButton_Ktc->setText("客厅彩灯开");
}
}
void MainWindow::on_pButton_Ctc_clicked(bool checked)
{
if(checked){
    ui->pButton_Ctc->setText("餐厅彩灯关");
}else{
ui->pButton_Ctc->setText("餐厅彩灯开");
}
}
void MainWindow::on_pButton_Rsq_clicked(bool checked)
{
    if(checked){
        ui->pButton_Rsq->setText("热水器关");
    }else{
    ui->pButton_Rsq->setText("热水器开");
    }
}

void MainWindow::on_pButton_Rsqsz_clicked()
{

}

void MainWindow::on_pButton_Af_clicked(bool checked)
{
if(checked){
    ui->pButton_Af->setText("安防关");
     }else{
ui->pButton_Af->setText("安防开");
}
}

void MainWindow::on_pButton_Afsz_clicked()
{


}

void MainWindow::on_pButton_Wd_clicked()
{
}

void MainWindow::on_pButton_Sd_clicked()
{

}

void MainWindow::on_pButton_Dqg_clicked()
{

    ui->pButton_Dqg->setText("时间设置");

//ui->pButton_Dqg->setText("全房灯关");

}
void MainWindow::on_pButton_Dqk_clicked(bool checked)
{
if(checked){
    ui->pButton_Dqk->setText("全房灯关");
}else{
    ui->pButton_Dqk->setText("全房灯开");
}
}
