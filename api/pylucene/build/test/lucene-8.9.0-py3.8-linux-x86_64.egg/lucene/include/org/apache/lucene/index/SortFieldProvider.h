#ifndef org_apache_lucene_index_SortFieldProvider_H
#define org_apache_lucene_index_SortFieldProvider_H

#include "java/lang/Object.h"

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
      namespace index {
        class SortFieldProvider;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
  namespace util {
    class Set;
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

        class SortFieldProvider : public ::java::lang::Object {
         public:
          enum {
            mid_availableSortFieldProviders_7dcf4034c6d1a92a,
            mid_forName_4d5d914ea854834c,
            mid_getName_db9b55ba01e03e4b,
            mid_readSortField_f5c813112fa668ab,
            mid_reloadSortFieldProviders_98a876e82795b112,
            mid_write_d394f16dc9680504,
            mid_writeSortField_d394f16dc9680504,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortFieldProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortFieldProvider(const SortFieldProvider& obj) : ::java::lang::Object(obj) {}

          static ::java::util::Set availableSortFieldProviders();
          static SortFieldProvider forName(const ::java::lang::String &);
          ::java::lang::String getName() const;
          ::org::apache::lucene::search::SortField readSortField(const ::org::apache::lucene::store::DataInput &) const;
          static void reloadSortFieldProviders(const ::java::lang::ClassLoader &);
          static void write(const ::org::apache::lucene::search::SortField &, const ::org::apache::lucene::store::DataOutput &);
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
      namespace index {
        extern PyType_Def PY_TYPE_DEF(SortFieldProvider);
        extern PyTypeObject *PY_TYPE(SortFieldProvider);

        class t_SortFieldProvider {
        public:
          PyObject_HEAD
          SortFieldProvider object;
          static PyObject *wrap_Object(const SortFieldProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
