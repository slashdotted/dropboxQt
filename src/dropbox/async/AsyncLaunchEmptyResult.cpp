/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "async"
***********************************************************/

#include "dropbox/async/AsyncLaunchEmptyResult.h"

namespace dropboxQt{

namespace async{
///LaunchEmptyResult

LaunchEmptyResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void LaunchEmptyResult::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case LaunchResultBase_ASYNC_JOB_ID:{
            if(!name.isEmpty())
                js[name] = "async_job_id";
            if(!m_async_job_id.isEmpty())
                js["async_job_id"] = m_async_job_id;
        }break;
        case LaunchEmptyResult_COMPLETE:{
            if(!name.isEmpty())
                js[name] = "complete";
        }break;
    }//switch
}

void LaunchEmptyResult::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("async_job_id") == 0){
        m_tag = LaunchResultBase_ASYNC_JOB_ID;
    }
    if(s.compare("complete") == 0){
        m_tag = LaunchEmptyResult_COMPLETE;
    }
}

QString LaunchEmptyResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "LaunchEmptyResult");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
LaunchEmptyResult LaunchEmptyResult::EXAMPLE(){
    LaunchEmptyResult rv;
    rv.m_tag = LaunchEmptyResult_COMPLETE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//async
}//dropboxQt
