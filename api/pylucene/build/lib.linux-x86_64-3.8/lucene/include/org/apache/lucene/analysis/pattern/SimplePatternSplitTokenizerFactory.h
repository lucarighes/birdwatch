#ifndef org_apache_lucene_analysis_pattern_SimplePatternSplitTokenizerFactory_H
#define org_apache_lucene_analysis_pattern_SimplePatternSplitTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace pattern {
          class SimplePatternSplitTokenizer;
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
        namespace pattern {

          class SimplePatternSplitTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_ab7ac4ff3bcc2a68,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimplePatternSplitTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimplePatternSplitTokenizerFactory(const SimplePatternSplitTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;
            static ::java::lang::String *PATTERN;

            SimplePatternSplitTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::pattern::SimplePatternSplitTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
        namespace pattern {
          extern PyType_Def PY_TYPE_DEF(SimplePatternSplitTokenizerFactory);
          extern PyTypeObject *PY_TYPE(SimplePatternSplitTokenizerFactory);

          class t_SimplePatternSplitTokenizerFactory {
          public:
            PyObject_HEAD
            SimplePatternSplitTokenizerFactory object;
            static PyObject *wrap_Object(const SimplePatternSplitTokenizerFactory&);
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
