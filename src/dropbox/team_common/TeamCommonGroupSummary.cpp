/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_common"
***********************************************************/

#include "dropbox/team_common/TeamCommonGroupSummary.h"

namespace dropboxQt{

namespace team_common{
///GroupSummary

GroupSummary::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void GroupSummary::toJson(QJsonObject& js)const{

    if(!m_group_name.isEmpty())
        js["group_name"] = m_group_name;
    if(!m_group_id.isEmpty())
        js["group_id"] = m_group_id;
    if(!m_group_external_id.isEmpty())
        js["group_external_id"] = m_group_external_id;
    js["member_count"] = m_member_count;
    m_group_management_type.toJson(js, "group_management_type");
}

void GroupSummary::fromJson(const QJsonObject& js){

    m_group_name = js["group_name"].toString();
    m_group_id = js["group_id"].toString();
    m_group_external_id = js["group_external_id"].toString();
    m_member_count = js["member_count"].toVariant().toInt();
    m_group_management_type.fromJson(js["group_management_type"].toObject());
}

QString GroupSummary::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
GroupSummary GroupSummary::EXAMPLE(){
    GroupSummary rv;
    rv.group_name = "test1value";
    rv.group_id = "test2value";
    rv.group_external_id = "test3value";
    rv.member_count = 4;
    rv.group_management_type = team_common::GroupManagementType::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team_common
}//dropboxQt
