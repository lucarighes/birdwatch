#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacets_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacets_H

#include "org/apache/lucene/facet/Facets.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
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

          class TaxonomyFacets : public ::org::apache::lucene::facet::Facets {
           public:
            enum {
              mid_childrenLoaded_8454bd5aa23fd11e,
              mid_getAllDims_d82aee015ceb4d93,
              mid_siblingsLoaded_8454bd5aa23fd11e,
              mid_getChildren_d2c45ef07a322466,
              mid_getSiblings_d2c45ef07a322466,
              mid_verifyDim_c977a2e632d40fa5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacets(jobject obj) : ::org::apache::lucene::facet::Facets(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacets(const TaxonomyFacets& obj) : ::org::apache::lucene::facet::Facets(obj) {}

            jboolean childrenLoaded() const;
            ::java::util::List getAllDims(jint) const;
            jboolean siblingsLoaded() const;
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyFacets);
          extern PyTypeObject *PY_TYPE(TaxonomyFacets);

          class t_TaxonomyFacets {
          public:
            PyObject_HEAD
            TaxonomyFacets object;
            static PyObject *wrap_Object(const TaxonomyFacets&);
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
