/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFileMembersIndividualResult.h"

namespace dropboxQt{

namespace sharing{
///ListFileMembersIndividualResult

ListFileMembersIndividualResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ListFileMembersIndividualResult::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ListFileMembersIndividualResult_RESULT:{
            if(!name.isEmpty())
                js[name] = "result";
            js["result"] = (QJsonObject)m_result;
        }break;
        case ListFileMembersIndividualResult_ACCESS_ERROR:{
            if(!name.isEmpty())
                js[name] = "access_error";
            m_access_error.toJson(js, "access_error");
        }break;
        case ListFileMembersIndividualResult_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void ListFileMembersIndividualResult::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("result") == 0){
        m_tag = ListFileMembersIndividualResult_RESULT;
    }
    if(s.compare("access_error") == 0){
        m_tag = ListFileMembersIndividualResult_ACCESS_ERROR;
    }
    if(s.compare("other") == 0){
        m_tag = ListFileMembersIndividualResult_OTHER;
    }
}

QString ListFileMembersIndividualResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ListFileMembersIndividualResult");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFileMembersIndividualResult ListFileMembersIndividualResult::EXAMPLE(){
    ListFileMembersIndividualResult rv;
    rv.result = sharing::ListFileMembersCountResult::EXAMPLE();
    rv.access_error = sharing::SharingFileAccessError::EXAMPLE();
    rv.m_tag = ListFileMembersIndividualResult_RESULT;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt