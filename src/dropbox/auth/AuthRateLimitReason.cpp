/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "auth"
***********************************************************/

#include "dropbox/auth/AuthRateLimitReason.h"

namespace dropboxQt{

namespace auth{
///RateLimitReason

RateLimitReason::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void RateLimitReason::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case RateLimitReason_TOO_MANY_REQUESTS:{
            if(!name.isEmpty())
                js[name] = "too_many_requests";
        }break;
        case RateLimitReason_TOO_MANY_WRITE_OPERATIONS:{
            if(!name.isEmpty())
                js[name] = "too_many_write_operations";
        }break;
        case RateLimitReason_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void RateLimitReason::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("too_many_requests") == 0){
        m_tag = RateLimitReason_TOO_MANY_REQUESTS;
    }
    if(s.compare("too_many_write_operations") == 0){
        m_tag = RateLimitReason_TOO_MANY_WRITE_OPERATIONS;
    }
    if(s.compare("other") == 0){
        m_tag = RateLimitReason_OTHER;
    }
}

QString RateLimitReason::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "RateLimitReason");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RateLimitReason RateLimitReason::EXAMPLE(){
    RateLimitReason rv;
    rv.m_tag = RateLimitReason_TOO_MANY_REQUESTS;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//auth
}//dropboxQt
