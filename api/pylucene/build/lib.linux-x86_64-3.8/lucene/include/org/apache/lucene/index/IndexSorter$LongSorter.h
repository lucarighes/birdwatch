#ifndef org_apache_lucene_index_IndexSorter$LongSorter_H
#define org_apache_lucene_index_IndexSorter$LongSorter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Long;
    class Class;
    class String;
  }
  namespace util {
    class List;
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
        class IndexSorter;
        class IndexSorter$ComparableProvider;
        class IndexSorter$NumericDocValuesProvider;
        class IndexSorter$DocComparator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexSorter$LongSorter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_14aabb5e3b9bf087,
            mid_getComparableProviders_739976833795f559,
            mid_getDocComparator_8d0e93a4e9ab83f9,
            mid_getProviderName_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSorter$LongSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSorter$LongSorter(const IndexSorter$LongSorter& obj) : ::java::lang::Object(obj) {}

          IndexSorter$LongSorter(const ::java::lang::String &, const ::java::lang::Long &, jboolean, const ::org::apache::lucene::index::IndexSorter$NumericDocValuesProvider &);

          JArray< ::org::apache::lucene::index::IndexSorter$ComparableProvider > getComparableProviders(const ::java::util::List &) const;
          ::org::apache::lucene::index::IndexSorter$DocComparator getDocComparator(const ::org::apache::lucene::index::LeafReader &, jint) const;
          ::java::lang::String getProviderName() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexSorter$LongSorter);
        extern PyTypeObject *PY_TYPE(IndexSorter$LongSorter);

        class t_IndexSorter$LongSorter {
        public:
          PyObject_HEAD
          IndexSorter$LongSorter object;
          static PyObject *wrap_Object(const IndexSorter$LongSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
