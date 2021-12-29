#ifndef org_apache_lucene_util_packed_BlockPackedWriter_H
#define org_apache_lucene_util_packed_BlockPackedWriter_H

#include "org/apache/lucene/util/packed/AbstractBlockPackedWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
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
      namespace util {
        namespace packed {

          class BlockPackedWriter : public ::org::apache::lucene::util::packed::AbstractBlockPackedWriter {
           public:
            enum {
              mid_init$_18f961b5c3a68dc0,
              mid_flush_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockPackedWriter(jobject obj) : ::org::apache::lucene::util::packed::AbstractBlockPackedWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockPackedWriter(const BlockPackedWriter& obj) : ::org::apache::lucene::util::packed::AbstractBlockPackedWriter(obj) {}

            BlockPackedWriter(const ::org::apache::lucene::store::DataOutput &, jint);
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
          extern PyType_Def PY_TYPE_DEF(BlockPackedWriter);
          extern PyTypeObject *PY_TYPE(BlockPackedWriter);

          class t_BlockPackedWriter {
          public:
            PyObject_HEAD
            BlockPackedWriter object;
            static PyObject *wrap_Object(const BlockPackedWriter&);
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
