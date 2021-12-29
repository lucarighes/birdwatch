#ifndef org_apache_lucene_util_fst_FST$BytesReader_H
#define org_apache_lucene_util_fst_FST$BytesReader_H

#include "org/apache/lucene/store/DataInput.h"

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
        namespace fst {

          class FST$BytesReader : public ::org::apache::lucene::store::DataInput {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_getPosition_2e5ae9edcb9b072f,
              mid_reversed_8454bd5aa23fd11e,
              mid_setPosition_9c778c9bce6694df,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FST$BytesReader(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FST$BytesReader(const FST$BytesReader& obj) : ::org::apache::lucene::store::DataInput(obj) {}

            FST$BytesReader();

            jlong getPosition() const;
            jboolean reversed() const;
            void setPosition(jlong) const;
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
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(FST$BytesReader);
          extern PyTypeObject *PY_TYPE(FST$BytesReader);

          class t_FST$BytesReader {
          public:
            PyObject_HEAD
            FST$BytesReader object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FST$BytesReader *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FST$BytesReader&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FST$BytesReader&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
