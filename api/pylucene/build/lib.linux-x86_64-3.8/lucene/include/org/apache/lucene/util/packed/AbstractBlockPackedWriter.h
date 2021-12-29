#ifndef org_apache_lucene_util_packed_AbstractBlockPackedWriter_H
#define org_apache_lucene_util_packed_AbstractBlockPackedWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class AbstractBlockPackedWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_18f961b5c3a68dc0,
              mid_add_9c778c9bce6694df,
              mid_finish_f2cc1bce94666404,
              mid_ord_2e5ae9edcb9b072f,
              mid_reset_ead2c38342037c59,
              mid_writeValues_040c4cd0390c5aff,
              mid_flush_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractBlockPackedWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractBlockPackedWriter(const AbstractBlockPackedWriter& obj) : ::java::lang::Object(obj) {}

            AbstractBlockPackedWriter(const ::org::apache::lucene::store::DataOutput &, jint);

            void add(jlong) const;
            void finish() const;
            jlong ord() const;
            void reset(const ::org::apache::lucene::store::DataOutput &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(AbstractBlockPackedWriter);
          extern PyTypeObject *PY_TYPE(AbstractBlockPackedWriter);

          class t_AbstractBlockPackedWriter {
          public:
            PyObject_HEAD
            AbstractBlockPackedWriter object;
            static PyObject *wrap_Object(const AbstractBlockPackedWriter&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
