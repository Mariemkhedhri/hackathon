#include "mainwindow.h"
#include <QApplication>
#include <QStyleFactory>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setStyle(QStyleFactory::create("Fusion"));
    QPalette lightPalette;
    lightPalette.setColor(QPalette::Window, QColor(0xF8FAFC));
    lightPalette.setColor(QPalette::WindowText, QColor(0x0F172A));
    lightPalette.setColor(QPalette::Base, QColor(0xFFFFFF));
    lightPalette.setColor(QPalette::AlternateBase, QColor(0xF1F5F9));
    lightPalette.setColor(QPalette::Text, QColor(0x1E293B));
    lightPalette.setColor(QPalette::Button, QColor(0xFFFFFF));
    lightPalette.setColor(QPalette::ButtonText, QColor(0x1E293B));
    lightPalette.setColor(QPalette::Highlight, QColor(0x2563EB));
    lightPalette.setColor(QPalette::HighlightedText, QColor(0xFFFFFF));
    a.setPalette(lightPalette);


    a.setStyleSheet(R"(
        QMainWindow {
            background-color: #F8FAFC;
        }

        QWidget#sidebar {
            background-color: #0F172A;
        }

        QWidget#sidebar QPushButton {
            color: #94A3B8;
            background-color: transparent;
            border: none;
            text-align: left;
            padding: 10px 15px;
            font-size: 14px;
            border-radius: 6px;
        }

        QWidget#sidebar QPushButton:hover, QWidget#sidebar QPushButton:checked {
            background-color: #2563EB;
            color: #FFFFFF;
        }

        QTableWidget {
            background-color: #FFFFFF;
            gridline-color: #F1F5F9;
            border: 1px solid #E2E8F0;
            border-radius: 8px;
            color: #1E293B;
        }

        QHeaderView::section {
            background-color: #F8FAFC;
            color: #475569;
            padding: 8px;
            border: none;
            border-bottom: 1px solid #E2E8F0;
            font-weight: bold;
        }
    )");

    MainWindow w;
    w.show();
    return a.exec();
}
