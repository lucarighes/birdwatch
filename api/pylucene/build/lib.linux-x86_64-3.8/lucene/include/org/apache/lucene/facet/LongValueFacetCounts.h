#ifndef org_apache_lucene_facet_LongValueFacetCounts_H
#define org_apache_lucene_facet_LongValueFacetCounts_H

#include "org/apache/lucene/facet/Facets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
        class FacetsCollector;
      }
      namespace search {
        class LongValuesSource;
      }
      namespace index {
        class IndexReader;
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

        class LongValueFacetCounts : public ::org::apache::lucene::facet::Facets {
         public:
          enum {
            mid_init$_7bd73cf623b05f28,
            mid_init$_d1ea1d003f96bf06,
            mid_init$_872818354d9b2155,
            mid_init$_e565b3e7aa2195c7,
            mid_init$_5859ee87a31a9160,
            mid_getAllChildrenSortByValue_12e6a0c8411f7eef,
            mid_getAllDims_d82aee015ceb4d93,
            mid_getSpecificValue_aaf99af6028dc803,
            mid_getTopChildren_8be156db8a3c742c,
            mid_getTopChildrenSortByCount_7d355569974f274c,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongValueFacetCounts(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongValueFacetCounts(const LongValueFacetCounts& obj) : ::org::apache::lucene::facet::Facets(obj) {}

          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, jboolean);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::index::IndexReader &);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::index::IndexReader &, jboolean);
          LongValueFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, jboolean);

          ::org::apache::lucene::facet::FacetResult getAllChildrenSortByValue() const;
          ::java::util::List getAllDims(jint) const;
          ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::org::apache::lucene::facet::FacetResult getTopChildrenSortByCount(jint) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(LongValueFacetCounts);
        extern PyTypeObject *PY_TYPE(LongValueFacetCounts);

        class t_LongValueFacetCounts {
        public:
          PyObject_HEAD
          LongValueFacetCounts object;
          static PyObject *wrap_Object(const LongValueFacetCounts&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
