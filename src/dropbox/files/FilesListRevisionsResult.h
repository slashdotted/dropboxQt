/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/files/FilesFileMetadata.h"

namespace dropboxQt{
namespace files{
    class ListRevisionsResult{
        /**
            field: is_deleted: If the file is deleted.
            field: entries: The revisions for the file. Only non-delete
                revisions will show up here.
        */

    public:
        ListRevisionsResult(){};

        ListRevisionsResult(const bool& arg){ m_is_deleted = arg; };

    public:
        ///If the file is deleted.
        bool isDeleted()const{return m_is_deleted;};

        ///The revisions for the file. Only non-delete revisions will show up here.
        const std::list <FileMetadata>& entries()const{return m_entries;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static ListRevisionsResult EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///If the file is deleted.
        bool m_is_deleted;

        ///The revisions for the file. Only non-delete revisions will show up here.
        std::list <FileMetadata> m_entries;

    };//ListRevisionsResult

}//files
}//dropboxQt
