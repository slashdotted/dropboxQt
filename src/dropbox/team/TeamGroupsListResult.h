/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team_common/TeamCommonGroupSummary.h"

namespace dropboxQt{
namespace team{
    class GroupsListResult{
        /**
            field: cursor: Pass the cursor into :meth:`groups_list_continue` to
                obtain the additional groups.
            field: has_more: Is true if there are additional groups that have
                not been returned yet. An additional call to
                :meth:`groups_list_continue` can retrieve them.
        */

    public:
        GroupsListResult(){};

        GroupsListResult(const std::list <team_common::GroupSummary>&& arg){ m_groups = arg; };

    public:
        ///None
        const std::list <team_common::GroupSummary>& groups()const{return m_groups;};

        ///Pass the cursor into :route:`groups/list/continue` to obtain the additional groups.
        QString cursor()const{return m_cursor;};

        ///Is true if there are additional groups that have not been returned yet. An additional call to :route:`groups/list/continue` can retrieve them.
        bool hasMore()const{return m_has_more;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupsListResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///None
        std::list <team_common::GroupSummary> m_groups;

        ///Pass the cursor into :route:`groups/list/continue` to obtain the additional groups.
        QString m_cursor;

        ///Is true if there are additional groups that have not been returned yet. An additional call to :route:`groups/list/continue` can retrieve them.
        bool m_has_more;

    };//GroupsListResult

}//team
}//dropboxQt
