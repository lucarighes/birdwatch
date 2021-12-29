#ifndef org_apache_lucene_index_MultiFields_H
#define org_apache_lucene_index_MultiFields_H

#include "org/apache/lucene/index/Fields.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class ReaderSlice;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

        class MultiFields : public ::org::apache::lucene::index::Fields {
         public:
          enum {
            mid_init$_a210d123b2a46a50,
            mid_iterator_233a192dadb0917d,
            mid_size_9972fcc56b44e79d,
            mid_terms_3976802ad88273cd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiFields(jobject obj) : ::org::apache::lucene::index::Fields(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiFields(const MultiFields& obj) : ::org::apache::lucene::index::Fields(obj) {}

          MultiFields(const JArray< ::org::apache::lucene::index::Fields > &, const JArray< ::org::apache::lucene::index::ReaderSlice > &);

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
        extern PyType_Def PY_TYPE_DEF(MultiFields);
        extern PyTypeObject *PY_TYPE(MultiFields);

        class t_MultiFields {
        public:
          PyObject_HEAD
          MultiFields object;
          static PyObject *wrap_Object(const MultiFields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
