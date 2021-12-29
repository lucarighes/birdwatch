#ifndef org_apache_lucene_facet_sortedset_SortedSetDocValuesFacetCounts_H
#define org_apache_lucene_facet_sortedset_SortedSetDocValuesFacetCounts_H

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
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class SortedSetDocValuesFacetCounts : public ::org::apache::lucene::facet::Facets {
           public:
            enum {
              mid_init$_5e5a16fc770e3bd6,
              mid_init$_be475b04b92443cf,
              mid_getAllDims_d82aee015ceb4d93,
              mid_getSpecificValue_aaf99af6028dc803,
              mid_getTopChildren_8be156db8a3c742c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetDocValuesFacetCounts(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortedSetDocValuesFacetCounts(const SortedSetDocValuesFacetCounts& obj) : ::org::apache::lucene::facet::Facets(obj) {}

            SortedSetDocValuesFacetCounts(const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &);
            SortedSetDocValuesFacetCounts(const ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState &, const ::org::apache::lucene::facet::FacetsCollector &);

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
          extern PyType_Def PY_TYPE_DEF(SortedSetDocValuesFacetCounts);
          extern PyTypeObject *PY_TYPE(SortedSetDocValuesFacetCounts);

          class t_SortedSetDocValuesFacetCounts {
          public:
            PyObject_HEAD
            SortedSetDocValuesFacetCounts object;
            static PyObject *wrap_Object(const SortedSetDocValuesFacetCounts&);
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
