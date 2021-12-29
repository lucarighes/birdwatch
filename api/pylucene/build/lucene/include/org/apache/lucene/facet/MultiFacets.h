#ifndef org_apache_lucene_facet_MultiFacets_H
#define org_apache_lucene_facet_MultiFacets_H

#include "org/apache/lucene/facet/Facets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
    class Number;
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
      namespace facet {

        class MultiFacets : public ::org::apache::lucene::facet::Facets {
         public:
          enum {
            mid_init$_408bd889ee3beae5,
            mid_init$_92b1d0d73323b79e,
            mid_getAllDims_d82aee015ceb4d93,
            mid_getSpecificValue_aaf99af6028dc803,
            mid_getTopChildren_8be156db8a3c742c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiFacets(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiFacets(const MultiFacets& obj) : ::org::apache::lucene::facet::Facets(obj) {}

          MultiFacets(const ::java::util::Map &);
          MultiFacets(const ::java::util::Map &, const ::org::apache::lucene::facet::Facets &);

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
        extern PyType_Def PY_TYPE_DEF(MultiFacets);
        extern PyTypeObject *PY_TYPE(MultiFacets);

        class t_MultiFacets {
        public:
          PyObject_HEAD
          MultiFacets object;
          static PyObject *wrap_Object(const MultiFacets&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
