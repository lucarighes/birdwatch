#ifndef org_apache_lucene_search_SortField$Provider_H
#define org_apache_lucene_search_SortField$Provider_H

#include "org/apache/lucene/index/SortFieldProvider.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortField;
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
      namespace search {

        class SortField$Provider : public ::org::apache::lucene::index::SortFieldProvider {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_readSortField_f5c813112fa668ab,
            mid_writeSortField_d394f16dc9680504,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortField$Provider(jobject obj) : ::org::apache::lucene::index::SortFieldProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortField$Provider(const SortField$Provider& obj) : ::org::apache::lucene::index::SortFieldProvider(obj) {}

          static ::java::lang::String *NAME;

          SortField$Provider();

          ::org::apache::lucene::search::SortField readSortField(const ::org::apache::lucene::store::DataInput &) const;
          void writeSortField(const ::org::apache::lucene::search::SortField &, const ::org::apache::lucene::store::DataOutput &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(SortField$Provider);
        extern PyTypeObject *PY_TYPE(SortField$Provider);

        class t_SortField$Provider {
        public:
          PyObject_HEAD
          SortField$Provider object;
          static PyObject *wrap_Object(const SortField$Provider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
