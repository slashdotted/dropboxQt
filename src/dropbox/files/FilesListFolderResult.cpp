/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesListFolderResult.h"

namespace dropboxQt{

namespace files{
///ListFolderResult

ListFolderResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFolderResult::toJson(QJsonObject& js)const{

    js["entries"] = struct_list2jsonarray(m_entries);
    if(!m_cursor.isEmpty())
        js["cursor"] = m_cursor;
    js["has_more"] = m_has_more;
}

void ListFolderResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["entries"].toArray(), m_entries);
    m_cursor = js["cursor"].toString();
    m_has_more = js["has_more"].toVariant().toBool();
}

QString ListFolderResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFolderResult ListFolderResult::EXAMPLE(){
    ListFolderResult rv;
    rv.cursor = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
