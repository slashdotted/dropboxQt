/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingFileAction.h"

namespace dropboxQt{

namespace sharing{
///FileAction

FileAction::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void FileAction::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case FileAction_EDIT_CONTENTS:{
            if(!name.isEmpty())
                js[name] = "edit_contents";
        }break;
        case FileAction_INVITE_VIEWER:{
            if(!name.isEmpty())
                js[name] = "invite_viewer";
        }break;
        case FileAction_INVITE_VIEWER_NO_COMMENT:{
            if(!name.isEmpty())
                js[name] = "invite_viewer_no_comment";
        }break;
        case FileAction_UNSHARE:{
            if(!name.isEmpty())
                js[name] = "unshare";
        }break;
        case FileAction_RELINQUISH_MEMBERSHIP:{
            if(!name.isEmpty())
                js[name] = "relinquish_membership";
        }break;
        case FileAction_SHARE_LINK:{
            if(!name.isEmpty())
                js[name] = "share_link";
        }break;
        case FileAction_CREATE_LINK:{
            if(!name.isEmpty())
                js[name] = "create_link";
        }break;
        case FileAction_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void FileAction::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("edit_contents") == 0){
        m_tag = FileAction_EDIT_CONTENTS;
    }
    if(s.compare("invite_viewer") == 0){
        m_tag = FileAction_INVITE_VIEWER;
    }
    if(s.compare("invite_viewer_no_comment") == 0){
        m_tag = FileAction_INVITE_VIEWER_NO_COMMENT;
    }
    if(s.compare("unshare") == 0){
        m_tag = FileAction_UNSHARE;
    }
    if(s.compare("relinquish_membership") == 0){
        m_tag = FileAction_RELINQUISH_MEMBERSHIP;
    }
    if(s.compare("share_link") == 0){
        m_tag = FileAction_SHARE_LINK;
    }
    if(s.compare("create_link") == 0){
        m_tag = FileAction_CREATE_LINK;
    }
    if(s.compare("other") == 0){
        m_tag = FileAction_OTHER;
    }
}

QString FileAction::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "FileAction");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FileAction FileAction::EXAMPLE(){
    FileAction rv;
    rv.m_tag = FileAction_EDIT_CONTENTS;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt