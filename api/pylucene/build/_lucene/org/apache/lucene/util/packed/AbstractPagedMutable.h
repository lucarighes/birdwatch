#ifndef org_apache_lucene_util_packed_AbstractPagedMutable_H
#define org_apache_lucene_util_packed_AbstractPagedMutable_H

#include "org/apache/lucene/util/LongValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class AbstractPagedMutable;
        }
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class AbstractPagedMutable : public ::org::apache::lucene::util::LongValues {
           public:
            enum {
              mid_get_d711eecdc469624a,
              mid_grow_80a4e5c341ee4933,
              mid_grow_84e4575b465a4b39,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_resize_84e4575b465a4b39,
              mid_set_0248b6e53dc27ea3,
              mid_size_2e5ae9edcb9b072f,
              mid_toString_db9b55ba01e03e4b,
              mid_baseRamBytesUsed_2e5ae9edcb9b072f,
              mid_newMutable_15c7bed2e0f3a021,
              mid_fillPages_f2cc1bce94666404,
              mid_newUnfilledCopy_84e4575b465a4b39,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractPagedMutable(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractPagedMutable(const AbstractPagedMutable& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            jlong get(jlong) const;
            AbstractPagedMutable grow() const;
            AbstractPagedMutable grow(jlong) const;
            jlong ramBytesUsed() const;
            AbstractPagedMutable resize(jlong) const;
            void set(jlong, jlong) const;
            jlong size() const;
            ::java::lang::String toString() const;
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(AbstractPagedMutable);
          extern PyTypeObject *PY_TYPE(AbstractPagedMutable);

          class t_AbstractPagedMutable {
          public:
            PyObject_HEAD
            AbstractPagedMutable object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractPagedMutable *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractPagedMutable&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractPagedMutable&, PyTypeObject *);
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
