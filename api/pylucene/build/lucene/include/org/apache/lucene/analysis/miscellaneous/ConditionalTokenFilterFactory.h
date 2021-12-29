#ifndef org_apache_lucene_analysis_miscellaneous_ConditionalTokenFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_ConditionalTokenFilterFactory_H

#include "org/apache/lucene/analysis/util/TokenFilterFactory.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
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

          class ConditionalTokenFilterFactory : public ::org::apache::lucene::analysis::util::TokenFilterFactory {
           public:
            enum {
              mid_create_6de1e28d9d10cd9e,
              mid_inform_b4ee53c41a5f629f,
              mid_setInnerFilters_d03990be0130160d,
              mid_doInform_b4ee53c41a5f629f,
              mid_create_debb7a449ce81286,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConditionalTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConditionalTokenFilterFactory(const ConditionalTokenFilterFactory& obj) : ::org::apache::lucene::analysis::util::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
            void inform(const ::org::apache::lucene::analysis::util::ResourceLoader &) const;
            void setInnerFilters(const ::java::util::List &) const;
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
          extern PyType_Def PY_TYPE_DEF(ConditionalTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(ConditionalTokenFilterFactory);

          class t_ConditionalTokenFilterFactory {
          public:
            PyObject_HEAD
            ConditionalTokenFilterFactory object;
            static PyObject *wrap_Object(const ConditionalTokenFilterFactory&);
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
