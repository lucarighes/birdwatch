#ifndef org_apache_lucene_search_SearcherLifetimeManager_H
#define org_apache_lucene_search_SearcherLifetimeManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class SearcherLifetimeManager$Pruner;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SearcherLifetimeManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_acquire_4ddd1cd0f21664bc,
            mid_close_f2cc1bce94666404,
            mid_prune_5df8a41a9dfffe39,
            mid_record_60b76aab9334af7a,
            mid_release_9541dcc7c968ac14,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SearcherLifetimeManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SearcherLifetimeManager(const SearcherLifetimeManager& obj) : ::java::lang::Object(obj) {}

          SearcherLifetimeManager();

          ::org::apache::lucene::search::IndexSearcher acquire(jlong) const;
          void close() const;
          void prune(const ::org::apache::lucene::search::SearcherLifetimeManager$Pruner &) const;
          jlong record(const ::org::apache::lucene::search::IndexSearcher &) const;
          void release(const ::org::apache::lucene::search::IndexSearcher &) const;
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
        extern PyType_Def PY_TYPE_DEF(SearcherLifetimeManager);
        extern PyTypeObject *PY_TYPE(SearcherLifetimeManager);

        class t_SearcherLifetimeManager {
        public:
          PyObject_HEAD
          SearcherLifetimeManager object;
          static PyObject *wrap_Object(const SearcherLifetimeManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
