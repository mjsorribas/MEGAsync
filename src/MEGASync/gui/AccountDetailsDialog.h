#ifndef ACCOUNTDETAILSDIALOG_H
#define ACCOUNTDETAILSDIALOG_H

#include <QDialog>

#include "megaapi.h"
#include "Preferences.h"

namespace Ui {
class AccountDetailsDialog;
}

class AccountDetailsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AccountDetailsDialog(mega::MegaApi *megaApi, QWidget *parent = 0);
    ~AccountDetailsDialog();
    void refresh(Preferences *details);

private slots:
    void on_bRefresh_clicked();

private:
    Ui::AccountDetailsDialog *ui;
    mega::MegaApi *megaApi;
};

#endif // ACCOUNTDETAILSDIALOG_H
