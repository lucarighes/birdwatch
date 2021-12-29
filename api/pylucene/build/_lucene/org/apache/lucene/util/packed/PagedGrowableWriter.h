#ifndef org_apache_lucene_util_packed_PagedGrowableWriter_H
#define org_apache_lucene_util_packed_PagedGrowableWriter_H

#include "org/apache/lucene/util/packed/AbstractPagedMutable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PagedGrowableWriter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class PagedGrowableWriter : public ::org::apache::lucene::util::packed::AbstractPagedMutable {
           public:
            enum {
              mid_init$_424abb77f7d49b95,
              mid_baseRamBytesUsed_2e5ae9edcb9b072f,
              mid_newMutable_15c7bed2e0f3a021,
              mid_newUnfilledCopy_94a5fb7a24567d40,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PagedGrowableWriter(jobject obj) : ::org::apache::lucene::util::packed::AbstractPagedMutable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PagedGrowableWriter(const PagedGrowableWriter& obj) : ::org::apache::lucene::util::packed::AbstractPagedMutable(obj) {}

            PagedGrowableWriter(jlong, jint, jint, jfloat);
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
          extern PyType_Def PY_TYPE_DEF(PagedGrowableWriter);
          extern PyTypeObject *PY_TYPE(PagedGrowableWriter);

          class t_PagedGrowableWriter {
          public:
            PyObject_HEAD
            PagedGrowableWriter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PagedGrowableWriter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PagedGrowableWriter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PagedGrowableWriter&, PyTypeObject *);
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
