#ifndef org_apache_lucene_util_fst_IntsRefFSTEnum_H
#define org_apache_lucene_util_fst_IntsRefFSTEnum_H

#include "org/apache/lucene/util/fst/FSTEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        namespace fst {
          class FST;
          class IntsRefFSTEnum$InputOutput;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

          class IntsRefFSTEnum : public ::org::apache::lucene::util::fst::FSTEnum {
           public:
            enum {
              mid_init$_1ee434f3c8d3152a,
              mid_current_cfd1aef7dd51ca16,
              mid_next_cfd1aef7dd51ca16,
              mid_seekCeil_c630939200781060,
              mid_seekExact_c630939200781060,
              mid_seekFloor_c630939200781060,
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

            explicit IntsRefFSTEnum(jobject obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntsRefFSTEnum(const IntsRefFSTEnum& obj) : ::org::apache::lucene::util::fst::FSTEnum(obj) {}

            IntsRefFSTEnum(const ::org::apache::lucene::util::fst::FST &);

            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput current() const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput next() const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput seekCeil(const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput seekExact(const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::fst::IntsRefFSTEnum$InputOutput seekFloor(const ::org::apache::lucene::util::IntsRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(IntsRefFSTEnum);
          extern PyTypeObject *PY_TYPE(IntsRefFSTEnum);

          class t_IntsRefFSTEnum {
          public:
            PyObject_HEAD
            IntsRefFSTEnum object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntsRefFSTEnum *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntsRefFSTEnum&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntsRefFSTEnum&, PyTypeObject *);
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
