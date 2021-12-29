#ifndef org_apache_lucene_search_ScorerSupplier_H
#define org_apache_lucene_search_ScorerSupplier_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer;
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

        class ScorerSupplier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_cost_2e5ae9edcb9b072f,
            mid_get_1e03e1b54e372d29,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ScorerSupplier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ScorerSupplier(const ScorerSupplier& obj) : ::java::lang::Object(obj) {}

          ScorerSupplier();

          jlong cost() const;
          ::org::apache::lucene::search::Scorer get(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(ScorerSupplier);
        extern PyTypeObject *PY_TYPE(ScorerSupplier);

        class t_ScorerSupplier {
        public:
          PyObject_HEAD
          ScorerSupplier object;
          static PyObject *wrap_Object(const ScorerSupplier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
