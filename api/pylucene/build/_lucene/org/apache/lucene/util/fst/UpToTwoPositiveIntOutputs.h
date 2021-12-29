#ifndef org_apache_lucene_util_fst_UpToTwoPositiveIntOutputs_H
#define org_apache_lucene_util_fst_UpToTwoPositiveIntOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class UpToTwoPositiveIntOutputs;
          class UpToTwoPositiveIntOutputs$TwoLongs;
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
    class Object;
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

          class UpToTwoPositiveIntOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_128a89bbc17a8b69,
              mid_common_b59138a749119a20,
              mid_get_cf9cb5744f7372e6,
              mid_get_91b836b5eca98f5a,
              mid_getNoOutput_d6bcd06f3102c4d9,
              mid_getSingleton_7d1ac34dc0fd3834,
              mid_merge_128a89bbc17a8b69,
              mid_outputToString_8f886c83a83356f0,
              mid_ramBytesUsed_c602cc71de3e942a,
              mid_read_bd77d49f2c2d164c,
              mid_subtract_b59138a749119a20,
              mid_write_9939db8d7cac4f68,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UpToTwoPositiveIntOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UpToTwoPositiveIntOutputs(const UpToTwoPositiveIntOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::java::lang::Object add(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Long common(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Long get(jlong) const;
            ::org::apache::lucene::util::fst::UpToTwoPositiveIntOutputs$TwoLongs get(jlong, jlong) const;
            ::java::lang::Object getNoOutput() const;
            static UpToTwoPositiveIntOutputs getSingleton(jboolean);
            ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::java::lang::Object &) const;
            jlong ramBytesUsed(const ::java::lang::Object &) const;
            ::java::lang::Object read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Long subtract(const ::java::lang::Object &, const ::java::lang::Object &) const;
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
          extern PyType_Def PY_TYPE_DEF(UpToTwoPositiveIntOutputs);
          extern PyTypeObject *PY_TYPE(UpToTwoPositiveIntOutputs);

          class t_UpToTwoPositiveIntOutputs {
          public:
            PyObject_HEAD
            UpToTwoPositiveIntOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_UpToTwoPositiveIntOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const UpToTwoPositiveIntOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const UpToTwoPositiveIntOutputs&, PyTypeObject *);
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
