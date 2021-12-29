#ifndef org_apache_lucene_search_suggest_document_NRTSuggester_H
#define org_apache_lucene_search_suggest_document_NRTSuggester_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class Accountable;
      }
      namespace store {
        class IndexInput;
      }
      namespace search {
        namespace suggest {
          namespace document {
            class NRTSuggester;
            class CompletionScorer;
            class TopSuggestDocsCollector;
            class CompletionPostingsFormat$FSTLoadMode;
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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
      namespace search {
        namespace suggest {
          namespace document {

            class NRTSuggester : public ::java::lang::Object {
             public:
              enum {
                mid_getChildResources_d4dfbf7a26ff41df,
                mid_load_f10e230490444dce,
                mid_lookup_9e8de2090ae7d332,
                mid_ramBytesUsed_2e5ae9edcb9b072f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NRTSuggester(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              NRTSuggester(const NRTSuggester& obj) : ::java::lang::Object(obj) {}

              ::java::util::Collection getChildResources() const;
              static NRTSuggester load(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat$FSTLoadMode &);
              void lookup(const ::org::apache::lucene::search::suggest::document::CompletionScorer &, const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::search::suggest::document::TopSuggestDocsCollector &) const;
              jlong ramBytesUsed() const;
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
            extern PyType_Def PY_TYPE_DEF(NRTSuggester);
            extern PyTypeObject *PY_TYPE(NRTSuggester);

            class t_NRTSuggester {
            public:
              PyObject_HEAD
              NRTSuggester object;
              static PyObject *wrap_Object(const NRTSuggester&);
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
