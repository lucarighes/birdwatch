#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetSumIntAssociations_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetSumIntAssociations_H

#include "org/apache/lucene/facet/taxonomy/IntTaxonomyFacets.h"

namespace java {
  namespace lang {
    class Class;
    class String;
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

          class TaxonomyFacetSumIntAssociations : public ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets {
           public:
            enum {
              mid_init$_0279dbd5ca76e087,
              mid_init$_cf8e900354647cb2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetSumIntAssociations(jobject obj) : ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetSumIntAssociations(const TaxonomyFacetSumIntAssociations& obj) : ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets(obj) {}

            TaxonomyFacetSumIntAssociations(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
            TaxonomyFacetSumIntAssociations(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacetSumIntAssociations);
          extern PyTypeObject *PY_TYPE(TaxonomyFacetSumIntAssociations);

          class t_TaxonomyFacetSumIntAssociations {
          public:
            PyObject_HEAD
            TaxonomyFacetSumIntAssociations object;
            static PyObject *wrap_Object(const TaxonomyFacetSumIntAssociations&);
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
