#ifndef org_apache_lucene_codecs_NormsProducer_H
#define org_apache_lucene_codecs_NormsProducer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace codecs {
        class NormsProducer;
      }
      namespace index {
        class NumericDocValues;
        class FieldInfo;
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
      namespace codecs {

        class NormsProducer : public ::java::lang::Object {
         public:
          enum {
            mid_checkIntegrity_f2cc1bce94666404,
            mid_getMergeInstance_0502194d89d40c22,
            mid_getNorms_d63b818fc8746ddc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NormsProducer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NormsProducer(const NormsProducer& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          NormsProducer getMergeInstance() const;
          ::org::apache::lucene::index::NumericDocValues getNorms(const ::org::apache::lucene::index::FieldInfo &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(NormsProducer);
        extern PyTypeObject *PY_TYPE(NormsProducer);

        class t_NormsProducer {
        public:
          PyObject_HEAD
          NormsProducer object;
          static PyObject *wrap_Object(const NormsProducer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
