#ifndef org_apache_lucene_search_MemoryAccountingBitsetCollector_H
#define org_apache_lucene_search_MemoryAccountingBitsetCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        class CollectorMemoryTracker;
      }
      namespace search {
        class ScoreMode;
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

        class MemoryAccountingBitsetCollector : public ::org::apache::lucene::search::SimpleCollector {
         public:
          enum {
            mid_init$_f902b8b44fc310e5,
            mid_collect_040c4cd0390c5aff,
            mid_scoreMode_8a35254b82ee8276,
            mid_doSetNextReader_8747e0e89febf88d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MemoryAccountingBitsetCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MemoryAccountingBitsetCollector(const MemoryAccountingBitsetCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

          MemoryAccountingBitsetCollector(const ::org::apache::lucene::misc::CollectorMemoryTracker &);

          void collect(jint) const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
        extern PyType_Def PY_TYPE_DEF(MemoryAccountingBitsetCollector);
        extern PyTypeObject *PY_TYPE(MemoryAccountingBitsetCollector);

        class t_MemoryAccountingBitsetCollector {
        public:
          PyObject_HEAD
          MemoryAccountingBitsetCollector object;
          static PyObject *wrap_Object(const MemoryAccountingBitsetCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
