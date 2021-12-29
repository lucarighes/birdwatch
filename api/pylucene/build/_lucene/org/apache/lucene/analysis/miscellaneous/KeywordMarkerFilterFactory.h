#ifndef org_apache_lucene_analysis_miscellaneous_KeywordMarkerFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_KeywordMarkerFilterFactory_H

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
        namespace miscellaneous {

          class KeywordMarkerFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_create_6de1e28d9d10cd9e,
              mid_inform_b4ee53c41a5f629f,
              mid_isIgnoreCase_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeywordMarkerFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KeywordMarkerFilterFactory(const KeywordMarkerFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;
            static ::java::lang::String *PATTERN;
            static ::java::lang::String *PROTECTED_TOKENS;

            KeywordMarkerFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(KeywordMarkerFilterFactory);
          extern PyTypeObject *PY_TYPE(KeywordMarkerFilterFactory);

          class t_KeywordMarkerFilterFactory {
          public:
            PyObject_HEAD
            KeywordMarkerFilterFactory object;
            static PyObject *wrap_Object(const KeywordMarkerFilterFactory&);
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
