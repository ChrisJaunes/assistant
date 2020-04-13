#include "pch.h"
#include "setting.h"
#include "Assistant_SQL.h"

Assistant_SQL::Assistant_SQL()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(ASSISTANT_HOSTNAME);
    db.setDatabaseName(ASSISTANT_DATABASENAME);
    db.setPort(ASSISTANT_PORT);
    db.setUserName(ASSISTANT_USERNAME);
    db.setPassword(ASSISTANT_PASSWORD);
}

Assistant_SQL::~Assistant_SQL()
{
}
