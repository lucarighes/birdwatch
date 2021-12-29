#ifndef org_apache_lucene_codecs_FieldsConsumer_H
#define org_apache_lucene_codecs_FieldsConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Fields;
        class MergeState;
      }
      namespace codecs {
        class NormsProducer;
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

        class FieldsConsumer : public ::java::lang::Object {
         public:
          enum {
            mid_close_f2cc1bce94666404,
            mid_merge_642801caeb837493,
            mid_write_a02f5612a398fd43,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldsConsumer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldsConsumer(const FieldsConsumer& obj) : ::java::lang::Object(obj) {}

          void close() const;
          void merge(const ::org::apache::lucene::index::MergeState &, const ::org::apache::lucene::codecs::NormsProducer &) const;
          void write(const ::org::apache::lucene::index::Fields &, const ::org::apache::lucene::codecs::NormsProducer &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldsConsumer);
        extern PyTypeObject *PY_TYPE(FieldsConsumer);

        class t_FieldsConsumer {
        public:
          PyObject_HEAD
          FieldsConsumer object;
          static PyObject *wrap_Object(const FieldsConsumer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
