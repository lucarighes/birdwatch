#ifndef org_apache_lucene_search_suggest_analyzing_SuggestStopFilterFactory_H
#define org_apache_lucene_search_suggest_analyzing_SuggestStopFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace java {
  namespace util {
    class Map;
  }
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
      namespace analysis {
        class TokenStream;
        namespace util {
          class ResourceLoader;
          class ResourceLoaderAware;
        }
        class CharArraySet;
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
          namespace analyzing {

            class SuggestStopFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
             public:
              enum {
                mid_init$_408bd889ee3beae5,
                mid_create_6de1e28d9d10cd9e,
                mid_getStopWords_7aec8e69a9807ca1,
                mid_inform_b4ee53c41a5f629f,
                mid_isIgnoreCase_8454bd5aa23fd11e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SuggestStopFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SuggestStopFilterFactory(const SuggestStopFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

              static ::java::lang::String *FORMAT_SNOWBALL;
              static ::java::lang::String *FORMAT_WORDSET;
              static ::java::lang::String *NAME;

              SuggestStopFilterFactory(const ::java::util::Map &);

              ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
              ::org::apache::lucene::analysis::CharArraySet getStopWords() const;
              void inform(const ::org::apache::lucene::analysis::util::ResourceLoader &) const;
              jboolean isIgnoreCase() const;
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
          namespace analyzing {
            extern PyType_Def PY_TYPE_DEF(SuggestStopFilterFactory);
            extern PyTypeObject *PY_TYPE(SuggestStopFilterFactory);

            class t_SuggestStopFilterFactory {
            public:
              PyObject_HEAD
              SuggestStopFilterFactory object;
              static PyObject *wrap_Object(const SuggestStopFilterFactory&);
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
