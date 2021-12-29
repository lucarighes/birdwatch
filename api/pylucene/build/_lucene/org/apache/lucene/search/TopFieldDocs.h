#ifndef org_apache_lucene_search_TopFieldDocs_H
#define org_apache_lucene_search_TopFieldDocs_H

#include "org/apache/lucene/search/TopDocs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreDoc;
        class SortField;
        class TotalHits;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopFieldDocs : public ::org::apache::lucene::search::TopDocs {
         public:
          enum {
            mid_init$_12700828c889b8d2,
            max_mid
          };

          enum {
            fid_fields,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopFieldDocs(jobject obj) : ::org::apache::lucene::search::TopDocs(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopFieldDocs(const TopFieldDocs& obj) : ::org::apache::lucene::search::TopDocs(obj) {}

          JArray< ::org::apache::lucene::search::SortField > _get_fields() const;
          void _set_fields(const JArray< ::org::apache::lucene::search::SortField > &) const;

          TopFieldDocs(const ::org::apache::lucene::search::TotalHits &, const JArray< ::org::apache::lucene::search::ScoreDoc > &, const JArray< ::org::apache::lucene::search::SortField > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TopFieldDocs);
        extern PyTypeObject *PY_TYPE(TopFieldDocs);

        class t_TopFieldDocs {
        public:
          PyObject_HEAD
          TopFieldDocs object;
          static PyObject *wrap_Object(const TopFieldDocs&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
