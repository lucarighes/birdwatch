#ifndef org_apache_lucene_search_QueryCache_H
#define org_apache_lucene_search_QueryCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryCachingPolicy;
        class Weight;
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

        class QueryCache : public ::java::lang::Object {
         public:
          enum {
            mid_doCache_739d035002ca686c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryCache(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryCache(const QueryCache& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::Weight doCache(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::search::QueryCachingPolicy &) const;
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
        extern PyType_Def PY_TYPE_DEF(QueryCache);
        extern PyTypeObject *PY_TYPE(QueryCache);

        class t_QueryCache {
        public:
          PyObject_HEAD
          QueryCache object;
          static PyObject *wrap_Object(const QueryCache&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
