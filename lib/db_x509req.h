#include <db_cxx.h>
#include <qstringlist.h>
#include "db_base.h"
#include "pki_x509req.h"

#ifndef DB_X509REQ_H
#define DB_X509REQ_H


class db_x509req: public db_base
{
    public:
	db_x509req(DbEnv *dbe, string DBfile, string DB, QListBox *l);
	pki_base *newPKI();
	QStringList gethasPrivateDesc(db_base *keydb);
};

#endif