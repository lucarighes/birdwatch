#ifndef org_apache_lucene_util_fst_FST$Arc_H
#define org_apache_lucene_util_fst_FST$Arc_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$Arc;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class FST$Arc : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_arcIdx_9972fcc56b44e79d,
              mid_bytesPerArc_9972fcc56b44e79d,
              mid_copyFrom_bfd8ca0b4a5c83d7,
              mid_flags_871cd52a74f26213,
              mid_isFinal_8454bd5aa23fd11e,
              mid_isLast_8454bd5aa23fd11e,
              mid_label_9972fcc56b44e79d,
              mid_nextFinalOutput_d6bcd06f3102c4d9,
              mid_nodeFlags_871cd52a74f26213,
              mid_numArcs_9972fcc56b44e79d,
              mid_output_d6bcd06f3102c4d9,
              mid_posArcsStart_2e5ae9edcb9b072f,
              mid_target_2e5ae9edcb9b072f,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FST$Arc(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FST$Arc(const FST$Arc& obj) : ::java::lang::Object(obj) {}

            FST$Arc();

            jint arcIdx() const;
            jint bytesPerArc() const;
            FST$Arc copyFrom(const FST$Arc &) const;
            jbyte flags() const;
            jboolean isFinal() const;
            jboolean isLast() const;
            jint label() const;
            ::java::lang::Object nextFinalOutput() const;
            jbyte nodeFlags() const;
            jint numArcs() const;
            ::java::lang::Object output() const;
            jlong posArcsStart() const;
            jlong target() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(FST$Arc);
          extern PyTypeObject *PY_TYPE(FST$Arc);

          class t_FST$Arc {
          public:
            PyObject_HEAD
            FST$Arc object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FST$Arc *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FST$Arc&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FST$Arc&, PyTypeObject *);
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
