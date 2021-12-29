#ifndef org_apache_lucene_search_SortedSetSortField$Provider_H
#define org_apache_lucene_search_SortedSetSortField$Provider_H

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

        class SortedSetSortField$Provider : public ::org::apache::lucene::index::SortFieldProvider {
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

          explicit SortedSetSortField$Provider(jobject obj) : ::org::apache::lucene::index::SortFieldProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedSetSortField$Provider(const SortedSetSortField$Provider& obj) : ::org::apache::lucene::index::SortFieldProvider(obj) {}

          static ::java::lang::String *NAME;

          SortedSetSortField$Provider();

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
        extern PyType_Def PY_TYPE_DEF(SortedSetSortField$Provider);
        extern PyTypeObject *PY_TYPE(SortedSetSortField$Provider);

        class t_SortedSetSortField$Provider {
        public:
          PyObject_HEAD
          SortedSetSortField$Provider object;
          static PyObject *wrap_Object(const SortedSetSortField$Provider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
