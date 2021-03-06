#ifndef MAKECONE_H
#define MAKECONE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

class Ui_ConeDialog
{
public:
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *oriX;
    QLineEdit *oriY;
    QLineEdit *oriZ;
    QLineEdit *dirX;
    QLineEdit *dirY;
    QLineEdit *dirZ;
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_9;
    QLineEdit *height;
    QLineEdit *radius;
    QLineEdit *radius_2;

    void setupUi(QDialog *ConeDialog)
    {
    ConeDialog->setObjectName(QString::fromUtf8("ConeDialog"));
    ConeDialog->resize(QSize(207, 380).expandedTo(ConeDialog->minimumSizeHint()));

    layoutWidget = new QWidget(ConeDialog);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(10, 340, 191, 33));
    hboxLayout = new QHBoxLayout(layoutWidget);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

    groupBox = new QGroupBox(ConeDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 191, 121));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 57, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 41, 17));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 90, 41, 17));
        height = new QLineEdit(groupBox);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(60, 30, 113, 20));
        height->setAlignment(Qt::AlignRight);
        radius = new QLineEdit(groupBox);
        radius->setObjectName(QString::fromUtf8("radius"));
        radius->setGeometry(QRect(60, 60, 113, 20));
        radius->setAlignment(Qt::AlignRight);
        radius_2 = new QLineEdit(groupBox);
        radius_2->setObjectName(QString::fromUtf8("radius_2"));
        radius_2->setGeometry(QRect(60, 90, 113, 20));
        radius_2->setAlignment(Qt::AlignRight);

    hboxLayout->addItem(spacerItem);

    okButton = new QPushButton(layoutWidget);
    okButton->setObjectName(QString::fromUtf8("okButton"));

    hboxLayout->addWidget(okButton);

    cancelButton = new QPushButton(layoutWidget);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

    hboxLayout->addWidget(cancelButton);

    groupBox_2 = new QGroupBox(ConeDialog);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(10, 140, 191, 191));
    label_4 = new QLabel(groupBox_2);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(10, 50, 51, 17));
    label_5 = new QLabel(groupBox_2);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(10, 70, 51, 17));
    label_3 = new QLabel(groupBox_2);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(10, 30, 51, 17));
    label_6 = new QLabel(groupBox_2);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(10, 120, 66, 17));
    label_7 = new QLabel(groupBox_2);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(10, 140, 66, 17));
    label_8 = new QLabel(groupBox_2);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(10, 160, 66, 17));
    oriX = new QLineEdit(groupBox_2);
    oriX->setObjectName(QString::fromUtf8("oriX"));
    oriX->setGeometry(QRect(82, 30, 101, 20));
    oriX->setAlignment(Qt::AlignRight);
    oriY = new QLineEdit(groupBox_2);
    oriY->setObjectName(QString::fromUtf8("oriY"));
    oriY->setGeometry(QRect(82, 50, 101, 20));
    oriY->setAlignment(Qt::AlignRight);
    oriZ = new QLineEdit(groupBox_2);
    oriZ->setObjectName(QString::fromUtf8("oriZ"));
    oriZ->setGeometry(QRect(82, 70, 101, 20));
    oriZ->setAlignment(Qt::AlignRight);
    dirX = new QLineEdit(groupBox_2);
    dirX->setObjectName(QString::fromUtf8("dirX"));
    dirX->setGeometry(QRect(80, 120, 101, 20));
    dirX->setAlignment(Qt::AlignRight);
    dirY = new QLineEdit(groupBox_2);
    dirY->setObjectName(QString::fromUtf8("dirY"));
    dirY->setGeometry(QRect(80, 140, 101, 20));
    dirY->setAlignment(Qt::AlignRight);
    dirZ = new QLineEdit(groupBox_2);
    dirZ->setObjectName(QString::fromUtf8("dirZ"));
    dirZ->setGeometry(QRect(80, 160, 101, 20));
    dirZ->setAlignment(Qt::AlignRight);

    retranslateUi(ConeDialog);
    QObject::connect(okButton, SIGNAL(clicked()), ConeDialog, SLOT(accept()));
    QObject::connect(cancelButton, SIGNAL(clicked()), ConeDialog, SLOT(reject()));

    QMetaObject::connectSlotsByName(ConeDialog);
    } // setupUi

    void retranslateUi(QDialog *ConeDialog)
    {
    ConeDialog->setWindowTitle(QApplication::translate("ConeDialog", "Make Cone", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("ConeDialog", "Position and Direction", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("ConeDialog", "Origin Y", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("ConeDialog", "Origin Z", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("ConeDialog", "Origin X", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("ConeDialog", "Direction X", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("ConeDialog", "Direction Y", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("ConeDialog", "Direction Z", 0, QApplication::UnicodeUTF8));
    oriX->setText(QApplication::translate("ConeDialog", "0", 0, QApplication::UnicodeUTF8));
    oriY->setText(QApplication::translate("ConeDialog", "0", 0, QApplication::UnicodeUTF8));
    oriZ->setText(QApplication::translate("ConeDialog", "0", 0, QApplication::UnicodeUTF8));
    dirX->setText(QApplication::translate("ConeDialog", "0", 0, QApplication::UnicodeUTF8));
    dirY->setText(QApplication::translate("ConeDialog", "0", 0, QApplication::UnicodeUTF8));
    dirZ->setText(QApplication::translate("ConeDialog", "1", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("ConeDialog", "OK", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("ConeDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("ConeDialog", "Properties", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("ConeDialog", "Height", 0, QApplication::UnicodeUTF8));
    label_2->setWhatsThis(QApplication::translate("ConeDialog", "Minor Radius of the cone", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("ConeDialog", "Rmin", 0, QApplication::UnicodeUTF8));
    label_9->setWhatsThis(QApplication::translate("ConeDialog", "Major radius of the Cone", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("ConeDialog", "Rmaj", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(ConeDialog);
    } // retranslateUi

};

namespace Ui {
    class ConeDialog: public Ui_ConeDialog {};
} // namespace Ui

#endif // MAKECONE_H
