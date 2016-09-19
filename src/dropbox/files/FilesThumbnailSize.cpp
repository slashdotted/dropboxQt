/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesThumbnailSize.h"

namespace dropboxQt{

namespace files{
///ThumbnailSize

ThumbnailSize::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ThumbnailSize::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ThumbnailSize_W32H32:{
            if(!name.isEmpty())
                js[name] = "w32h32";
        }break;
        case ThumbnailSize_W64H64:{
            if(!name.isEmpty())
                js[name] = "w64h64";
        }break;
        case ThumbnailSize_W128H128:{
            if(!name.isEmpty())
                js[name] = "w128h128";
        }break;
        case ThumbnailSize_W640H480:{
            if(!name.isEmpty())
                js[name] = "w640h480";
        }break;
        case ThumbnailSize_W1024H768:{
            if(!name.isEmpty())
                js[name] = "w1024h768";
        }break;
    }//switch
}

void ThumbnailSize::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("w32h32") == 0){
        m_tag = ThumbnailSize_W32H32;
    }
    if(s.compare("w64h64") == 0){
        m_tag = ThumbnailSize_W64H64;
    }
    if(s.compare("w128h128") == 0){
        m_tag = ThumbnailSize_W128H128;
    }
    if(s.compare("w640h480") == 0){
        m_tag = ThumbnailSize_W640H480;
    }
    if(s.compare("w1024h768") == 0){
        m_tag = ThumbnailSize_W1024H768;
    }
}

QString ThumbnailSize::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ThumbnailSize");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ThumbnailSize ThumbnailSize::EXAMPLE(){
    ThumbnailSize rv;
    rv.m_tag = ThumbnailSize_W32H32;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
