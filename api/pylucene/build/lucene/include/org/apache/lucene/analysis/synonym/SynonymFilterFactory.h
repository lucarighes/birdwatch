#ifndef org_apache_lucene_analysis_synonym_SynonymFilterFactory_H
#define org_apache_lucene_analysis_synonym_SynonymFilterFactory_H

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
        namespace synonym {

          class SynonymFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_6de1e28d9d10cd9e,
              mid_inform_b4ee53c41a5f629f,
              mid_loadSynonyms_ba672952b9f6ef60,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SynonymFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SynonymFilterFactory(const SynonymFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            SynonymFilterFactory(const ::java::util::Map &);

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
        namespace synonym {
          extern PyType_Def PY_TYPE_DEF(SynonymFilterFactory);
          extern PyTypeObject *PY_TYPE(SynonymFilterFactory);

          class t_SynonymFilterFactory {
          public:
            PyObject_HEAD
            SynonymFilterFactory object;
            static PyObject *wrap_Object(const SynonymFilterFactory&);
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
