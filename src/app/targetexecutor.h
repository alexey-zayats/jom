/****************************************************************************
 **
 ** Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies).
 ** Contact: Qt Software Information (qt-info@nokia.com)
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
 ** If you are unsure which license is appropriate for your use, please
 ** contact the sales department at qt-sales@nokia.com.
 **
 ** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 ** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 **
 ****************************************************************************/
#pragma once

#include "makefile.h"
#include <QEvent>

class QProcess;
class QFile;

namespace NMakeFile {

class CommandExecutor;
class DependencyGraph;

class TargetExecutor : public QObject {
    Q_OBJECT
public:
    TargetExecutor();
    ~TargetExecutor();

    void apply(Makefile* mkfile, const QStringList& targets);

    struct StartEvent : public QEvent
    {
        StartEvent()
            : QEvent(QEvent::User)
        {}
    };

protected:
    bool event(QEvent* e);

private slots:
    void onChildStarted(CommandExecutor*);
    void onChildFinished(CommandExecutor*, bool abortMakeProcess);

private:
    void startProcesses();

private:
    Makefile* m_makefile;
    DependencyGraph* m_depgraph;
    QList<DescriptionBlock*> m_pendingTargets;

    QList<CommandExecutor*> m_availableProcesses;
};

} //namespace NMakeFile