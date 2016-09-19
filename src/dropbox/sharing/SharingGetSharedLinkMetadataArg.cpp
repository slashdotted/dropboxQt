/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingGetSharedLinkMetadataArg.h"

namespace dropboxQt{

namespace sharing{
///GetSharedLinkMetadataArg

GetSharedLinkMetadataArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GetSharedLinkMetadataArg::toJson(QJsonObject& js)const{

    if(!m_url.isEmpty())
        js["url"] = m_url;
    if(!m_path.isEmpty())
        js["path"] = m_path;
    if(!m_link_password.isEmpty())
        js["link_password"] = m_link_password;
}

void GetSharedLinkMetadataArg::fromJson(const QJsonObject& js){

    m_url = js["url"].toString();
    m_path = js["path"].toString();
    m_link_password = js["link_password"].toString();
}

QString GetSharedLinkMetadataArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GetSharedLinkMetadataArg GetSharedLinkMetadataArg::EXAMPLE(){
    GetSharedLinkMetadataArg rv;
    rv.url = "test1value";
    rv.path = "test2value";
    rv.link_password = "test3value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
