#ifndef org_apache_lucene_index_Fields_H
#define org_apache_lucene_index_Fields_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class Fields;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Iterable;
    class String;
  }
  namespace util {
    class Iterator;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class Fields : public ::java::lang::Object {
         public:
          enum {
            mid_iterator_233a192dadb0917d,
            mid_size_9972fcc56b44e79d,
            mid_terms_3976802ad88273cd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Fields(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Fields(const Fields& obj) : ::java::lang::Object(obj) {}

          static JArray< Fields > *EMPTY_ARRAY;

          ::java::util::Iterator iterator() const;
          jint size() const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(Fields);
        extern PyTypeObject *PY_TYPE(Fields);

        class t_Fields {
        public:
          PyObject_HEAD
          Fields object;
          static PyObject *wrap_Object(const Fields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
