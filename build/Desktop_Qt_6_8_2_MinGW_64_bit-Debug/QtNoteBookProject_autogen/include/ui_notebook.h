/********************************************************************************
** Form generated from reading UI file 'notebook.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEBOOK_H
#define UI_NOTEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoteBook
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *TopLayout;
    QComboBox *DocumentComboBox;
    QComboBox *EditComboBox;
    QComboBox *TextShowComboBox;
    QSpacerItem *TopHorizontalSpacer;
    QTextEdit *TextEdit;
    QHBoxLayout *ButtomLayout;
    QPushButton *ExitPushButton;
    QPushButton *AboutPushButton;
    QPushButton *HelpPushButton;
    QPushButton *TestPushButton;
    QSpacerItem *ButtomHorizontalSpacer;
    QDateTimeEdit *DateTimeEdit;

    void setupUi(QWidget *NoteBook)
    {
        if (NoteBook->objectName().isEmpty())
            NoteBook->setObjectName("NoteBook");
        NoteBook->resize(961, 571);
        verticalLayout_2 = new QVBoxLayout(NoteBook);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        TopLayout = new QHBoxLayout();
        TopLayout->setObjectName("TopLayout");
        DocumentComboBox = new QComboBox(NoteBook);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        DocumentComboBox->addItem(icon, QString());
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        DocumentComboBox->addItem(icon1, QString());
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        DocumentComboBox->addItem(icon2, QString());
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSaveAs));
        DocumentComboBox->addItem(icon3, QString());
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPrint));
        DocumentComboBox->addItem(icon4, QString());
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::EditCopy));
        DocumentComboBox->addItem(icon5, QString());
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        DocumentComboBox->addItem(icon6, QString());
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        DocumentComboBox->addItem(icon7, QString());
        DocumentComboBox->setObjectName("DocumentComboBox");

        TopLayout->addWidget(DocumentComboBox);

        EditComboBox = new QComboBox(NoteBook);
        EditComboBox->addItem(icon7, QString());
        EditComboBox->addItem(icon5, QString());
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::EditPaste));
        EditComboBox->addItem(icon8, QString());
        QIcon icon9(QIcon::fromTheme(QIcon::ThemeIcon::EditCut));
        EditComboBox->addItem(icon9, QString());
        EditComboBox->addItem(icon6, QString());
        QIcon icon10(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        EditComboBox->addItem(icon10, QString());
        QIcon icon11(QIcon::fromTheme(QIcon::ThemeIcon::EditRedo));
        EditComboBox->addItem(icon11, QString());
        QIcon icon12(QIcon::fromTheme(QIcon::ThemeIcon::EditSelectAll));
        EditComboBox->addItem(icon12, QString());
        EditComboBox->setObjectName("EditComboBox");

        TopLayout->addWidget(EditComboBox);

        TextShowComboBox = new QComboBox(NoteBook);
        QIcon icon13(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyLeft));
        TextShowComboBox->addItem(icon13, QString());
        QIcon icon14(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyCenter));
        TextShowComboBox->addItem(icon14, QString());
        QIcon icon15(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyRight));
        TextShowComboBox->addItem(icon15, QString());
        QIcon icon16(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextBold));
        TextShowComboBox->addItem(icon16, QString());
        QIcon icon17(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextItalic));
        TextShowComboBox->addItem(icon17, QString());
        QIcon icon18(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextUnderline));
        TextShowComboBox->addItem(icon18, QString());
        TextShowComboBox->setObjectName("TextShowComboBox");

        TopLayout->addWidget(TextShowComboBox);

        TopHorizontalSpacer = new QSpacerItem(300, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        TopLayout->addItem(TopHorizontalSpacer);


        verticalLayout->addLayout(TopLayout);

        TextEdit = new QTextEdit(NoteBook);
        TextEdit->setObjectName("TextEdit");

        verticalLayout->addWidget(TextEdit);

        ButtomLayout = new QHBoxLayout();
        ButtomLayout->setObjectName("ButtomLayout");
        ExitPushButton = new QPushButton(NoteBook);
        ExitPushButton->setObjectName("ExitPushButton");

        ButtomLayout->addWidget(ExitPushButton);

        AboutPushButton = new QPushButton(NoteBook);
        AboutPushButton->setObjectName("AboutPushButton");

        ButtomLayout->addWidget(AboutPushButton);

        HelpPushButton = new QPushButton(NoteBook);
        HelpPushButton->setObjectName("HelpPushButton");

        ButtomLayout->addWidget(HelpPushButton);

        TestPushButton = new QPushButton(NoteBook);
        TestPushButton->setObjectName("TestPushButton");

        ButtomLayout->addWidget(TestPushButton);

        ButtomHorizontalSpacer = new QSpacerItem(178, 28, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        ButtomLayout->addItem(ButtomHorizontalSpacer);

        DateTimeEdit = new QDateTimeEdit(NoteBook);
        DateTimeEdit->setObjectName("DateTimeEdit");

        ButtomLayout->addWidget(DateTimeEdit);


        verticalLayout->addLayout(ButtomLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(NoteBook);

        QMetaObject::connectSlotsByName(NoteBook);
    } // setupUi

    void retranslateUi(QWidget *NoteBook)
    {
        NoteBook->setWindowTitle(QCoreApplication::translate("NoteBook", "NoteBook", nullptr));
        DocumentComboBox->setItemText(0, QCoreApplication::translate("NoteBook", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
        DocumentComboBox->setItemText(1, QCoreApplication::translate("NoteBook", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        DocumentComboBox->setItemText(2, QCoreApplication::translate("NoteBook", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        DocumentComboBox->setItemText(3, QCoreApplication::translate("NoteBook", "\345\217\246\345\255\230\346\226\207\344\273\266", nullptr));
        DocumentComboBox->setItemText(4, QCoreApplication::translate("NoteBook", "\346\211\223\345\215\260\346\226\207\344\273\266", nullptr));
        DocumentComboBox->setItemText(5, QCoreApplication::translate("NoteBook", "\345\244\215\345\210\266\346\226\207\344\273\266", nullptr));
        DocumentComboBox->setItemText(6, QCoreApplication::translate("NoteBook", "\345\210\240\351\231\244\346\226\207\344\273\266", nullptr));
        DocumentComboBox->setItemText(7, QCoreApplication::translate("NoteBook", "\345\205\263\351\227\255\346\226\207\344\273\266", nullptr));

        EditComboBox->setItemText(0, QCoreApplication::translate("NoteBook", "\346\270\205\347\251\272", nullptr));
        EditComboBox->setItemText(1, QCoreApplication::translate("NoteBook", "\345\244\215\345\210\266", nullptr));
        EditComboBox->setItemText(2, QCoreApplication::translate("NoteBook", "\347\262\230\350\264\264", nullptr));
        EditComboBox->setItemText(3, QCoreApplication::translate("NoteBook", "\345\211\252\345\210\207", nullptr));
        EditComboBox->setItemText(4, QCoreApplication::translate("NoteBook", "\345\210\240\351\231\244", nullptr));
        EditComboBox->setItemText(5, QCoreApplication::translate("NoteBook", "\346\237\245\346\211\276", nullptr));
        EditComboBox->setItemText(6, QCoreApplication::translate("NoteBook", "\346\222\244\351\224\200", nullptr));
        EditComboBox->setItemText(7, QCoreApplication::translate("NoteBook", "\345\205\250\351\200\211", nullptr));

        TextShowComboBox->setItemText(0, QCoreApplication::translate("NoteBook", "\345\261\205\345\267\246", nullptr));
        TextShowComboBox->setItemText(1, QCoreApplication::translate("NoteBook", "\345\261\205\344\270\255", nullptr));
        TextShowComboBox->setItemText(2, QCoreApplication::translate("NoteBook", "\345\261\205\345\217\263", nullptr));
        TextShowComboBox->setItemText(3, QCoreApplication::translate("NoteBook", "\345\212\240\347\262\227", nullptr));
        TextShowComboBox->setItemText(4, QCoreApplication::translate("NoteBook", "\346\226\234\344\275\223", nullptr));
        TextShowComboBox->setItemText(5, QCoreApplication::translate("NoteBook", "\344\270\213\345\210\222\347\272\277", nullptr));

        ExitPushButton->setText(QCoreApplication::translate("NoteBook", "PushButton", nullptr));
        AboutPushButton->setText(QCoreApplication::translate("NoteBook", "PushButton", nullptr));
        HelpPushButton->setText(QCoreApplication::translate("NoteBook", "PushButton", nullptr));
        TestPushButton->setText(QCoreApplication::translate("NoteBook", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoteBook: public Ui_NoteBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEBOOK_H
