#ifndef org_apache_lucene_analysis_pattern_SimplePatternTokenizerFactory_H
#define org_apache_lucene_analysis_pattern_SimplePatternTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {
          class SimplePatternTokenizer;
        }
      }
      namespace util {
        class AttributeFactory;
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

          class SimplePatternTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_1c9cfe01a5024f33,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimplePatternTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimplePatternTokenizerFactory(const SimplePatternTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;
            static ::java::lang::String *PATTERN;

            SimplePatternTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::pattern::SimplePatternTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
          extern PyType_Def PY_TYPE_DEF(SimplePatternTokenizerFactory);
          extern PyTypeObject *PY_TYPE(SimplePatternTokenizerFactory);

          class t_SimplePatternTokenizerFactory {
          public:
            PyObject_HEAD
            SimplePatternTokenizerFactory object;
            static PyObject *wrap_Object(const SimplePatternTokenizerFactory&);
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
