#include "widget.h"
#include "ui_widget.h"

#include "base/fact/FactMetaData.h"
#include "base/fact/SettingsFact.h"
#include <QMap>
#include <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    const char* sensorWidthName =          "roll";
//    SettingsFact settingsGroup;
    QMap<QString, FactMetaData*> metaDataMap(FactMetaData::createMapFromJsonFile(QStringLiteral(":/VehicleFact.json"), NULL));

    Fact sensorWidthFact(0, metaDataMap[sensorWidthName]);
     qDebug() << "----------------" << metaDataMap.count() << sensorWidthFact.type()
              << sensorWidthFact.name() << sensorWidthFact.cookedUnits()
              << sensorWidthFact.rawValue() << sensorWidthFact.decimalPlaces()
              << sensorWidthFact.shortDescription();

}

Widget::~Widget()
{
    delete ui;
}
