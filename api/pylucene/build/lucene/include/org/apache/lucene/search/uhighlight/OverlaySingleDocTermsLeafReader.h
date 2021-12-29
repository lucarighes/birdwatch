#ifndef org_apache_lucene_search_uhighlight_OverlaySingleDocTermsLeafReader_H
#define org_apache_lucene_search_uhighlight_OverlaySingleDocTermsLeafReader_H

#include "org/apache/lucene/index/FilterLeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class LeafReader;
        class IndexReader$CacheHelper;
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
      namespace search {
        namespace uhighlight {

          class OverlaySingleDocTermsLeafReader : public ::org::apache::lucene::index::FilterLeafReader {
           public:
            enum {
              mid_init$_273e2f2ef481a24f,
              mid_getCoreCacheHelper_a64c414fea9a8cf6,
              mid_getReaderCacheHelper_a64c414fea9a8cf6,
              mid_terms_3976802ad88273cd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OverlaySingleDocTermsLeafReader(jobject obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OverlaySingleDocTermsLeafReader(const OverlaySingleDocTermsLeafReader& obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {}

            OverlaySingleDocTermsLeafReader(const ::org::apache::lucene::index::LeafReader &, const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &, jint);

            ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
            ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
            ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(OverlaySingleDocTermsLeafReader);
          extern PyTypeObject *PY_TYPE(OverlaySingleDocTermsLeafReader);

          class t_OverlaySingleDocTermsLeafReader {
          public:
            PyObject_HEAD
            OverlaySingleDocTermsLeafReader object;
            static PyObject *wrap_Object(const OverlaySingleDocTermsLeafReader&);
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
