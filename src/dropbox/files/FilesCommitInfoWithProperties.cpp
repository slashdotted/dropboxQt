/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesCommitInfoWithProperties.h"

namespace dropboxQt{

namespace files{
///CommitInfoWithProperties

CommitInfoWithProperties::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void CommitInfoWithProperties::toJson(QJsonObject& js)const{

    CommitInfo::toJson(js);
    js["property_groups"] = struct_list2jsonarray(m_property_groups);
}

void CommitInfoWithProperties::fromJson(const QJsonObject& js){

    CommitInfo::fromJson(js);
    jsonarray2struct_list(js["property_groups"].toArray(), m_property_groups);
}

QString CommitInfoWithProperties::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
CommitInfoWithProperties CommitInfoWithProperties::EXAMPLE(){
    CommitInfoWithProperties rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt