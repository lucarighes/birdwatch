#ifndef org_apache_lucene_search_QueryCachingPolicy_H
#define org_apache_lucene_search_QueryCachingPolicy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class QueryCachingPolicy : public ::java::lang::Object {
         public:
          enum {
            mid_onUse_ede25bb9d48237ac,
            mid_shouldCache_8b8c985512e42a98,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryCachingPolicy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryCachingPolicy(const QueryCachingPolicy& obj) : ::java::lang::Object(obj) {}

          void onUse(const ::org::apache::lucene::search::Query &) const;
          jboolean shouldCache(const ::org::apache::lucene::search::Query &) const;
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
        extern PyType_Def PY_TYPE_DEF(QueryCachingPolicy);
        extern PyTypeObject *PY_TYPE(QueryCachingPolicy);

        class t_QueryCachingPolicy {
        public:
          PyObject_HEAD
          QueryCachingPolicy object;
          static PyObject *wrap_Object(const QueryCachingPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
