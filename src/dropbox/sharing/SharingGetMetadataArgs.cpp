/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingGetMetadataArgs.h"

namespace dropboxQt{

namespace sharing{
///GetMetadataArgs

GetMetadataArgs::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetMetadataArgs::toJson(QJsonObject& js)const{

    if(!m_shared_folder_id.isEmpty())
        js["shared_folder_id"] = m_shared_folder_id;
    js["actions"] = struct_list2jsonarray(m_actions);
}

void GetMetadataArgs::fromJson(const QJsonObject& js){

    m_shared_folder_id = js["shared_folder_id"].toString();
    jsonarray2struct_list(js["actions"].toArray(), m_actions);
}

QString GetMetadataArgs::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetMetadataArgs GetMetadataArgs::EXAMPLE(){
    GetMetadataArgs rv;
    rv.shared_folder_id = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
