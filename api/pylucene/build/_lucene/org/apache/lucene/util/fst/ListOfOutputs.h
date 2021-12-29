#ifndef org_apache_lucene_util_fst_ListOfOutputs_H
#define org_apache_lucene_util_fst_ListOfOutputs_H

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
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
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

          class ListOfOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_init$_526191276010c0ff,
              mid_add_128a89bbc17a8b69,
              mid_asList_879558f08e80c948,
              mid_common_128a89bbc17a8b69,
              mid_getNoOutput_d6bcd06f3102c4d9,
              mid_merge_128a89bbc17a8b69,
              mid_outputToString_8f886c83a83356f0,
              mid_ramBytesUsed_c602cc71de3e942a,
              mid_read_bd77d49f2c2d164c,
              mid_readFinalOutput_bd77d49f2c2d164c,
              mid_skipFinalOutput_be8da68faa81682c,
              mid_skipOutput_be8da68faa81682c,
              mid_subtract_128a89bbc17a8b69,
              mid_toString_db9b55ba01e03e4b,
              mid_write_9939db8d7cac4f68,
              mid_writeFinalOutput_9939db8d7cac4f68,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ListOfOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ListOfOutputs(const ListOfOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ListOfOutputs(const ::org::apache::lucene::util::fst::Outputs &);

            ::java::lang::Object add(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::util::List asList(const ::java::lang::Object &) const;
            ::java::lang::Object common(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object getNoOutput() const;
            ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::java::lang::Object &) const;
            jlong ramBytesUsed(const ::java::lang::Object &) const;
            ::java::lang::Object read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Object readFinalOutput(const ::org::apache::lucene::store::DataInput &) const;
            void skipFinalOutput(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Object subtract(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String toString() const;
            void write(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
            void writeFinalOutput(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(ListOfOutputs);
          extern PyTypeObject *PY_TYPE(ListOfOutputs);

          class t_ListOfOutputs {
          public:
            PyObject_HEAD
            ListOfOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ListOfOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ListOfOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ListOfOutputs&, PyTypeObject *);
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
