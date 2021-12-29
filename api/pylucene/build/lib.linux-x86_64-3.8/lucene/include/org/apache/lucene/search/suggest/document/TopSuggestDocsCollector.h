#ifndef org_apache_lucene_search_suggest_document_TopSuggestDocsCollector_H
#define org_apache_lucene_search_suggest_document_TopSuggestDocsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            class TopSuggestDocs;
          }
        }
        class ScoreMode;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class TopSuggestDocsCollector : public ::org::apache::lucene::search::SimpleCollector {
             public:
              enum {
                mid_init$_b8f283cdbda5c964,
                mid_collect_040c4cd0390c5aff,
                mid_collect_4e826ed75ee3fa30,
                mid_get_408d6ab1be516d38,
                mid_getCountToCollect_9972fcc56b44e79d,
                mid_scoreMode_8a35254b82ee8276,
                mid_doSetNextReader_8747e0e89febf88d,
                mid_doSkipDuplicates_8454bd5aa23fd11e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TopSuggestDocsCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TopSuggestDocsCollector(const TopSuggestDocsCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

              TopSuggestDocsCollector(jint, jboolean);

              void collect(jint) const;
              void collect(jint, const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jfloat) const;
              ::org::apache::lucene::search::suggest::document::TopSuggestDocs get() const;
              jint getCountToCollect() const;
              ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
      namespace search {
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(TopSuggestDocsCollector);
            extern PyTypeObject *PY_TYPE(TopSuggestDocsCollector);

            class t_TopSuggestDocsCollector {
            public:
              PyObject_HEAD
              TopSuggestDocsCollector object;
              static PyObject *wrap_Object(const TopSuggestDocsCollector&);
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
