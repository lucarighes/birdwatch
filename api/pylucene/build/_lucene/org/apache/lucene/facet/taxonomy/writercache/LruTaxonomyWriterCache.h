#ifndef org_apache_lucene_facet_taxonomy_writercache_LruTaxonomyWriterCache_H
#define org_apache_lucene_facet_taxonomy_writercache_LruTaxonomyWriterCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace writercache {
            class LruTaxonomyWriterCache$LRUType;
            class TaxonomyWriterCache;
          }
          class FacetLabel;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace writercache {

            class LruTaxonomyWriterCache : public ::java::lang::Object {
             public:
              enum {
                mid_init$_040c4cd0390c5aff,
                mid_init$_8cba9aa7fe541ac2,
                mid_clear_f2cc1bce94666404,
                mid_close_f2cc1bce94666404,
                mid_get_1e6795f28098d13d,
                mid_isFull_8454bd5aa23fd11e,
                mid_put_94a843fa7d322607,
                mid_size_9972fcc56b44e79d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LruTaxonomyWriterCache(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LruTaxonomyWriterCache(const LruTaxonomyWriterCache& obj) : ::java::lang::Object(obj) {}

              LruTaxonomyWriterCache(jint);
              LruTaxonomyWriterCache(jint, const ::org::apache::lucene::facet::taxonomy::writercache::LruTaxonomyWriterCache$LRUType &);

              void clear() const;
              void close() const;
              jint get(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              jboolean isFull() const;
              jboolean put(const ::org::apache::lucene::facet::taxonomy::FacetLabel &, jint) const;
              jint size() const;
            };
          }
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
          namespace writercache {
            extern PyType_Def PY_TYPE_DEF(LruTaxonomyWriterCache);
            extern PyTypeObject *PY_TYPE(LruTaxonomyWriterCache);

            class t_LruTaxonomyWriterCache {
            public:
              PyObject_HEAD
              LruTaxonomyWriterCache object;
              static PyObject *wrap_Object(const LruTaxonomyWriterCache&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
