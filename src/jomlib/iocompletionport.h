/****************************************************************************
 **
 ** Copyright (C) 2008-2014 Digia Plc and/or its subsidiary(-ies).
 ** Contact: http://www.qt-project.org/legal
 **
 ** This file is part of the jom project on Trolltech Labs.
 **
 ** This file may be used under the terms of the GNU General Public
 ** License version 2.0 or 3.0 as published by the Free Software Foundation
 ** and appearing in the file LICENSE.GPL included in the packaging of
 ** this file.  Please review the following information to ensure GNU
 ** General Public Licensing requirements will be met:
 ** http://www.fsf.org/licensing/licenses/info/GPLv2.html and
 ** http://www.gnu.org/copyleft/gpl.html.
 **
 ** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 ** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 **
 ****************************************************************************/

#ifndef IOCOMPLETIONPORT_H
#define IOCOMPLETIONPORT_H

#include <qset.h>
#include <qmutex.h>
#include <qthread.h>
#include <qt_windows.h>

namespace NMakeFile {

class IoCompletionPortObserver
{
public:
    virtual void completionPortNotified(DWORD numberOfBytes, DWORD errorCode) = 0;
};

class IoCompletionPort : protected QThread
{
public:
    static IoCompletionPort *instance();
    static void destroyInstance();

    void registerObserver(IoCompletionPortObserver *notifier, HANDLE hFile);
    void unregisterObserver(IoCompletionPortObserver *notifier);

protected:
    void run();

private:
    IoCompletionPort();
    ~IoCompletionPort();

    static IoCompletionPort *m_instance;
    HANDLE hPort;
    QSet<IoCompletionPortObserver *> observers;
    QMutex mutex;
};

} // namespace NMakeFile

#endif // IOCOMPLETIONPORT_H
