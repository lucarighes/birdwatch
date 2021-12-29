#ifndef org_apache_lucene_index_FilterLeafReader$FilterFields_H
#define org_apache_lucene_index_FilterLeafReader$FilterFields_H

#include "org/apache/lucene/index/Fields.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
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

        class FilterLeafReader$FilterFields : public ::org::apache::lucene::index::Fields {
         public:
          enum {
            mid_init$_bcc5cab244539dca,
            mid_iterator_233a192dadb0917d,
            mid_size_9972fcc56b44e79d,
            mid_terms_3976802ad88273cd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterLeafReader$FilterFields(jobject obj) : ::org::apache::lucene::index::Fields(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterLeafReader$FilterFields(const FilterLeafReader$FilterFields& obj) : ::org::apache::lucene::index::Fields(obj) {}

          FilterLeafReader$FilterFields(const ::org::apache::lucene::index::Fields &);

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
        extern PyType_Def PY_TYPE_DEF(FilterLeafReader$FilterFields);
        extern PyTypeObject *PY_TYPE(FilterLeafReader$FilterFields);

        class t_FilterLeafReader$FilterFields {
        public:
          PyObject_HEAD
          FilterLeafReader$FilterFields object;
          static PyObject *wrap_Object(const FilterLeafReader$FilterFields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
