/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class GetSharedLinksArg{
        /**
            field: path: See :meth:`get_shared_links` description.
        */

    public:
        GetSharedLinksArg(){};

        GetSharedLinksArg(const QString& arg){ m_path = arg; };

    public:
        ///See :route:`get_shared_links` description.
        QString path()const{return m_path;};
        const GetSharedLinksArg& setPath(const QString& arg){m_path=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GetSharedLinksArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///See :route:`get_shared_links` description.
        QString m_path;

    };//GetSharedLinksArg

}//sharing
}//dropboxQt
