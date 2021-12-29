#ifndef org_apache_lucene_index_IndexSorter$IntSorter_H
#define org_apache_lucene_index_IndexSorter$IntSorter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Integer;
    class String;
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

        class IndexSorter$IntSorter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1f9c919ee1dbc343,
            mid_getComparableProviders_739976833795f559,
            mid_getDocComparator_8d0e93a4e9ab83f9,
            mid_getProviderName_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSorter$IntSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSorter$IntSorter(const IndexSorter$IntSorter& obj) : ::java::lang::Object(obj) {}

          IndexSorter$IntSorter(const ::java::lang::String &, const ::java::lang::Integer &, jboolean, const ::org::apache::lucene::index::IndexSorter$NumericDocValuesProvider &);

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
        extern PyType_Def PY_TYPE_DEF(IndexSorter$IntSorter);
        extern PyTypeObject *PY_TYPE(IndexSorter$IntSorter);

        class t_IndexSorter$IntSorter {
        public:
          PyObject_HEAD
          IndexSorter$IntSorter object;
          static PyObject *wrap_Object(const IndexSorter$IntSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
