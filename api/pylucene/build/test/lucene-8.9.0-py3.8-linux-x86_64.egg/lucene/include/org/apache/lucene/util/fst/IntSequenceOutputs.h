#ifndef org_apache_lucene_util_fst_IntSequenceOutputs_H
#define org_apache_lucene_util_fst_IntSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        namespace fst {
          class IntSequenceOutputs;
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

          class IntSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_2ca81420cf9c2992,
              mid_common_2ca81420cf9c2992,
              mid_getNoOutput_ce9cdfb58d7a482b,
              mid_getSingleton_b08227a4e328fd88,
              mid_outputToString_0d46b4764e42d8a1,
              mid_ramBytesUsed_29f8f8f429676c4c,
              mid_read_026b8975d7228564,
              mid_skipOutput_be8da68faa81682c,
              mid_subtract_2ca81420cf9c2992,
              mid_toString_db9b55ba01e03e4b,
              mid_write_baf98e8590fd9407,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntSequenceOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntSequenceOutputs(const IntSequenceOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::org::apache::lucene::util::IntsRef add(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::IntsRef common(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::IntsRef getNoOutput() const;
            static IntSequenceOutputs getSingleton();
            ::java::lang::String outputToString(const ::org::apache::lucene::util::IntsRef &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::IntsRef read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::IntsRef subtract(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::IntsRef &) const;
            ::java::lang::String toString() const;
            void write(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(IntSequenceOutputs);
          extern PyTypeObject *PY_TYPE(IntSequenceOutputs);

          class t_IntSequenceOutputs {
          public:
            PyObject_HEAD
            IntSequenceOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntSequenceOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntSequenceOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntSequenceOutputs&, PyTypeObject *);
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
