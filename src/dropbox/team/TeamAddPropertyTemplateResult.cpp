/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamAddPropertyTemplateResult.h"

namespace dropboxQt{

namespace team{
///AddPropertyTemplateResult

AddPropertyTemplateResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void AddPropertyTemplateResult::toJson(QJsonObject& js)const{

    if(!m_template_id.isEmpty())
        js["template_id"] = m_template_id;
}

void AddPropertyTemplateResult::fromJson(const QJsonObject& js){

    m_template_id = js["template_id"].toString();
}

QString AddPropertyTemplateResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
AddPropertyTemplateResult AddPropertyTemplateResult::EXAMPLE(){
    AddPropertyTemplateResult rv;
    rv.template_id = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt