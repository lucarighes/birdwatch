#ifndef org_apache_lucene_codecs_compressing_FieldsIndexWriter_H
#define org_apache_lucene_codecs_compressing_FieldsIndexWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace compressing {

          class FieldsIndexWriter : public ::java::lang::Object {
           public:
            enum {
              mid_close_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldsIndexWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldsIndexWriter(const FieldsIndexWriter& obj) : ::java::lang::Object(obj) {}

            void close() const;
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
      namespace codecs {
        namespace compressing {
          extern PyType_Def PY_TYPE_DEF(FieldsIndexWriter);
          extern PyTypeObject *PY_TYPE(FieldsIndexWriter);

          class t_FieldsIndexWriter {
          public:
            PyObject_HEAD
            FieldsIndexWriter object;
            static PyObject *wrap_Object(const FieldsIndexWriter&);
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
