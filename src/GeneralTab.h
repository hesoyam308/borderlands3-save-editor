#ifndef GENERALTAB_H
#define GENERALTAB_H

#include <QObject>
#include <QWidget>
#include <memory>

class Savegame;

class QLineEdit;
class QSpinBox;
class QLabel;

class GeneralTab : public QWidget
{
    Q_OBJECT

public:
    explicit GeneralTab(Savegame *savegame, QWidget *parent = nullptr);

signals:

private:
    QLineEdit *m_nameEdit;
    QSpinBox *m_levelEdit;
    QSpinBox *m_xpEdit;
    Savegame *m_savegame;

    QSpinBox *m_saveSlot;
    QLabel *m_uuid;
};

#endif // GENERALTAB_H
