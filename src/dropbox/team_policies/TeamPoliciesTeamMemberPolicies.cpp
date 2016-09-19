/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team_policies"
***********************************************************/

#include "dropbox/team_policies/TeamPoliciesTeamMemberPolicies.h"

namespace dropboxQt{

namespace team_policies{
///TeamMemberPolicies

TeamMemberPolicies::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void TeamMemberPolicies::toJson(QJsonObject& js)const{

    js["sharing"] = (QJsonObject)m_sharing;
    m_emm_state.toJson(js, "emm_state");
}

void TeamMemberPolicies::fromJson(const QJsonObject& js){

    m_sharing.fromJson(js);
    m_emm_state.fromJson(js["emm_state"].toObject());
}

QString TeamMemberPolicies::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
TeamMemberPolicies TeamMemberPolicies::EXAMPLE(){
    TeamMemberPolicies rv;
    rv.sharing = team_policies::TeamSharingPolicies::EXAMPLE();
    rv.emm_state = team_policies::EmmState::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team_policies
}//dropboxQt
