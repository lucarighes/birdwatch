#ifndef org_apache_lucene_facet_sortedset_ConcurrentSortedSetDocValuesFacetCounts_H
#define org_apache_lucene_facet_sortedset_ConcurrentSortedSetDocValuesFacetCounts_H

#include "org/apache/lucene/facet/Facets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
        class FacetsCollector;
        namespace sortedset {
          class SortedSetDocValuesReaderState;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Number;
    class Class;
    class String;
    class InterruptedException;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
    }
    class List;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class ConcurrentSortedSetDocValuesFacetCounts : public ::org::apache::lucene::facet::Facets {
           public:
            enum {
              mid_init$_e2d4457686d05726,
              mid_init$_82a44db4bf273579,
              mid_getAllDims_d82aee015ceb4d93,
              mid_getSpecificValue_aaf99af6028dc803,
              mid_getTopChildren_8be156db8a3c742c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConcurrentSortedSetDocValuesFacetCounts(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConcurrentSortedSetDocValuesFacetCounts(const ConcurrentSortedSetDocValuesFacetCounts& obj) : ::org::apache::lucene::facet::Facets(obj) {}

            ConcurrentSortedSetDocValuesFacetCounts(const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &, const ::java::util::concurrent::ExecutorService &);
            ConcurrentSortedSetDocValuesFacetCounts(const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &, const ::org::apache::lucene::facet::FacetsCollector &, const ::java::util::concurrent::ExecutorService &);

            ::java::util::List getAllDims(jint) const;
            ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {
          extern PyType_Def PY_TYPE_DEF(ConcurrentSortedSetDocValuesFacetCounts);
          extern PyTypeObject *PY_TYPE(ConcurrentSortedSetDocValuesFacetCounts);

          class t_ConcurrentSortedSetDocValuesFacetCounts {
          public:
            PyObject_HEAD
            ConcurrentSortedSetDocValuesFacetCounts object;
            static PyObject *wrap_Object(const ConcurrentSortedSetDocValuesFacetCounts&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
