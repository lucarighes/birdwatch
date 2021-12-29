#ifndef org_apache_lucene_util_fst_ByteSequenceOutputs_H
#define org_apache_lucene_util_fst_ByteSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class ByteSequenceOutputs;
        }
        class BytesRef;
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

          class ByteSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_3b1869bcd9268245,
              mid_common_3b1869bcd9268245,
              mid_getNoOutput_7af2ea2e37ce82b8,
              mid_getSingleton_d0df74ff84295d24,
              mid_outputToString_2b6942d1baf39302,
              mid_ramBytesUsed_6f6ee5bba7f22d4c,
              mid_read_7e2b7f8d071430cf,
              mid_skipOutput_be8da68faa81682c,
              mid_subtract_3b1869bcd9268245,
              mid_toString_db9b55ba01e03e4b,
              mid_write_a1a1d144eae6beb1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ByteSequenceOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ByteSequenceOutputs(const ByteSequenceOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::org::apache::lucene::util::BytesRef add(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef common(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef getNoOutput() const;
            static ByteSequenceOutputs getSingleton();
            ::java::lang::String outputToString(const ::org::apache::lucene::util::BytesRef &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::BytesRef subtract(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            ::java::lang::String toString() const;
            void write(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(ByteSequenceOutputs);
          extern PyTypeObject *PY_TYPE(ByteSequenceOutputs);

          class t_ByteSequenceOutputs {
          public:
            PyObject_HEAD
            ByteSequenceOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ByteSequenceOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ByteSequenceOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ByteSequenceOutputs&, PyTypeObject *);
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
