/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesLookupError.h"

namespace dropboxQt{

namespace files{
///LookupError

LookupError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void LookupError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case LookupError_MALFORMED_PATH:{
            if(!name.isEmpty())
                js[name] = "malformed_path";
            if(!m_malformed_path.isEmpty())
                js["malformed_path"] = m_malformed_path;
        }break;
        case LookupError_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "not_found";
        }break;
        case LookupError_NOT_FILE:{
            if(!name.isEmpty())
                js[name] = "not_file";
        }break;
        case LookupError_NOT_FOLDER:{
            if(!name.isEmpty())
                js[name] = "not_folder";
        }break;
        case LookupError_RESTRICTED_CONTENT:{
            if(!name.isEmpty())
                js[name] = "restricted_content";
        }break;
        case LookupError_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void LookupError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("malformed_path") == 0){
        m_tag = LookupError_MALFORMED_PATH;
    }
    if(s.compare("not_found") == 0){
        m_tag = LookupError_NOT_FOUND;
    }
    if(s.compare("not_file") == 0){
        m_tag = LookupError_NOT_FILE;
    }
    if(s.compare("not_folder") == 0){
        m_tag = LookupError_NOT_FOLDER;
    }
    if(s.compare("restricted_content") == 0){
        m_tag = LookupError_RESTRICTED_CONTENT;
    }
    if(s.compare("other") == 0){
        m_tag = LookupError_OTHER;
    }
}

QString LookupError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "LookupError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
LookupError LookupError::EXAMPLE(){
    LookupError rv;
    rv.malformed_path = "test1value";
    rv.m_tag = LookupError_MALFORMED_PATH;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt