#ifndef org_apache_lucene_index_ImpactsEnum_H
#define org_apache_lucene_index_ImpactsEnum_H

#include "org/apache/lucene/index/PostingsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class ImpactsSource;
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
      namespace index {

        class ImpactsEnum : public ::org::apache::lucene::index::PostingsEnum {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ImpactsEnum(jobject obj) : ::org::apache::lucene::index::PostingsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ImpactsEnum(const ImpactsEnum& obj) : ::org::apache::lucene::index::PostingsEnum(obj) {}
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(ImpactsEnum);
        extern PyTypeObject *PY_TYPE(ImpactsEnum);

        class t_ImpactsEnum {
        public:
          PyObject_HEAD
          ImpactsEnum object;
          static PyObject *wrap_Object(const ImpactsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
