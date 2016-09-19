/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class AclUpdatePolicy{
        /**
            Policy governing who can change a shared folder's access control
            list (ACL). In other words, who can add, remove, or change the
            privileges of members.

            field: owner: Only the owner can update the ACL.
            field: editors: Any editor can update the ACL. This may be further
                restricted to editors on the same team.
        */
    public:
        enum Tag{

		/*Only the owner can update the ACL.*/
		AclUpdatePolicy_OWNER,
		/*Any editor can update the ACL. This may be further restricted to editors on the same team.*/
		AclUpdatePolicy_EDITORS,
		/*None*/
		AclUpdatePolicy_OTHER
        };

        AclUpdatePolicy(){}
        AclUpdatePolicy(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static AclUpdatePolicy EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
    };//AclUpdatePolicy

}//sharing
}//dropboxQt