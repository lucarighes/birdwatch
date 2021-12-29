#ifndef org_apache_lucene_analysis_ar_ArabicStemFilterFactory_H
#define org_apache_lucene_analysis_ar_ArabicStemFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ar {
          class ArabicStemFilter;
        }
        class TokenStream;
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
        namespace ar {

          class ArabicStemFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_8e6ba8692160f0e8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ArabicStemFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ArabicStemFilterFactory(const ArabicStemFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            ArabicStemFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::ar::ArabicStemFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace ar {
          extern PyType_Def PY_TYPE_DEF(ArabicStemFilterFactory);
          extern PyTypeObject *PY_TYPE(ArabicStemFilterFactory);

          class t_ArabicStemFilterFactory {
          public:
            PyObject_HEAD
            ArabicStemFilterFactory object;
            static PyObject *wrap_Object(const ArabicStemFilterFactory&);
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
