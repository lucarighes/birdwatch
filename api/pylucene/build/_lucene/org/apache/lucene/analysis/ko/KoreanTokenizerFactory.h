#ifndef org_apache_lucene_analysis_ko_KoreanTokenizerFactory_H
#define org_apache_lucene_analysis_ko_KoreanTokenizerFactory_H

#include "org/apache/lucene/analysis/util/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace ko {
          class KoreanTokenizer;
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
        namespace ko {

          class KoreanTokenizerFactory : public ::org::apache::lucene::analysis::util::TokenizerFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_ce27de4aba28e64a,
              mid_inform_b4ee53c41a5f629f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanTokenizerFactory(const KoreanTokenizerFactory& obj) : ::org::apache::lucene::analysis::util::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;

            KoreanTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::ko::KoreanTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(KoreanTokenizerFactory);
          extern PyTypeObject *PY_TYPE(KoreanTokenizerFactory);

          class t_KoreanTokenizerFactory {
          public:
            PyObject_HEAD
            KoreanTokenizerFactory object;
            static PyObject *wrap_Object(const KoreanTokenizerFactory&);
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
