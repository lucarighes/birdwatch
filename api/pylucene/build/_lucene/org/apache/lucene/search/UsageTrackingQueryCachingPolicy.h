#ifndef org_apache_lucene_search_UsageTrackingQueryCachingPolicy_H
#define org_apache_lucene_search_UsageTrackingQueryCachingPolicy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryCachingPolicy;
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

        class UsageTrackingQueryCachingPolicy : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_040c4cd0390c5aff,
            mid_onUse_ede25bb9d48237ac,
            mid_shouldCache_8b8c985512e42a98,
            mid_minFrequencyToCache_5621be3d00acce07,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UsageTrackingQueryCachingPolicy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UsageTrackingQueryCachingPolicy(const UsageTrackingQueryCachingPolicy& obj) : ::java::lang::Object(obj) {}

          UsageTrackingQueryCachingPolicy();
          UsageTrackingQueryCachingPolicy(jint);

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
        extern PyType_Def PY_TYPE_DEF(UsageTrackingQueryCachingPolicy);
        extern PyTypeObject *PY_TYPE(UsageTrackingQueryCachingPolicy);

        class t_UsageTrackingQueryCachingPolicy {
        public:
          PyObject_HEAD
          UsageTrackingQueryCachingPolicy object;
          static PyObject *wrap_Object(const UsageTrackingQueryCachingPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
