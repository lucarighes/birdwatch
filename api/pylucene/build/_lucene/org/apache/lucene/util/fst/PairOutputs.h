#ifndef org_apache_lucene_util_fst_PairOutputs_H
#define org_apache_lucene_util_fst_PairOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class PairOutputs$Pair;
        }
      }
      namespace store {
        class DataOutput;
        class DataInput;
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

          class PairOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_init$_5f96e338a4fa75e6,
              mid_add_50ad5ecdcd1a2e61,
              mid_common_50ad5ecdcd1a2e61,
              mid_getNoOutput_64341ee2fa4b0034,
              mid_newPair_6b46d5b4309ea1ca,
              mid_outputToString_8223744c3559b348,
              mid_ramBytesUsed_903d65b2a4a9d6a8,
              mid_read_698be66946d41810,
              mid_skipOutput_be8da68faa81682c,
              mid_subtract_50ad5ecdcd1a2e61,
              mid_toString_db9b55ba01e03e4b,
              mid_write_796f606ff5189284,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PairOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PairOutputs(const PairOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            PairOutputs(const ::org::apache::lucene::util::fst::Outputs &, const ::org::apache::lucene::util::fst::Outputs &);

            ::org::apache::lucene::util::fst::PairOutputs$Pair add(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair common(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair getNoOutput() const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair newPair(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair subtract(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::java::lang::String toString() const;
            void write(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(PairOutputs);
          extern PyTypeObject *PY_TYPE(PairOutputs);

          class t_PairOutputs {
          public:
            PyObject_HEAD
            PairOutputs object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_PairOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PairOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PairOutputs&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
