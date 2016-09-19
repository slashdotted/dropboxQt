/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListSharedLinksResult.h"

namespace dropboxQt{

namespace sharing{
///ListSharedLinksResult

ListSharedLinksResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListSharedLinksResult::toJson(QJsonObject& js)const{

    js["links"] = struct_list2jsonarray(m_links);
    js["has_more"] = m_has_more;
    if(!m_cursor.isEmpty())
        js["cursor"] = m_cursor;
}

void ListSharedLinksResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["links"].toArray(), m_links);
    m_has_more = js["has_more"].toVariant().toBool();
    m_cursor = js["cursor"].toString();
}

QString ListSharedLinksResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListSharedLinksResult ListSharedLinksResult::EXAMPLE(){
    ListSharedLinksResult rv;
    rv.cursor = "test3value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
