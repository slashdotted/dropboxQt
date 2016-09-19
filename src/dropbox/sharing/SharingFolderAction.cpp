/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingFolderAction.h"

namespace dropboxQt{

namespace sharing{
///FolderAction

FolderAction::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void FolderAction::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case FolderAction_CHANGE_OPTIONS:{
            if(!name.isEmpty())
                js[name] = "change_options";
        }break;
        case FolderAction_EDIT_CONTENTS:{
            if(!name.isEmpty())
                js[name] = "edit_contents";
        }break;
        case FolderAction_INVITE_EDITOR:{
            if(!name.isEmpty())
                js[name] = "invite_editor";
        }break;
        case FolderAction_INVITE_VIEWER:{
            if(!name.isEmpty())
                js[name] = "invite_viewer";
        }break;
        case FolderAction_INVITE_VIEWER_NO_COMMENT:{
            if(!name.isEmpty())
                js[name] = "invite_viewer_no_comment";
        }break;
        case FolderAction_RELINQUISH_MEMBERSHIP:{
            if(!name.isEmpty())
                js[name] = "relinquish_membership";
        }break;
        case FolderAction_UNMOUNT:{
            if(!name.isEmpty())
                js[name] = "unmount";
        }break;
        case FolderAction_UNSHARE:{
            if(!name.isEmpty())
                js[name] = "unshare";
        }break;
        case FolderAction_LEAVE_A_COPY:{
            if(!name.isEmpty())
                js[name] = "leave_a_copy";
        }break;
        case FolderAction_SHARE_LINK:{
            if(!name.isEmpty())
                js[name] = "share_link";
        }break;
        case FolderAction_CREATE_LINK:{
            if(!name.isEmpty())
                js[name] = "create_link";
        }break;
        case FolderAction_OTHER:{
            if(!name.isEmpty())
                js[name] = "other";
        }break;
    }//switch
}

void FolderAction::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("change_options") == 0){
        m_tag = FolderAction_CHANGE_OPTIONS;
    }
    if(s.compare("edit_contents") == 0){
        m_tag = FolderAction_EDIT_CONTENTS;
    }
    if(s.compare("invite_editor") == 0){
        m_tag = FolderAction_INVITE_EDITOR;
    }
    if(s.compare("invite_viewer") == 0){
        m_tag = FolderAction_INVITE_VIEWER;
    }
    if(s.compare("invite_viewer_no_comment") == 0){
        m_tag = FolderAction_INVITE_VIEWER_NO_COMMENT;
    }
    if(s.compare("relinquish_membership") == 0){
        m_tag = FolderAction_RELINQUISH_MEMBERSHIP;
    }
    if(s.compare("unmount") == 0){
        m_tag = FolderAction_UNMOUNT;
    }
    if(s.compare("unshare") == 0){
        m_tag = FolderAction_UNSHARE;
    }
    if(s.compare("leave_a_copy") == 0){
        m_tag = FolderAction_LEAVE_A_COPY;
    }
    if(s.compare("share_link") == 0){
        m_tag = FolderAction_SHARE_LINK;
    }
    if(s.compare("create_link") == 0){
        m_tag = FolderAction_CREATE_LINK;
    }
    if(s.compare("other") == 0){
        m_tag = FolderAction_OTHER;
    }
}

QString FolderAction::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "FolderAction");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
FolderAction FolderAction::EXAMPLE(){
    FolderAction rv;
    rv.m_tag = FolderAction_CHANGE_OPTIONS;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
