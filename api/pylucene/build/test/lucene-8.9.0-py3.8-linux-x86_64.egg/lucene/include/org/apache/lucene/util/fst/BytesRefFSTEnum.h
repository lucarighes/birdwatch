#ifndef org_apache_lucene_util_fst_BytesRefFSTEnum_H
#define org_apache_lucene_util_fst_BytesRefFSTEnum_H

#include "org/apache/lucene/util/fst/FSTEnum.h"

namespace java {
  namespace lang {
    class Class;
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
          class BytesRefFSTEnum$InputOutput;
          class FST;
        }
        class BytesRef;
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

          class BytesRefFSTEnum : public ::org::apache::lucene::util::fst::FSTEnum {
           public:
            enum {
              mid_init$_1ee434f3c8d3152a,
              mid_current_b1ac188d30ea2934,
              mid_next_b1ac188d30ea2934,
              mid_seekCeil_f6943ba8c2db2c19,
              mid_seekExact_f6943ba8c2db2c19,
              mid_seekFloor_f6943ba8c2db2c19,
              mid_setCurrentLabel_040c4cd0390c5aff,
              mid_getCurrentLabel_9972fcc56b44e79d,
              mid_getTargetLabel_9972fcc56b44e79d,
              mid_grow_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BytesRefFSTEnum(jobject obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BytesRefFSTEnum(const BytesRefFSTEnum& obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {}

            BytesRefFSTEnum(const ::org::apache::lucene::util::fst::FST &);

            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput current() const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput next() const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::fst::BytesRefFSTEnum$InputOutput seekFloor(const ::org::apache::lucene::util::BytesRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(BytesRefFSTEnum);
          extern PyTypeObject *PY_TYPE(BytesRefFSTEnum);

          class t_BytesRefFSTEnum {
          public:
            PyObject_HEAD
            BytesRefFSTEnum object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_BytesRefFSTEnum *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const BytesRefFSTEnum&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const BytesRefFSTEnum&, PyTypeObject *);
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
