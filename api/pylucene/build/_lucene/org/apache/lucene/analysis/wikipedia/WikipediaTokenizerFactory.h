#ifndef org_apache_lucene_analysis_wikipedia_WikipediaTokenizerFactory_H
#define org_apache_lucene_analysis_wikipedia_WikipediaTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace wikipedia {
          class WikipediaTokenizer;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace wikipedia {

          class WikipediaTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_7456015132de7c2e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WikipediaTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WikipediaTokenizerFactory(const WikipediaTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;
            static ::java::lang::String *TOKEN_OUTPUT;
            static ::java::lang::String *UNTOKENIZED_TYPES;

            WikipediaTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::wikipedia::WikipediaTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
        namespace wikipedia {
          extern PyType_Def PY_TYPE_DEF(WikipediaTokenizerFactory);
          extern PyTypeObject *PY_TYPE(WikipediaTokenizerFactory);

          class t_WikipediaTokenizerFactory {
          public:
            PyObject_HEAD
            WikipediaTokenizerFactory object;
            static PyObject *wrap_Object(const WikipediaTokenizerFactory&);
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
