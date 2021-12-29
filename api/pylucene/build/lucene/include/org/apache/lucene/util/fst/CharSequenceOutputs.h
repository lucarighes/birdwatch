#ifndef org_apache_lucene_util_fst_CharSequenceOutputs_H
#define org_apache_lucene_util_fst_CharSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class CharsRef;
        namespace fst {
          class CharSequenceOutputs;
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

          class CharSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_4acfefa5305bdebb,
              mid_common_4acfefa5305bdebb,
              mid_getNoOutput_2361d75e15cf20de,
              mid_getSingleton_a25a3882e1ef779b,
              mid_outputToString_230a380e3fdc1ff0,
              mid_ramBytesUsed_21dc85b2cceef762,
              mid_read_a169a51ed2202c9b,
              mid_skipOutput_be8da68faa81682c,
              mid_subtract_4acfefa5305bdebb,
              mid_write_a09c0505c3a9869c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharSequenceOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharSequenceOutputs(const CharSequenceOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::org::apache::lucene::util::CharsRef add(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &) const;
            ::org::apache::lucene::util::CharsRef common(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &) const;
            ::org::apache::lucene::util::CharsRef getNoOutput() const;
            static CharSequenceOutputs getSingleton();
            ::java::lang::String outputToString(const ::org::apache::lucene::util::CharsRef &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::CharsRef &) const;
            ::org::apache::lucene::util::CharsRef read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::CharsRef subtract(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &) const;
            void write(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(CharSequenceOutputs);
          extern PyTypeObject *PY_TYPE(CharSequenceOutputs);

          class t_CharSequenceOutputs {
          public:
            PyObject_HEAD
            CharSequenceOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharSequenceOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharSequenceOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharSequenceOutputs&, PyTypeObject *);
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
