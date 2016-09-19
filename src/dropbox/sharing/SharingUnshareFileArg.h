/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace sharing{
    class UnshareFileArg{
        /**
            Arguments for :meth:`unshare_file`.

            field: file: The file to unshare.
        */

    public:
        UnshareFileArg(){};

        UnshareFileArg(const QString& arg){ m_file = arg; };

    public:
        ///The file to unshare.
        QString file()const{return m_file;};
        const UnshareFileArg& setFile(const QString& arg){m_file=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static UnshareFileArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The file to unshare.
        QString m_file;

    };//UnshareFileArg

}//sharing
}//dropboxQt
