/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class FileAction{
        /**
            Sharing actions that may be taken on files.

            field: edit_contents: Change or edit contents of the file.
            field: invite_viewer: Add a member with view permissions.
            field: invite_viewer_no_comment: Add a member with view permissions
                but no comment permissions.
            field: unshare: Stop sharing this file.
            field: relinquish_membership: Relinquish one's own membership to the
                file.
            field: share_link: This action is deprecated. Use create_link
                instead.
            field: create_link: Create a shared link to the file.
        */
    public:
        enum Tag{

		/*Change or edit contents of the file.*/
		FileAction_EDIT_CONTENTS,
		/*Add a member with view permissions.*/
		FileAction_INVITE_VIEWER,
		/*Add a member with view permissions but no comment permissions.*/
		FileAction_INVITE_VIEWER_NO_COMMENT,
		/*Stop sharing this file.*/
		FileAction_UNSHARE,
		/*Relinquish one's own membership to the file.*/
		FileAction_RELINQUISH_MEMBERSHIP,
		/*This action is deprecated. Use create_link instead.*/
		FileAction_SHARE_LINK,
		/*Create a shared link to the file.*/
		FileAction_CREATE_LINK,
		/*None*/
		FileAction_OTHER
        };

        FileAction(){}
        FileAction(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static FileAction EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//FileAction

}//sharing
}//dropboxQt
