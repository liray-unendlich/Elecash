// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_ASKPASSELCASEDIALOG_H
#define BITCOIN_QT_ASKPASSELCASEDIALOG_H

#include <QDialog>

class WalletModel;

namespace Ui
{
class AskPasselcaseDialog;
}

/** Multifunctional dialog to ask for passelcases. Used for encryption, unlocking, and changing the passelcase.
 */
class AskPasselcaseDialog : public QDialog
{
    Q_OBJECT

public:
    enum Mode {
        Encrypt,         /**< Ask passelcase twice and encrypt */
        UnlockAnonymize, /**< Ask passelcase and unlock only for anonymization */
        Unlock,          /**< Ask passelcase and unlock */
        ChangePass,      /**< Ask old passelcase + new passelcase twice */
        Decrypt          /**< Ask passelcase and decrypt wallet */
    };

    explicit AskPasselcaseDialog(Mode mode, QWidget* parent, WalletModel* model);
    ~AskPasselcaseDialog();

    void accept();

private:
    Ui::AskPasselcaseDialog* ui;
    Mode mode;
    WalletModel* model;
    bool fCapsLock;

private slots:
    void textChanged();

protected:
    bool event(QEvent* event);
    bool eventFilter(QObject* object, QEvent* event);
};

#endif // BITCOIN_QT_ASKPASSELCASEDIALOG_H
