#ifndef org_apache_lucene_analysis_commongrams_CommonGramsFilterFactory_H
#define org_apache_lucene_analysis_commongrams_CommonGramsFilterFactory_H

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
        class TokenFilter;
        class CharArraySet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace commongrams {

          class CommonGramsFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_4366615ad7077dae,
              mid_getCommonWords_7aec8e69a9807ca1,
              mid_inform_b4ee53c41a5f629f,
              mid_isIgnoreCase_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CommonGramsFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CommonGramsFilterFactory(const CommonGramsFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            CommonGramsFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
            ::org::apache::lucene::analysis::CharArraySet getCommonWords() const;
            void inform(const ::org::apache::lucene::analysis::util::ResourceLoader &) const;
            jboolean isIgnoreCase() const;
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
        namespace commongrams {
          extern PyType_Def PY_TYPE_DEF(CommonGramsFilterFactory);
          extern PyTypeObject *PY_TYPE(CommonGramsFilterFactory);

          class t_CommonGramsFilterFactory {
          public:
            PyObject_HEAD
            CommonGramsFilterFactory object;
            static PyObject *wrap_Object(const CommonGramsFilterFactory&);
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
