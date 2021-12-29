#ifndef org_apache_lucene_search_BulkScorer_H
#define org_apache_lucene_search_BulkScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace search {
        class LeafCollector;
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

        class BulkScorer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_cost_2e5ae9edcb9b072f,
            mid_score_bbfd0c611bb5ebb7,
            mid_score_aa5aa19eac27f402,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BulkScorer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BulkScorer(const BulkScorer& obj) : ::java::lang::Object(obj) {}

          BulkScorer();

          jlong cost() const;
          void score(const ::org::apache::lucene::search::LeafCollector &, const ::org::apache::lucene::util::Bits &) const;
          jint score(const ::org::apache::lucene::search::LeafCollector &, const ::org::apache::lucene::util::Bits &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(BulkScorer);
        extern PyTypeObject *PY_TYPE(BulkScorer);

        class t_BulkScorer {
        public:
          PyObject_HEAD
          BulkScorer object;
          static PyObject *wrap_Object(const BulkScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
