#ifndef org_apache_lucene_index_ExitableDirectoryReader$ExitableTermsEnum_H
#define org_apache_lucene_index_ExitableDirectoryReader$ExitableTermsEnum_H

#include "org/apache/lucene/index/FilterLeafReader$FilterTermsEnum.h"

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
      namespace index {
        class LeafReader;
        class QueryTimeout;
        class TermsEnum;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ExitableDirectoryReader$ExitableTermsEnum : public ::org::apache::lucene::index::FilterLeafReader$FilterTermsEnum {
         public:
          enum {
            mid_init$_c21b7e818b8cfdd6,
            mid_next_7af2ea2e37ce82b8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExitableDirectoryReader$ExitableTermsEnum(jobject obj) : ::org::apache::lucene::index::FilterLeafReader$FilterTermsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExitableDirectoryReader$ExitableTermsEnum(const ExitableDirectoryReader$ExitableTermsEnum& obj) : ::org::apache::lucene::index::FilterLeafReader$FilterTermsEnum(obj) {}

          ExitableDirectoryReader$ExitableTermsEnum(const ::org::apache::lucene::index::TermsEnum &, const ::org::apache::lucene::index::QueryTimeout &);

          ::org::apache::lucene::util::BytesRef next() const;
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
        extern PyType_Def PY_TYPE_DEF(ExitableDirectoryReader$ExitableTermsEnum);
        extern PyTypeObject *PY_TYPE(ExitableDirectoryReader$ExitableTermsEnum);

        class t_ExitableDirectoryReader$ExitableTermsEnum {
        public:
          PyObject_HEAD
          ExitableDirectoryReader$ExitableTermsEnum object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ExitableDirectoryReader$ExitableTermsEnum *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableTermsEnum&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
