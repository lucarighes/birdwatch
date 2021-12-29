#ifndef org_apache_lucene_util_fst_NoOutputs_H
#define org_apache_lucene_util_fst_NoOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class NoOutputs;
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
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class NoOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_128a89bbc17a8b69,
              mid_common_128a89bbc17a8b69,
              mid_getNoOutput_d6bcd06f3102c4d9,
              mid_getSingleton_aaca991e153677f6,
              mid_merge_128a89bbc17a8b69,
              mid_outputToString_8f886c83a83356f0,
              mid_ramBytesUsed_c602cc71de3e942a,
              mid_read_bd77d49f2c2d164c,
              mid_subtract_128a89bbc17a8b69,
              mid_toString_db9b55ba01e03e4b,
              mid_write_9939db8d7cac4f68,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NoOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NoOutputs(const NoOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::java::lang::Object add(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object common(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object getNoOutput() const;
            static NoOutputs getSingleton();
            ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::java::lang::Object &) const;
            jlong ramBytesUsed(const ::java::lang::Object &) const;
            ::java::lang::Object read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Object subtract(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String toString() const;
            void write(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(NoOutputs);
          extern PyTypeObject *PY_TYPE(NoOutputs);

          class t_NoOutputs {
          public:
            PyObject_HEAD
            NoOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_NoOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NoOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NoOutputs&, PyTypeObject *);
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
