#ifndef org_apache_lucene_facet_taxonomy_IntTaxonomyFacets_H
#define org_apache_lucene_facet_taxonomy_IntTaxonomyFacets_H

#include "org/apache/lucene/facet/taxonomy/TaxonomyFacets.h"

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
        namespace taxonomy {

          class IntTaxonomyFacets : public ::org::apache::lucene::facet::taxonomy::TaxonomyFacets {
           public:
            enum {
              mid_getSpecificValue_aaf99af6028dc803,
              mid_getTopChildren_8be156db8a3c742c,
              mid_rollup_f2cc1bce94666404,
              mid_useHashTable_d8ab24307ac62b3e,
              mid_increment_438c62480c481c65,
              mid_increment_040c4cd0390c5aff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntTaxonomyFacets(jobject obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyFacets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntTaxonomyFacets(const IntTaxonomyFacets& obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyFacets(obj) {}

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
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(IntTaxonomyFacets);
          extern PyTypeObject *PY_TYPE(IntTaxonomyFacets);

          class t_IntTaxonomyFacets {
          public:
            PyObject_HEAD
            IntTaxonomyFacets object;
            static PyObject *wrap_Object(const IntTaxonomyFacets&);
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
