/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
 Part of "Ardi - the organizer" project.
 osoft4ardi@gmail.com
 www.prokarpaty.net
***********************************************************/

#include "dropbox/files/FilesRestoreArg.h"
using namespace dropboxQt;

namespace dropboxQt{

namespace files{
///RestoreArg

RestoreArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RestoreArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = QString(m_path);
    if(!m_rev.isEmpty())
        js["rev"] = QString(m_rev);
}

void RestoreArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_rev = js["rev"].toString();
}

QString RestoreArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<RestoreArg>  RestoreArg::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<RestoreArg>  RestoreArg::factory::create(const QJsonObject& js)
{
    std::unique_ptr<RestoreArg> rv;
    rv = std::unique_ptr<RestoreArg>(new RestoreArg);
    rv->fromJson(js);
    return rv;
}

}//files
}//dropboxQt
