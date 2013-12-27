#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include "BindFolderDialog.h"
#include "Preferences.h"
#include "sdk/megaapi.h"

namespace Ui {
class SettingsDialog;
}

class MegaApplication;
class SettingsDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SettingsDialog(MegaApplication *app, QWidget *parent = 0);
    ~SettingsDialog();

public slots:
    void stateChanged();
    
private slots:
    void on_bGeneral_clicked();

    void on_bAccount_clicked();

    void on_bSyncs_clicked();

    void on_bBandwidth_clicked();

    //void on_bProxies_clicked();

    void on_bCancel_clicked();

    void on_bOk_clicked();

    void on_bHelp_clicked();

    void on_rProxyManual_clicked();

    void on_rProxyAuto_clicked();

    void on_rNoProxy_clicked();

    void on_bUpgrade_clicked();
	void on_bUpgradeBandwidth_clicked();

    void on_rNoLimit_clicked();

    void on_rLimit_clicked();

    void on_cProxyRequiresPassword_clicked();

    void on_bAdd_clicked();
    void on_bApply_clicked();
    void on_bDelete_clicked();

    void on_bUnlink_clicked();


private:
    Ui::SettingsDialog *ui;
    MegaApplication *app;
    Preferences *preferences;
    MegaApi *megaApi;
	bool syncsChanged;
    QStringList syncNames;

    void loadSyncSettings();
    void loadSettings();
    void saveSettings();
};

#endif // SETTINGSDIALOG_H
