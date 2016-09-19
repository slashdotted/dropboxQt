/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "async"
***********************************************************/

#include "dropbox/async/AsyncPollEmptyResult.h"

namespace dropboxQt{

namespace async{
///PollEmptyResult

PollEmptyResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void PollEmptyResult::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case PollResultBase_IN_PROGRESS:{
            if(!name.isEmpty())
                js[name] = "in_progress";
        }break;
        case PollEmptyResult_COMPLETE:{
            if(!name.isEmpty())
                js[name] = "complete";
        }break;
    }//switch
}

void PollEmptyResult::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("in_progress") == 0){
        m_tag = PollResultBase_IN_PROGRESS;
    }
    if(s.compare("complete") == 0){
        m_tag = PollEmptyResult_COMPLETE;
    }
}

QString PollEmptyResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "PollEmptyResult");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
PollEmptyResult PollEmptyResult::EXAMPLE(){
    PollEmptyResult rv;
    rv.m_tag = PollEmptyResult_COMPLETE;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//async
}//dropboxQt
