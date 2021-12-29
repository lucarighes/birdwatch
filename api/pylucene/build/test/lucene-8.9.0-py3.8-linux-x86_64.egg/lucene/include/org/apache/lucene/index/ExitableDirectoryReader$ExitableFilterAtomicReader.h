#ifndef org_apache_lucene_index_ExitableDirectoryReader$ExitableFilterAtomicReader_H
#define org_apache_lucene_index_ExitableDirectoryReader$ExitableFilterAtomicReader_H

#include "org/apache/lucene/index/FilterLeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class PointValues;
        class SortedNumericDocValues;
        class BinaryDocValues;
        class SortedSetDocValues;
        class LeafReader;
        class QueryTimeout;
        class NumericDocValues;
        class IndexReader$CacheHelper;
        class SortedDocValues;
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
      namespace index {

        class ExitableDirectoryReader$ExitableFilterAtomicReader : public ::org::apache::lucene::index::FilterLeafReader {
         public:
          enum {
            mid_init$_60a07676f959d30a,
            mid_getBinaryDocValues_6cf59c3533d4df22,
            mid_getCoreCacheHelper_a64c414fea9a8cf6,
            mid_getNumericDocValues_2b2c87c24a70ef49,
            mid_getPointValues_72b990dbae0eea09,
            mid_getReaderCacheHelper_a64c414fea9a8cf6,
            mid_getSortedDocValues_adb16e9c5e3d9604,
            mid_getSortedNumericDocValues_25e77b19828c4dfa,
            mid_getSortedSetDocValues_379820f082b251eb,
            mid_terms_3976802ad88273cd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExitableDirectoryReader$ExitableFilterAtomicReader(jobject obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExitableDirectoryReader$ExitableFilterAtomicReader(const ExitableDirectoryReader$ExitableFilterAtomicReader& obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {}

          ExitableDirectoryReader$ExitableFilterAtomicReader(const ::org::apache::lucene::index::LeafReader &, const ::org::apache::lucene::index::QueryTimeout &);

          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(ExitableDirectoryReader$ExitableFilterAtomicReader);
        extern PyTypeObject *PY_TYPE(ExitableDirectoryReader$ExitableFilterAtomicReader);

        class t_ExitableDirectoryReader$ExitableFilterAtomicReader {
        public:
          PyObject_HEAD
          ExitableDirectoryReader$ExitableFilterAtomicReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ExitableDirectoryReader$ExitableFilterAtomicReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableFilterAtomicReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableFilterAtomicReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
