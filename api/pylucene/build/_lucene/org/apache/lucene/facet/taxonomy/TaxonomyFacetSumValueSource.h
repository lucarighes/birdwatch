#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetSumValueSource_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetSumValueSource_H

#include "org/apache/lucene/facet/taxonomy/FloatTaxonomyFacets.h"

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
      namespace search {
        class DoubleValuesSource;
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

          class TaxonomyFacetSumValueSource : public ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets {
           public:
            enum {
              mid_init$_11d4712e49280297,
              mid_init$_19a106d0c81469b3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetSumValueSource(jobject obj) : ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetSumValueSource(const TaxonomyFacetSumValueSource& obj) : ::org::apache::lucene::facet::taxonomy::FloatTaxonomyFacets(obj) {}

            TaxonomyFacetSumValueSource(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::DoubleValuesSource &);
            TaxonomyFacetSumValueSource(const ::org::apache::lucene::facet::taxonomy::OrdinalsReader &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::DoubleValuesSource &);
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacetSumValueSource);
          extern PyTypeObject *PY_TYPE(TaxonomyFacetSumValueSource);

          class t_TaxonomyFacetSumValueSource {
          public:
            PyObject_HEAD
            TaxonomyFacetSumValueSource object;
            static PyObject *wrap_Object(const TaxonomyFacetSumValueSource&);
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
