/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingRemoveMemberJobStatus.h"

namespace dropboxQt{

namespace sharing{
///RemoveMemberJobStatus

RemoveMemberJobStatus::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RemoveMemberJobStatus::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PollResultBase_IN_PROGRESS:{
            if(!name.isEmpty())
                js[name] = "in_progress";
        }break;
        case RemoveMemberJobStatus_COMPLETE:{
            if(!name.isEmpty())
                js[name] = "complete";
            js["complete"] = (QJsonObject)m_complete;
        }break;
        case RemoveMemberJobStatus_FAILED:{
            if(!name.isEmpty())
                js[name] = "failed";
            m_failed.toJson(js, "failed");
        }break;
    }//switch
}

void RemoveMemberJobStatus::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("in_progress") == 0){
        m_tag = PollResultBase_IN_PROGRESS;
    }
    if(s.compare("complete") == 0){
        m_tag = RemoveMemberJobStatus_COMPLETE;
    }
    if(s.compare("failed") == 0){
        m_tag = RemoveMemberJobStatus_FAILED;
    }
}

QString RemoveMemberJobStatus::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RemoveMemberJobStatus");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RemoveMemberJobStatus RemoveMemberJobStatus::EXAMPLE(){
    RemoveMemberJobStatus rv;
    rv.complete = sharing::MemberAccessLevelResult::EXAMPLE();
    rv.failed = sharing::RemoveFolderMemberError::EXAMPLE();
    rv.m_tag = RemoveMemberJobStatus_COMPLETE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt