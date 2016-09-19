/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#pragma once

#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/async/AsyncPollResultBase.h"
#include "dropbox/files/FilesUploadSessionFinishBatchResult.h"

namespace dropboxQt{
namespace files{
    class UploadSessionFinishBatchJobStatus{
        /**
            field: complete: The :meth:`upload_session_finish_batch` has
                finished.
        */
    public:
        enum Tag{

		/*The asynchronous job is still in progress.*/
		PollResultBase_IN_PROGRESS,
		/*The :route:`upload_session/finish_batch` has finished.*/
		UploadSessionFinishBatchJobStatus_COMPLETE
        };

        UploadSessionFinishBatchJobStatus(){}
        UploadSessionFinishBatchJobStatus(Tag v):m_tag(v){}

        Tag tag()const{return m_tag;}
        ///The :route:`upload_session/finish_batch` has finished.
        UploadSessionFinishBatchResult getComplete()const{DBOX_CHECK_STATE((UploadSessionFinishBatchJobStatus_COMPLETE == m_tag), "expected tag: UploadSessionFinishBatchJobStatus_COMPLETE", m_tag);return m_complete;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js, QString name)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UploadSessionFinishBatchJobStatus EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        Tag m_tag;
        UploadSessionFinishBatchResult m_complete;
    };//UploadSessionFinishBatchJobStatus

}//files
}//dropboxQt
