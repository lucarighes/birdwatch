#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetCounts_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetCounts_H

#include "org/apache/lucene/facet/taxonomy/IntTaxonomyFacets.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
        class FacetsConfig;
        namespace taxonomy {
          class TaxonomyReader;
          class OrdinalsReader;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class TaxonomyFacetCounts : public ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets {
           public:
            enum {
              mid_init$_20c339a6765418eb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetCounts(jobject obj) : ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetCounts(const TaxonomyFacetCounts& obj) : ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets(obj) {}

            TaxonomyFacetCounts(const ::org::apache::lucene::facet::taxonomy::OrdinalsReader &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacetCounts);
          extern PyTypeObject *PY_TYPE(TaxonomyFacetCounts);

          class t_TaxonomyFacetCounts {
          public:
            PyObject_HEAD
            TaxonomyFacetCounts object;
            static PyObject *wrap_Object(const TaxonomyFacetCounts&);
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
