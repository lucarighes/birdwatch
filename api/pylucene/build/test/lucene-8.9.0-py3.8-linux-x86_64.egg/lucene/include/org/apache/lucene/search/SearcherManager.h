#ifndef org_apache_lucene_search_SearcherManager_H
#define org_apache_lucene_search_SearcherManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class IndexWriter;
        class DirectoryReader;
      }
      namespace search {
        class IndexSearcher;
        class SearcherFactory;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SearcherManager : public ::org::apache::lucene::search::ReferenceManager {
         public:
          enum {
            mid_init$_72cbb304e287a58f,
            mid_init$_99a55412860ca47d,
            mid_init$_f89ba7c5992c087c,
            mid_init$_786efabc833066c2,
            mid_getSearcher_ddf47cd7bdd18a7f,
            mid_isSearcherCurrent_8454bd5aa23fd11e,
            mid_refreshIfNeeded_0e5d2009174c9b0f,
            mid_tryIncRef_2b606f72e79146e5,
            mid_decRef_9541dcc7c968ac14,
            mid_getRefCount_2030bbb112a8934d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SearcherManager(jobject obj) : ::org::apache::lucene::search::ReferenceManager(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SearcherManager(const SearcherManager& obj) : ::org::apache::lucene::search::ReferenceManager(obj) {}

          SearcherManager(const ::org::apache::lucene::index::DirectoryReader &, const ::org::apache::lucene::search::SearcherFactory &);
          SearcherManager(const ::org::apache::lucene::index::IndexWriter &, const ::org::apache::lucene::search::SearcherFactory &);
          SearcherManager(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::SearcherFactory &);
          SearcherManager(const ::org::apache::lucene::index::IndexWriter &, jboolean, jboolean, const ::org::apache::lucene::search::SearcherFactory &);

          static ::org::apache::lucene::search::IndexSearcher getSearcher(const ::org::apache::lucene::search::SearcherFactory &, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::index::IndexReader &);
          jboolean isSearcherCurrent() const;
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
        extern PyType_Def PY_TYPE_DEF(SearcherManager);
        extern PyTypeObject *PY_TYPE(SearcherManager);

        class t_SearcherManager {
        public:
          PyObject_HEAD
          SearcherManager object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SearcherManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SearcherManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SearcherManager&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
