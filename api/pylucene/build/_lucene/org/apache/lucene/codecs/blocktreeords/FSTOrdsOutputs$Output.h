#ifndef org_apache_lucene_codecs_blocktreeords_FSTOrdsOutputs$Output_H
#define org_apache_lucene_codecs_blocktreeords_FSTOrdsOutputs$Output_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace codecs {
        namespace blocktreeords {
          class FSTOrdsOutputs$Output;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blocktreeords {

          class FSTOrdsOutputs$Output : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3ec8c7dd8c4e12f4,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_bytes,
              fid_endOrd,
              fid_startOrd,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTOrdsOutputs$Output(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTOrdsOutputs$Output(const FSTOrdsOutputs$Output& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::BytesRef _get_bytes() const;
            jlong _get_endOrd() const;
            jlong _get_startOrd() const;

            FSTOrdsOutputs$Output(const ::org::apache::lucene::util::BytesRef &, jlong, jlong);

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
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
      namespace codecs {
        namespace blocktreeords {
          extern PyType_Def PY_TYPE_DEF(FSTOrdsOutputs$Output);
          extern PyTypeObject *PY_TYPE(FSTOrdsOutputs$Output);

          class t_FSTOrdsOutputs$Output {
          public:
            PyObject_HEAD
            FSTOrdsOutputs$Output object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FSTOrdsOutputs$Output *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FSTOrdsOutputs$Output&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FSTOrdsOutputs$Output&, PyTypeObject *);
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
