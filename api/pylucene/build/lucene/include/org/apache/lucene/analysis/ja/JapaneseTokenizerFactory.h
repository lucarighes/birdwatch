#ifndef org_apache_lucene_analysis_ja_JapaneseTokenizerFactory_H
#define org_apache_lucene_analysis_ja_JapaneseTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace ja {
          class JapaneseTokenizer;
        }
        namespace util {
          class ResourceLoader;
          class ResourceLoaderAware;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class JapaneseTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_61ce2f1c25d71553,
              mid_inform_b4ee53c41a5f629f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseTokenizerFactory(const JapaneseTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;

            JapaneseTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::ja::JapaneseTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseTokenizerFactory);
          extern PyTypeObject *PY_TYPE(JapaneseTokenizerFactory);

          class t_JapaneseTokenizerFactory {
          public:
            PyObject_HEAD
            JapaneseTokenizerFactory object;
            static PyObject *wrap_Object(const JapaneseTokenizerFactory&);
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
