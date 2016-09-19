/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamRevokeDeviceSessionBatchResult.h"

namespace dropboxQt{

namespace team{
///RevokeDeviceSessionBatchResult

RevokeDeviceSessionBatchResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RevokeDeviceSessionBatchResult::toJson(QJsonObject& js)const{

    js["revoke_devices_status"] = struct_list2jsonarray(m_revoke_devices_status);
}

void RevokeDeviceSessionBatchResult::fromJson(const QJsonObject& js){

    jsonarray2struct_list(js["revoke_devices_status"].toArray(), m_revoke_devices_status);
}

QString RevokeDeviceSessionBatchResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RevokeDeviceSessionBatchResult RevokeDeviceSessionBatchResult::EXAMPLE(){
    RevokeDeviceSessionBatchResult rv;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
