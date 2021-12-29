#ifndef org_apache_lucene_facet_taxonomy_SearcherTaxonomyManager_H
#define org_apache_lucene_facet_taxonomy_SearcherTaxonomyManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class IndexWriter;
      }
      namespace facet {
        namespace taxonomy {
          class SearcherTaxonomyManager$SearcherAndTaxonomy;
          namespace directory {
            class DirectoryTaxonomyWriter;
            class DirectoryTaxonomyReader;
          }
        }
      }
      namespace store {
        class Directory;
      }
      namespace search {
        class SearcherFactory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

          class SearcherTaxonomyManager : public ::org::apache::lucene::search::ReferenceManager {
           public:
            enum {
              mid_init$_72e2396fabbd42f0,
              mid_init$_ccdbb8b8c1f803f4,
              mid_init$_4eb14fe126628cad,
              mid_init$_e52fd45136d31028,
              mid_refreshIfNeeded_5c61e816c7753b1e,
              mid_tryIncRef_14e0c7cbb0bc6a28,
              mid_decRef_190a08f619ab3c18,
              mid_getRefCount_55ac14ebcefa4900,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SearcherTaxonomyManager(jobject obj) : ::org::apache::lucene::search::ReferenceManager(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SearcherTaxonomyManager(const SearcherTaxonomyManager& obj) : ::org::apache::lucene::search::ReferenceManager(obj) {}

            SearcherTaxonomyManager(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyReader &, const ::org::apache::lucene::search::SearcherFactory &);
            SearcherTaxonomyManager(const ::org::apache::lucene::index::IndexWriter &, const ::org::apache::lucene::search::SearcherFactory &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter &);
            SearcherTaxonomyManager(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::SearcherFactory &);
            SearcherTaxonomyManager(const ::org::apache::lucene::index::IndexWriter &, jboolean, const ::org::apache::lucene::search::SearcherFactory &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter &);
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
          extern PyType_Def PY_TYPE_DEF(SearcherTaxonomyManager);
          extern PyTypeObject *PY_TYPE(SearcherTaxonomyManager);

          class t_SearcherTaxonomyManager {
          public:
            PyObject_HEAD
            SearcherTaxonomyManager object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SearcherTaxonomyManager *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SearcherTaxonomyManager&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SearcherTaxonomyManager&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
