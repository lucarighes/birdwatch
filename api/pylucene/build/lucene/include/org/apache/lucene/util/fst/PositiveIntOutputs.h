#ifndef org_apache_lucene_util_fst_PositiveIntOutputs_H
#define org_apache_lucene_util_fst_PositiveIntOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class PositiveIntOutputs;
        }
      }
      namespace store {
        class DataOutput;
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Long;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class PositiveIntOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_dedd7b48ed1bba08,
              mid_common_dedd7b48ed1bba08,
              mid_getNoOutput_24165e10e82b50a8,
              mid_getSingleton_ed55cf565389ca01,
              mid_outputToString_9aa924d3d1f50bd6,
              mid_ramBytesUsed_d203c0dc0f144d1b,
              mid_read_73ca706a99e97a9e,
              mid_subtract_dedd7b48ed1bba08,
              mid_toString_db9b55ba01e03e4b,
              mid_write_cd8de5cc61d8b077,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PositiveIntOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PositiveIntOutputs(const PositiveIntOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::java::lang::Long add(const ::java::lang::Long &, const ::java::lang::Long &) const;
            ::java::lang::Long common(const ::java::lang::Long &, const ::java::lang::Long &) const;
            ::java::lang::Long getNoOutput() const;
            static PositiveIntOutputs getSingleton();
            ::java::lang::String outputToString(const ::java::lang::Long &) const;
            jlong ramBytesUsed(const ::java::lang::Long &) const;
            ::java::lang::Long read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Long subtract(const ::java::lang::Long &, const ::java::lang::Long &) const;
            ::java::lang::String toString() const;
            void write(const ::java::lang::Long &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(PositiveIntOutputs);
          extern PyTypeObject *PY_TYPE(PositiveIntOutputs);

          class t_PositiveIntOutputs {
          public:
            PyObject_HEAD
            PositiveIntOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PositiveIntOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PositiveIntOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PositiveIntOutputs&, PyTypeObject *);
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
