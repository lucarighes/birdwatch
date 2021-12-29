#ifndef org_apache_lucene_analysis_miscellaneous_ProtectedTermFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_ProtectedTermFilterFactory_H

#include "org/apache/lucene/analysis/miscellaneous/ConditionalTokenFilterFactory.h"

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
        namespace util {
          class ResourceLoader;
        }
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
        namespace miscellaneous {

          class ProtectedTermFilterFactory : public ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilterFactory {
           public:
            enum {
              mid_init$_408bd889ee3beae5,
              mid_doInform_b4ee53c41a5f629f,
              mid_getProtectedTerms_7aec8e69a9807ca1,
              mid_isIgnoreCase_8454bd5aa23fd11e,
              mid_create_debb7a449ce81286,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ProtectedTermFilterFactory(jobject obj) : ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ProtectedTermFilterFactory(const ProtectedTermFilterFactory& obj) : ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilterFactory(obj) {}

            static jchar FILTER_ARG_SEPARATOR;
            static jchar FILTER_NAME_ID_SEPARATOR;
            static ::java::lang::String *NAME;
            static ::java::lang::String *PROTECTED_TERMS;

            ProtectedTermFilterFactory(const ::java::util::Map &);

            void doInform(const ::org::apache::lucene::analysis::util::ResourceLoader &) const;
            ::org::apache::lucene::analysis::CharArraySet getProtectedTerms() const;
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
          extern PyType_Def PY_TYPE_DEF(ProtectedTermFilterFactory);
          extern PyTypeObject *PY_TYPE(ProtectedTermFilterFactory);

          class t_ProtectedTermFilterFactory {
          public:
            PyObject_HEAD
            ProtectedTermFilterFactory object;
            static PyObject *wrap_Object(const ProtectedTermFilterFactory&);
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
