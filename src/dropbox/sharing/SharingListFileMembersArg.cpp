/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFileMembersArg.h"

namespace dropboxQt{

namespace sharing{
///ListFileMembersArg

ListFileMembersArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFileMembersArg::toJson(QJsonObject& js)const{

    if(!m_file.isEmpty())
        js["file"] = m_file;
    js["actions"] = struct_list2jsonarray(m_actions);
    js["include_inherited"] = m_include_inherited;
    js["limit"] = m_limit;
}

void ListFileMembersArg::fromJson(const QJsonObject& js){

    m_file = js["file"].toString();
    jsonarray2struct_list(js["actions"].toArray(), m_actions);
    m_include_inherited = js["include_inherited"].toVariant().toBool();
    m_limit = js["limit"].toVariant().toInt();
}

QString ListFileMembersArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFileMembersArg ListFileMembersArg::EXAMPLE(){
    ListFileMembersArg rv;
    rv.file = "test1value";
    rv.limit = 4;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt