/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team/TeamBaseDfbReport.h"
#include "dropbox/team/TeamStorageBucket.h"

namespace dropboxQt{
namespace team{
    class GetStorageReport : public BaseDfbReport{
        /**
            Storage Report Result. Each of the items in the storage report is an
            array of values, one value per day. If there is no data for a day,
            then the value will be None.

            field: total_usage: Sum of the shared, unshared, and datastore
                usages, for each day.
            field: shared_usage: Array of the combined size (bytes) of team
                members' shared folders, for each day.
            field: unshared_usage: Array of the combined size (bytes) of team
                members' root namespaces, for each day.
            field: shared_folders: Array of the number of shared folders owned
                by team members, for each day.
            field: member_storage_map: Array of storage summaries of team
                members' account sizes. Each storage summary is an array of key,
                value pairs, where each pair describes a storage bucket. The key
                indicates the upper bound of the bucket and the value is the
                number of users in that bucket. There is one such summary per
                day. If there is no data for a day, the storage summary will be
                empty.
        */

    public:
        GetStorageReport(){};

        GetStorageReport(const std::list <int>&& arg){ m_total_usage = arg; };

    public:
        ///Sum of the shared, unshared, and datastore usages, for each day.
        const std::list <int>& totalUsage()const{return m_total_usage;};
        const GetStorageReport& setTotalusage(const std::list <int>&& arg){m_total_usage=arg; return *this;};

        ///Array of the combined size (bytes) of team members' shared folders, for each day.
        const std::list <int>& sharedUsage()const{return m_shared_usage;};
        const GetStorageReport& setSharedusage(const std::list <int>&& arg){m_shared_usage=arg; return *this;};

        ///Array of the combined size (bytes) of team members' root namespaces, for each day.
        const std::list <int>& unsharedUsage()const{return m_unshared_usage;};
        const GetStorageReport& setUnsharedusage(const std::list <int>&& arg){m_unshared_usage=arg; return *this;};

        ///Array of the number of shared folders owned by team members, for each day.
        const std::list <int>& sharedFolders()const{return m_shared_folders;};
        const GetStorageReport& setSharedfolders(const std::list <int>&& arg){m_shared_folders=arg; return *this;};

        ///Array of storage summaries of team members' account sizes. Each storage summary is an array of key, value pairs, where each pair describes a storage bucket. The key indicates the upper bound of the bucket and the value is the number of users in that bucket. There is one such summary per day. If there is no data for a day, the storage summary will be empty.
        const std::list <std::list <StorageBucket>>& memberStorageMap()const{return m_member_storage_map;};
        const GetStorageReport& setMemberstoragemap(const std::list <std::list <StorageBucket>>&& arg){m_member_storage_map=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetStorageReport EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Sum of the shared, unshared, and datastore usages, for each day.
        std::list <int> m_total_usage;

        ///Array of the combined size (bytes) of team members' shared folders, for each day.
        std::list <int> m_shared_usage;

        ///Array of the combined size (bytes) of team members' root namespaces, for each day.
        std::list <int> m_unshared_usage;

        ///Array of the number of shared folders owned by team members, for each day.
        std::list <int> m_shared_folders;

        ///Array of storage summaries of team members' account sizes. Each storage summary is an array of key, value pairs, where each pair describes a storage bucket. The key indicates the upper bound of the bucket and the value is the number of users in that bucket. There is one such summary per day. If there is no data for a day, the storage summary will be empty.
        std::list <std::list <StorageBucket>> m_member_storage_map;

    };//GetStorageReport

}//team
}//dropboxQt
