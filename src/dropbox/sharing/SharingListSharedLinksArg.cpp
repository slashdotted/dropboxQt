/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListSharedLinksArg.h"

namespace dropboxQt{

namespace sharing{
///ListSharedLinksArg

ListSharedLinksArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListSharedLinksArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
    if(!m_cursor.isEmpty())
        js["cursor"] = m_cursor;
    js["direct_only"] = m_direct_only;
}

void ListSharedLinksArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_cursor = js["cursor"].toString();
    m_direct_only = js["direct_only"].toVariant().toBool();
}

QString ListSharedLinksArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListSharedLinksArg ListSharedLinksArg::EXAMPLE(){
    ListSharedLinksArg rv;
    rv.path = "test1value";
    rv.cursor = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt