/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamGroupSelector.h"
#include "dropbox/team/TeamGroupSelector.h"
#include "dropbox/team/TeamUsersSelectorArg.h"
#include "dropbox/team/TeamUsersSelectorArg.h"

namespace dropboxQt{
namespace team{
    class GroupMembersSelector{
        /**
            Argument for selecting a group and a list of users.

            field: group: Specify a group.
            field: users: A list of users that are members of ``group``.
        */

    public:
        GroupMembersSelector(){};

        GroupMembersSelector(const GroupSelector& arg){ m_group = arg; };

    public:
        ///Specify a group.
        GroupSelector group()const{return m_group;};
        const GroupMembersSelector& setGroup(const GroupSelector& arg){m_group=arg; return *this;};

        ///A list of users that are members of :field:`group`.
        UsersSelectorArg users()const{return m_users;};
        const GroupMembersSelector& setUsers(const UsersSelectorArg& arg){m_users=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupMembersSelector EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Specify a group.
        GroupSelector m_group;

        ///A list of users that are members of :field:`group`.
        UsersSelectorArg m_users;

    };//GroupMembersSelector

}//team
}//dropboxQt
