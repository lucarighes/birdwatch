#ifndef org_apache_lucene_facet_StringValueFacetCounts_H
#define org_apache_lucene_facet_StringValueFacetCounts_H

#include "org/apache/lucene/facet/Facets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
        class FacetsCollector;
        class StringDocValuesReaderState;
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

        class StringValueFacetCounts : public ::org::apache::lucene::facet::Facets {
         public:
          enum {
            mid_init$_a0b5b8983e46e2cc,
            mid_init$_e5c0788dfe92c019,
            mid_getAllDims_d82aee015ceb4d93,
            mid_getSpecificValue_aaf99af6028dc803,
            mid_getTopChildren_8be156db8a3c742c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StringValueFacetCounts(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StringValueFacetCounts(const StringValueFacetCounts& obj) : ::org::apache::lucene::facet::Facets(obj) {}

          StringValueFacetCounts(const ::org::apache::lucene::facet::StringDocValuesReaderState &);
          StringValueFacetCounts(const ::org::apache::lucene::facet::StringDocValuesReaderState &, const ::org::apache::lucene::facet::FacetsCollector &);

          ::java::util::List getAllDims(jint) const;
          ::java::lang::Number getSpecificValue(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          ::org::apache::lucene::facet::FacetResult getTopChildren(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
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
        extern PyType_Def PY_TYPE_DEF(StringValueFacetCounts);
        extern PyTypeObject *PY_TYPE(StringValueFacetCounts);

        class t_StringValueFacetCounts {
        public:
          PyObject_HEAD
          StringValueFacetCounts object;
          static PyObject *wrap_Object(const StringValueFacetCounts&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
