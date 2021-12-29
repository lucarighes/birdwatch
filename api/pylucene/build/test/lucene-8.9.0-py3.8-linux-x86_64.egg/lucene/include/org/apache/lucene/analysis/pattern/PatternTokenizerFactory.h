#ifndef org_apache_lucene_analysis_pattern_PatternTokenizerFactory_H
#define org_apache_lucene_analysis_pattern_PatternTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace pattern {
          class PatternTokenizer;
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

          class PatternTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_a38396ea782d9f85,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternTokenizerFactory(const PatternTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            static ::java::lang::String *GROUP;
            static ::java::lang::String *NAME;
            static ::java::lang::String *PATTERN;

            PatternTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::pattern::PatternTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
          extern PyType_Def PY_TYPE_DEF(PatternTokenizerFactory);
          extern PyTypeObject *PY_TYPE(PatternTokenizerFactory);

          class t_PatternTokenizerFactory {
          public:
            PyObject_HEAD
            PatternTokenizerFactory object;
            static PyObject *wrap_Object(const PatternTokenizerFactory&);
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
