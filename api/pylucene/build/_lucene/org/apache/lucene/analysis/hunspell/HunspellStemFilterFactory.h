#ifndef org_apache_lucene_analysis_hunspell_HunspellStemFilterFactory_H
#define org_apache_lucene_analysis_hunspell_HunspellStemFilterFactory_H

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
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class HunspellStemFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_6de1e28d9d10cd9e,
              mid_inform_b4ee53c41a5f629f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HunspellStemFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HunspellStemFilterFactory(const HunspellStemFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            HunspellStemFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
            void inform(const ::org::apache::lucene::analysis::util::ResourceLoader &) const;
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
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(HunspellStemFilterFactory);
          extern PyTypeObject *PY_TYPE(HunspellStemFilterFactory);

          class t_HunspellStemFilterFactory {
          public:
            PyObject_HEAD
            HunspellStemFilterFactory object;
            static PyObject *wrap_Object(const HunspellStemFilterFactory&);
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
