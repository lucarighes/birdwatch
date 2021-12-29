#ifndef org_apache_lucene_facet_taxonomy_FastTaxonomyFacetCounts_H
#define org_apache_lucene_facet_taxonomy_FastTaxonomyFacetCounts_H

#include "org/apache/lucene/facet/taxonomy/IntTaxonomyFacets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
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
namespace java {
  namespace lang {
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

          class FastTaxonomyFacetCounts : public ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets {
           public:
            enum {
              mid_init$_0279dbd5ca76e087,
              mid_init$_cf8e900354647cb2,
              mid_init$_89f8a21edd2203ee,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FastTaxonomyFacetCounts(jobject obj) : ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FastTaxonomyFacetCounts(const FastTaxonomyFacetCounts& obj) : ::org::apache::lucene::facet::taxonomy::IntTaxonomyFacets(obj) {}

            FastTaxonomyFacetCounts(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
            FastTaxonomyFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::facet::FacetsCollector &);
            FastTaxonomyFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::org::apache::lucene::facet::FacetsConfig &);
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
          extern PyType_Def PY_TYPE_DEF(FastTaxonomyFacetCounts);
          extern PyTypeObject *PY_TYPE(FastTaxonomyFacetCounts);

          class t_FastTaxonomyFacetCounts {
          public:
            PyObject_HEAD
            FastTaxonomyFacetCounts object;
            static PyObject *wrap_Object(const FastTaxonomyFacetCounts&);
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
