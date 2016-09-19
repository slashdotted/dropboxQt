/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesDownloadArg.h"

namespace dropboxQt{

namespace files{
///DownloadArg

DownloadArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void DownloadArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
    if(!m_rev.isEmpty())
        js["rev"] = m_rev;
}

void DownloadArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_rev = js["rev"].toString();
}

QString DownloadArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
DownloadArg DownloadArg::EXAMPLE(){
    DownloadArg rv;
    rv.path = "test1value";
    rv.rev = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
