#ifndef QWMAINWINDOW_H
#define QWMAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>
#include <QSpinBox>
#include <QFontComboBox>

namespace Ui {
class QWMainWindow;
}

class QWMainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QString         fCurFileName;//当前文件名
    QLabel          *fLabCurFile;//状态栏(窗口下面)里显示当前文件的Label
    QProgressBar    *progressBar1;//状态栏上的进度条

    QSpinBox        *spinFontSize;//字体大写
    QFontComboBox   *comboFont;   //字体名字


    void updateCurFile(QString aFile);//更新当前文件名，并更新状态栏提示
    void iniUI();                     //程序设计的UI初始化
    void iniSignalSlots();            //手动关联信号与槽
    //void createNew();

public:
    explicit QWMainWindow(QWidget *parent = 0);
    ~QWMainWindow();

private slots:
    void on_actFontBold_triggered(bool checked);     //粗体Action
    void on_actFontItalic_triggered(bool checked);   //斜体Action
    void on_actFontUnderline_triggered(bool checked);//下划线Action

    void on_txtEdit_copyAvailable(bool b);//有文字可copy时更新cut,copy的Enable状态
    void on_txtEdit_selectionChanged();   //当前选择的文字发生变化,更新粗体、斜体、下划线3个action的checked状态

    void on_spinBoxFontSize_valueChanged(int aFontSize);
    void on_comboFont_currentIndexChanged(const QString &arg1);

private:
    Ui::QWMainWindow *ui;
};

#endif // QWMAINWINDOW_H
