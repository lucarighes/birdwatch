#ifndef org_apache_lucene_codecs_FieldsProducer_H
#define org_apache_lucene_codecs_FieldsProducer_H

#include "org/apache/lucene/index/Fields.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace codecs {
        class FieldsProducer;
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

        class FieldsProducer : public ::org::apache::lucene::index::Fields {
         public:
          enum {
            mid_checkIntegrity_f2cc1bce94666404,
            mid_close_f2cc1bce94666404,
            mid_getMergeInstance_573c1a94549f7937,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldsProducer(jobject obj) : ::org::apache::lucene::index::Fields(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldsProducer(const FieldsProducer& obj) : ::org::apache::lucene::index::Fields(obj) {}

          void checkIntegrity() const;
          void close() const;
          FieldsProducer getMergeInstance() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldsProducer);
        extern PyTypeObject *PY_TYPE(FieldsProducer);

        class t_FieldsProducer {
        public:
          PyObject_HEAD
          FieldsProducer object;
          static PyObject *wrap_Object(const FieldsProducer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
